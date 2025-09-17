#!/usr/bin/env python3
#
# Author: Adam Cholewinski
# Date: 2025-09-17
# Description: Generates header files from STM32 SVD files, including bitfield structures,
#              register unions, and handling of derived peripherals.

import os
from lxml import etree
from datetime import datetime


def parse_svd(svd_path, author="Unknown"):
    tree = etree.parse(svd_path)
    root = tree.getroot()
    peripherals = root.findall('.//peripheral')

    current_date = datetime.now().strftime("%Y-%m-%d")
    device_name = root.findtext('description') or root.findtext('name') or "STM32 Microcontroller"
    periph_map = {p.findtext('name'): p for p in peripherals}

    for periph in peripherals:
        derived_from = periph.get('derivedFrom')
        if derived_from:
            base_periph = periph_map.get(derived_from)
            if base_periph is None:
                print(f"Warning: Missing base definition for: {derived_from} — skipping {periph.findtext('name')}")
                continue
            periph_copy = etree.fromstring(etree.tostring(base_periph))
            periph_copy.find('name').text = periph.findtext('name')
            periph_copy.find('baseAddress').text = periph.findtext('baseAddress')
            if periph.find('interrupt') is not None:
                if periph_copy.find('interrupt') is not None:
                    periph_copy.remove(periph_copy.find('interrupt'))
                periph_copy.append(periph.find('interrupt'))
            periph = periph_copy

        name = periph.findtext('name')
        base_addr = periph.findtext('baseAddress')
        description = periph.findtext('description') or f"{name} peripheral"
        registers = periph.find('registers')

        if registers is None:
            print(f"Peripheral {name} has no registers — skipping.")
            continue

        struct_lines = []
        typedefs = []

        for reg in registers.findall('register'):
            reg_name = reg.findtext('name')
            reg_desc = reg.findtext('description') or ''
            offset = int(reg.findtext('addressOffset'), 16)
            fields = reg.find('fields')

            if fields is None:
                print(f"Register {reg_name} has no fields — skipping.")
                continue

            bits = ['  volatile uint32_t REG;', '  struct {']
            bit_slots = [None] * 32

            # Collect bitfield definitions into bit_slots[0..31]
            for field in fields.findall('field'):
                fname = field.findtext('name')
                fdesc = field.findtext('description') or ''
                bit_offset = int(field.findtext('bitOffset'))
                bit_width = int(field.findtext('bitWidth'))
                clean_desc = ' '.join(fdesc.strip().split())

                for i in range(bit_width):
                    index = bit_offset + i
                    if index >= 32:
                        print(f"Warning: Field {fname} in {reg_name} exceeds 32-bit boundary — skipped.")
                        continue
                    if bit_slots[index] is not None:
                        print(f"Warning: Overlapping bit definition in {reg_name} at bit {index}")
                    if i == 0:
                        bit_slots[index] = (fname, bit_width, clean_desc)
                    else:
                        bit_slots[index] = (None, None, None)

            # Generate bitfield struct in order 0..31, including RESERVED fields
            i = 0
            reserved_count = 0
            while i < 32:
                entry = bit_slots[i]
                if entry is None:
                    bits.append(f'    volatile uint32_t RESERVED{reserved_count} : 1; // bit {i}')
                    reserved_count += 1
                    i += 1
                elif entry[0] is not None:
                    field_name, width, desc = entry
                    bits.append(f'    volatile uint32_t {field_name} : {width}; // bit {i} {desc}')
                    i += width
                else:
                    i += 1

            bits.append('  } BITS;')
            typedefs.append(f'typedef union {{\n' + '\n'.join(bits) + f'\n}} {name}_{reg_name}_t;\n')
            struct_lines.append(f'  {name}_{reg_name}_t {reg_name};')

        struct_def = f'typedef struct {{\n' + '\n'.join(struct_lines) + f'\n}} {name}_t;\n'
        base_define = f'#define {name}_BASE ({base_addr}UL)\n#define {name} (({name}_t *){name}_BASE)\n'

        bit_aliases = []
        for reg in registers.findall('register'):
            reg_name = reg.findtext('name')
            bit_aliases.append(f'#define {name}_{reg_name}bits ({name}->{reg_name}.BITS)')

        header_lines = [
            f"/**",
            f" * @file    {name}.h",
            f" * @author  {author}",
            f" * @date    {current_date}",
            f" * @brief   {description}",
            f" *",
            f" * This header file provides register definitions and bitfield access",
            f" * for the {name} peripheral of the {device_name}.",
            f" */",
            "",
            f"#ifndef _{name}_H",
            f"#define _{name}_H",
            "",
            "#include <stdint.h>",
            ""
        ]

        footer_lines = [
            "",
            f"#endif // _{name}_H"
        ]

        full_header = '\n'.join(header_lines + typedefs + [struct_def] + [base_define] + bit_aliases + footer_lines)

        os.makedirs('output', exist_ok=True)
        with open(f'output/{name}.h', 'w', encoding='utf-8') as f:
            f.write(full_header)

        print(f"Generated: output/{name}.h")


# Example usage
parse_svd(r".\STM32F103.svd", author="Adam Cholewinski")
