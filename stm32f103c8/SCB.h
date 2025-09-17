/**
 * @file    SCB.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   System control block
 *
 * This header file provides register definitions and bitfield access
 * for the SCB peripheral of the STM32F103.
 */

#ifndef _SCB_H
#define _SCB_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t Revision : 4; // bit 0 Revision number
    uint32_t PartNo : 12; // bit 4 Part number of the processor
    uint32_t Constant : 4; // bit 16 Reads as 0xF
    uint32_t Variant : 4; // bit 20 Variant number
    uint32_t Implementer : 8; // bit 24 Implementer code
  } BITS;
} SCB_CPUID_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t VECTACTIVE : 9; // bit 0 Active vector
    uint32_t RESERVED0 : 1; // bit 9
    uint32_t RESERVED1 : 1; // bit 10
    uint32_t RETTOBASE : 1; // bit 11 Return to base level
    uint32_t VECTPENDING : 7; // bit 12 Pending vector
    uint32_t RESERVED2 : 1; // bit 19
    uint32_t RESERVED3 : 1; // bit 20
    uint32_t RESERVED4 : 1; // bit 21
    uint32_t ISRPENDING : 1; // bit 22 Interrupt pending flag
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t RESERVED6 : 1; // bit 24
    uint32_t PENDSTCLR : 1; // bit 25 SysTick exception clear-pending bit
    uint32_t PENDSTSET : 1; // bit 26 SysTick exception set-pending bit
    uint32_t PENDSVCLR : 1; // bit 27 PendSV clear-pending bit
    uint32_t PENDSVSET : 1; // bit 28 PendSV set-pending bit
    uint32_t RESERVED7 : 1; // bit 29
    uint32_t RESERVED8 : 1; // bit 30
    uint32_t NMIPENDSET : 1; // bit 31 NMI set-pending bit.
  } BITS;
} SCB_ICSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t RESERVED4 : 1; // bit 4
    uint32_t RESERVED5 : 1; // bit 5
    uint32_t RESERVED6 : 1; // bit 6
    uint32_t RESERVED7 : 1; // bit 7
    uint32_t RESERVED8 : 1; // bit 8
    uint32_t TBLOFF : 21; // bit 9 Vector table base offset field
    uint32_t RESERVED9 : 1; // bit 30
    uint32_t RESERVED10 : 1; // bit 31
  } BITS;
} SCB_VTOR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t VECTRESET : 1; // bit 0 VECTRESET
    uint32_t VECTCLRACTIVE : 1; // bit 1 VECTCLRACTIVE
    uint32_t SYSRESETREQ : 1; // bit 2 SYSRESETREQ
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t RESERVED3 : 1; // bit 6
    uint32_t RESERVED4 : 1; // bit 7
    uint32_t PRIGROUP : 3; // bit 8 PRIGROUP
    uint32_t RESERVED5 : 1; // bit 11
    uint32_t RESERVED6 : 1; // bit 12
    uint32_t RESERVED7 : 1; // bit 13
    uint32_t RESERVED8 : 1; // bit 14
    uint32_t ENDIANESS : 1; // bit 15 ENDIANESS
    uint32_t VECTKEYSTAT : 16; // bit 16 Register key
  } BITS;
} SCB_AIRCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t SLEEPONEXIT : 1; // bit 1 SLEEPONEXIT
    uint32_t SLEEPDEEP : 1; // bit 2 SLEEPDEEP
    uint32_t RESERVED1 : 1; // bit 3
    uint32_t SEVEONPEND : 1; // bit 4 Send Event on Pending bit
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t RESERVED3 : 1; // bit 6
    uint32_t RESERVED4 : 1; // bit 7
    uint32_t RESERVED5 : 1; // bit 8
    uint32_t RESERVED6 : 1; // bit 9
    uint32_t RESERVED7 : 1; // bit 10
    uint32_t RESERVED8 : 1; // bit 11
    uint32_t RESERVED9 : 1; // bit 12
    uint32_t RESERVED10 : 1; // bit 13
    uint32_t RESERVED11 : 1; // bit 14
    uint32_t RESERVED12 : 1; // bit 15
    uint32_t RESERVED13 : 1; // bit 16
    uint32_t RESERVED14 : 1; // bit 17
    uint32_t RESERVED15 : 1; // bit 18
    uint32_t RESERVED16 : 1; // bit 19
    uint32_t RESERVED17 : 1; // bit 20
    uint32_t RESERVED18 : 1; // bit 21
    uint32_t RESERVED19 : 1; // bit 22
    uint32_t RESERVED20 : 1; // bit 23
    uint32_t RESERVED21 : 1; // bit 24
    uint32_t RESERVED22 : 1; // bit 25
    uint32_t RESERVED23 : 1; // bit 26
    uint32_t RESERVED24 : 1; // bit 27
    uint32_t RESERVED25 : 1; // bit 28
    uint32_t RESERVED26 : 1; // bit 29
    uint32_t RESERVED27 : 1; // bit 30
    uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} SCB_SCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NONBASETHRDENA : 1; // bit 0 Configures how the processor enters Thread mode
    uint32_t USERSETMPEND : 1; // bit 1 USERSETMPEND
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t UNALIGN__TRP : 1; // bit 3 UNALIGN_ TRP
    uint32_t DIV_0_TRP : 1; // bit 4 DIV_0_TRP
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t BFHFNMIGN : 1; // bit 8 BFHFNMIGN
    uint32_t STKALIGN : 1; // bit 9 STKALIGN
    uint32_t RESERVED4 : 1; // bit 10
    uint32_t RESERVED5 : 1; // bit 11
    uint32_t RESERVED6 : 1; // bit 12
    uint32_t RESERVED7 : 1; // bit 13
    uint32_t RESERVED8 : 1; // bit 14
    uint32_t RESERVED9 : 1; // bit 15
    uint32_t RESERVED10 : 1; // bit 16
    uint32_t RESERVED11 : 1; // bit 17
    uint32_t RESERVED12 : 1; // bit 18
    uint32_t RESERVED13 : 1; // bit 19
    uint32_t RESERVED14 : 1; // bit 20
    uint32_t RESERVED15 : 1; // bit 21
    uint32_t RESERVED16 : 1; // bit 22
    uint32_t RESERVED17 : 1; // bit 23
    uint32_t RESERVED18 : 1; // bit 24
    uint32_t RESERVED19 : 1; // bit 25
    uint32_t RESERVED20 : 1; // bit 26
    uint32_t RESERVED21 : 1; // bit 27
    uint32_t RESERVED22 : 1; // bit 28
    uint32_t RESERVED23 : 1; // bit 29
    uint32_t RESERVED24 : 1; // bit 30
    uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} SCB_CCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PRI_4 : 8; // bit 0 Priority of system handler 4
    uint32_t PRI_5 : 8; // bit 8 Priority of system handler 5
    uint32_t PRI_6 : 8; // bit 16 Priority of system handler 6
    uint32_t RESERVED0 : 1; // bit 24
    uint32_t RESERVED1 : 1; // bit 25
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t RESERVED3 : 1; // bit 27
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} SCB_SHPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t RESERVED4 : 1; // bit 4
    uint32_t RESERVED5 : 1; // bit 5
    uint32_t RESERVED6 : 1; // bit 6
    uint32_t RESERVED7 : 1; // bit 7
    uint32_t RESERVED8 : 1; // bit 8
    uint32_t RESERVED9 : 1; // bit 9
    uint32_t RESERVED10 : 1; // bit 10
    uint32_t RESERVED11 : 1; // bit 11
    uint32_t RESERVED12 : 1; // bit 12
    uint32_t RESERVED13 : 1; // bit 13
    uint32_t RESERVED14 : 1; // bit 14
    uint32_t RESERVED15 : 1; // bit 15
    uint32_t RESERVED16 : 1; // bit 16
    uint32_t RESERVED17 : 1; // bit 17
    uint32_t RESERVED18 : 1; // bit 18
    uint32_t RESERVED19 : 1; // bit 19
    uint32_t RESERVED20 : 1; // bit 20
    uint32_t RESERVED21 : 1; // bit 21
    uint32_t RESERVED22 : 1; // bit 22
    uint32_t RESERVED23 : 1; // bit 23
    uint32_t PRI_11 : 8; // bit 24 Priority of system handler 11
  } BITS;
} SCB_SHPR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t RESERVED4 : 1; // bit 4
    uint32_t RESERVED5 : 1; // bit 5
    uint32_t RESERVED6 : 1; // bit 6
    uint32_t RESERVED7 : 1; // bit 7
    uint32_t RESERVED8 : 1; // bit 8
    uint32_t RESERVED9 : 1; // bit 9
    uint32_t RESERVED10 : 1; // bit 10
    uint32_t RESERVED11 : 1; // bit 11
    uint32_t RESERVED12 : 1; // bit 12
    uint32_t RESERVED13 : 1; // bit 13
    uint32_t RESERVED14 : 1; // bit 14
    uint32_t RESERVED15 : 1; // bit 15
    uint32_t PRI_14 : 8; // bit 16 Priority of system handler 14
    uint32_t PRI_15 : 8; // bit 24 Priority of system handler 15
  } BITS;
} SCB_SHPR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MEMFAULTACT : 1; // bit 0 Memory management fault exception active bit
    uint32_t BUSFAULTACT : 1; // bit 1 Bus fault exception active bit
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t USGFAULTACT : 1; // bit 3 Usage fault exception active bit
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t RESERVED3 : 1; // bit 6
    uint32_t SVCALLACT : 1; // bit 7 SVC call active bit
    uint32_t MONITORACT : 1; // bit 8 Debug monitor active bit
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t PENDSVACT : 1; // bit 10 PendSV exception active bit
    uint32_t SYSTICKACT : 1; // bit 11 SysTick exception active bit
    uint32_t USGFAULTPENDED : 1; // bit 12 Usage fault exception pending bit
    uint32_t MEMFAULTPENDED : 1; // bit 13 Memory management fault exception pending bit
    uint32_t BUSFAULTPENDED : 1; // bit 14 Bus fault exception pending bit
    uint32_t SVCALLPENDED : 1; // bit 15 SVC call pending bit
    uint32_t MEMFAULTENA : 1; // bit 16 Memory management fault enable bit
    uint32_t BUSFAULTENA : 1; // bit 17 Bus fault enable bit
    uint32_t USGFAULTENA : 1; // bit 18 Usage fault enable bit
    uint32_t RESERVED5 : 1; // bit 19
    uint32_t RESERVED6 : 1; // bit 20
    uint32_t RESERVED7 : 1; // bit 21
    uint32_t RESERVED8 : 1; // bit 22
    uint32_t RESERVED9 : 1; // bit 23
    uint32_t RESERVED10 : 1; // bit 24
    uint32_t RESERVED11 : 1; // bit 25
    uint32_t RESERVED12 : 1; // bit 26
    uint32_t RESERVED13 : 1; // bit 27
    uint32_t RESERVED14 : 1; // bit 28
    uint32_t RESERVED15 : 1; // bit 29
    uint32_t RESERVED16 : 1; // bit 30
    uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} SCB_SHCRS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IACCVIOL : 1; // bit 0 IACCVIOL
    uint32_t DACCVIOL : 1; // bit 1 DACCVIOL
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t MUNSTKERR : 1; // bit 3 MUNSTKERR
    uint32_t MSTKERR : 1; // bit 4 MSTKERR
    uint32_t MLSPERR : 1; // bit 5 MLSPERR
    uint32_t RESERVED1 : 1; // bit 6
    uint32_t MMARVALID : 1; // bit 7 MMARVALID
    uint32_t IBUSERR : 1; // bit 8 Instruction bus error
    uint32_t PRECISERR : 1; // bit 9 Precise data bus error
    uint32_t IMPRECISERR : 1; // bit 10 Imprecise data bus error
    uint32_t UNSTKERR : 1; // bit 11 Bus fault on unstacking for a return from exception
    uint32_t STKERR : 1; // bit 12 Bus fault on stacking for exception entry
    uint32_t LSPERR : 1; // bit 13 Bus fault on floating-point lazy state preservation
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t BFARVALID : 1; // bit 15 Bus Fault Address Register (BFAR) valid flag
    uint32_t UNDEFINSTR : 1; // bit 16 Undefined instruction usage fault
    uint32_t INVSTATE : 1; // bit 17 Invalid state usage fault
    uint32_t INVPC : 1; // bit 18 Invalid PC load usage fault
    uint32_t NOCP : 1; // bit 19 No coprocessor usage fault.
    uint32_t RESERVED3 : 1; // bit 20
    uint32_t RESERVED4 : 1; // bit 21
    uint32_t RESERVED5 : 1; // bit 22
    uint32_t RESERVED6 : 1; // bit 23
    uint32_t UNALIGNED : 1; // bit 24 Unaligned access usage fault
    uint32_t DIVBYZERO : 1; // bit 25 Divide by zero usage fault
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} SCB_CFSR_UFSR_BFSR_MMFSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t VECTTBL : 1; // bit 1 Vector table hard fault
    uint32_t RESERVED1 : 1; // bit 2
    uint32_t RESERVED2 : 1; // bit 3
    uint32_t RESERVED3 : 1; // bit 4
    uint32_t RESERVED4 : 1; // bit 5
    uint32_t RESERVED5 : 1; // bit 6
    uint32_t RESERVED6 : 1; // bit 7
    uint32_t RESERVED7 : 1; // bit 8
    uint32_t RESERVED8 : 1; // bit 9
    uint32_t RESERVED9 : 1; // bit 10
    uint32_t RESERVED10 : 1; // bit 11
    uint32_t RESERVED11 : 1; // bit 12
    uint32_t RESERVED12 : 1; // bit 13
    uint32_t RESERVED13 : 1; // bit 14
    uint32_t RESERVED14 : 1; // bit 15
    uint32_t RESERVED15 : 1; // bit 16
    uint32_t RESERVED16 : 1; // bit 17
    uint32_t RESERVED17 : 1; // bit 18
    uint32_t RESERVED18 : 1; // bit 19
    uint32_t RESERVED19 : 1; // bit 20
    uint32_t RESERVED20 : 1; // bit 21
    uint32_t RESERVED21 : 1; // bit 22
    uint32_t RESERVED22 : 1; // bit 23
    uint32_t RESERVED23 : 1; // bit 24
    uint32_t RESERVED24 : 1; // bit 25
    uint32_t RESERVED25 : 1; // bit 26
    uint32_t RESERVED26 : 1; // bit 27
    uint32_t RESERVED27 : 1; // bit 28
    uint32_t RESERVED28 : 1; // bit 29
    uint32_t FORCED : 1; // bit 30 Forced hard fault
    uint32_t DEBUG_VT : 1; // bit 31 Reserved for Debug use
  } BITS;
} SCB_HFSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MMFAR : 32; // bit 0 Memory management fault address
  } BITS;
} SCB_MMFAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t BFAR : 32; // bit 0 Bus fault address
  } BITS;
} SCB_BFAR_t;

typedef struct {
  SCB_CPUID_t CPUID;
  SCB_ICSR_t ICSR;
  SCB_VTOR_t VTOR;
  SCB_AIRCR_t AIRCR;
  SCB_SCR_t SCR;
  SCB_CCR_t CCR;
  SCB_SHPR1_t SHPR1;
  SCB_SHPR2_t SHPR2;
  SCB_SHPR3_t SHPR3;
  SCB_SHCRS_t SHCRS;
  SCB_CFSR_UFSR_BFSR_MMFSR_t CFSR_UFSR_BFSR_MMFSR;
  SCB_HFSR_t HFSR;
  SCB_MMFAR_t MMFAR;
  SCB_BFAR_t BFAR;
} SCB_t;

#define SCB_BASE (0xE000ED00UL)
#define SCB ((SCB_t *)SCB_BASE)

#define SCB_CPUIDbits (SCB->CPUID.BITS)
#define SCB_ICSRbits (SCB->ICSR.BITS)
#define SCB_VTORbits (SCB->VTOR.BITS)
#define SCB_AIRCRbits (SCB->AIRCR.BITS)
#define SCB_SCRbits (SCB->SCR.BITS)
#define SCB_CCRbits (SCB->CCR.BITS)
#define SCB_SHPR1bits (SCB->SHPR1.BITS)
#define SCB_SHPR2bits (SCB->SHPR2.BITS)
#define SCB_SHPR3bits (SCB->SHPR3.BITS)
#define SCB_SHCRSbits (SCB->SHCRS.BITS)
#define SCB_CFSR_UFSR_BFSR_MMFSRbits (SCB->CFSR_UFSR_BFSR_MMFSR.BITS)
#define SCB_HFSRbits (SCB->HFSR.BITS)
#define SCB_MMFARbits (SCB->MMFAR.BITS)
#define SCB_BFARbits (SCB->BFAR.BITS)

#endif // _SCB_H