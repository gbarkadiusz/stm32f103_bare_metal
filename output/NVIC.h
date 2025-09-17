/**
 * @file    NVIC.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Nested Vectored Interrupt
      Controller
 *
 * This header file provides register definitions and bitfield access
 * for the NVIC peripheral of the STM32F103.
 */

#ifndef _NVIC_H
#define _NVIC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SETENA : 32; // bit 0 SETENA
  } BITS;
} NVIC_ISER0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SETENA : 32; // bit 0 SETENA
  } BITS;
} NVIC_ISER1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CLRENA : 32; // bit 0 CLRENA
  } BITS;
} NVIC_ICER0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CLRENA : 32; // bit 0 CLRENA
  } BITS;
} NVIC_ICER1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SETPEND : 32; // bit 0 SETPEND
  } BITS;
} NVIC_ISPR0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SETPEND : 32; // bit 0 SETPEND
  } BITS;
} NVIC_ISPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CLRPEND : 32; // bit 0 CLRPEND
  } BITS;
} NVIC_ICPR0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CLRPEND : 32; // bit 0 CLRPEND
  } BITS;
} NVIC_ICPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ACTIVE : 32; // bit 0 ACTIVE
  } BITS;
} NVIC_IABR0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ACTIVE : 32; // bit 0 ACTIVE
  } BITS;
} NVIC_IABR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR8_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR9_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR10_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR11_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR12_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR13_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IPR_N0 : 8; // bit 0 IPR_N0
    volatile uint32_t IPR_N1 : 8; // bit 8 IPR_N1
    volatile uint32_t IPR_N2 : 8; // bit 16 IPR_N2
    volatile uint32_t IPR_N3 : 8; // bit 24 IPR_N3
  } BITS;
} NVIC_IPR14_t;

typedef struct {
  NVIC_ISER0_t ISER0;
  NVIC_ISER1_t ISER1;
  NVIC_ICER0_t ICER0;
  NVIC_ICER1_t ICER1;
  NVIC_ISPR0_t ISPR0;
  NVIC_ISPR1_t ISPR1;
  NVIC_ICPR0_t ICPR0;
  NVIC_ICPR1_t ICPR1;
  NVIC_IABR0_t IABR0;
  NVIC_IABR1_t IABR1;
  NVIC_IPR0_t IPR0;
  NVIC_IPR1_t IPR1;
  NVIC_IPR2_t IPR2;
  NVIC_IPR3_t IPR3;
  NVIC_IPR4_t IPR4;
  NVIC_IPR5_t IPR5;
  NVIC_IPR6_t IPR6;
  NVIC_IPR7_t IPR7;
  NVIC_IPR8_t IPR8;
  NVIC_IPR9_t IPR9;
  NVIC_IPR10_t IPR10;
  NVIC_IPR11_t IPR11;
  NVIC_IPR12_t IPR12;
  NVIC_IPR13_t IPR13;
  NVIC_IPR14_t IPR14;
} NVIC_t;

#define NVIC_BASE (0xE000E100UL)
#define NVIC ((NVIC_t *)NVIC_BASE)

#define NVIC_ISER0bits (NVIC->ISER0.BITS)
#define NVIC_ISER1bits (NVIC->ISER1.BITS)
#define NVIC_ICER0bits (NVIC->ICER0.BITS)
#define NVIC_ICER1bits (NVIC->ICER1.BITS)
#define NVIC_ISPR0bits (NVIC->ISPR0.BITS)
#define NVIC_ISPR1bits (NVIC->ISPR1.BITS)
#define NVIC_ICPR0bits (NVIC->ICPR0.BITS)
#define NVIC_ICPR1bits (NVIC->ICPR1.BITS)
#define NVIC_IABR0bits (NVIC->IABR0.BITS)
#define NVIC_IABR1bits (NVIC->IABR1.BITS)
#define NVIC_IPR0bits (NVIC->IPR0.BITS)
#define NVIC_IPR1bits (NVIC->IPR1.BITS)
#define NVIC_IPR2bits (NVIC->IPR2.BITS)
#define NVIC_IPR3bits (NVIC->IPR3.BITS)
#define NVIC_IPR4bits (NVIC->IPR4.BITS)
#define NVIC_IPR5bits (NVIC->IPR5.BITS)
#define NVIC_IPR6bits (NVIC->IPR6.BITS)
#define NVIC_IPR7bits (NVIC->IPR7.BITS)
#define NVIC_IPR8bits (NVIC->IPR8.BITS)
#define NVIC_IPR9bits (NVIC->IPR9.BITS)
#define NVIC_IPR10bits (NVIC->IPR10.BITS)
#define NVIC_IPR11bits (NVIC->IPR11.BITS)
#define NVIC_IPR12bits (NVIC->IPR12.BITS)
#define NVIC_IPR13bits (NVIC->IPR13.BITS)
#define NVIC_IPR14bits (NVIC->IPR14.BITS)

#endif // _NVIC_H