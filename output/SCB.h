/**
 * @file    SCB.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
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
    volatile uint32_t Revision : 4; // bit 0 Revision number
    volatile uint32_t PartNo : 12; // bit 4 Part number of the processor
    volatile uint32_t Constant : 4; // bit 16 Reads as 0xF
    volatile uint32_t Variant : 4; // bit 20 Variant number
    volatile uint32_t Implementer : 8; // bit 24 Implementer code
  } BITS;
} SCB_CPUID_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t VECTACTIVE : 9; // bit 0 Active vector
    volatile uint32_t RESERVED0 : 1; // bit 9
    volatile uint32_t RESERVED1 : 1; // bit 10
    volatile uint32_t RETTOBASE : 1; // bit 11 Return to base level
    volatile uint32_t VECTPENDING : 7; // bit 12 Pending vector
    volatile uint32_t RESERVED2 : 1; // bit 19
    volatile uint32_t RESERVED3 : 1; // bit 20
    volatile uint32_t RESERVED4 : 1; // bit 21
    volatile uint32_t ISRPENDING : 1; // bit 22 Interrupt pending flag
    volatile uint32_t RESERVED5 : 1; // bit 23
    volatile uint32_t RESERVED6 : 1; // bit 24
    volatile uint32_t PENDSTCLR : 1; // bit 25 SysTick exception clear-pending bit
    volatile uint32_t PENDSTSET : 1; // bit 26 SysTick exception set-pending bit
    volatile uint32_t PENDSVCLR : 1; // bit 27 PendSV clear-pending bit
    volatile uint32_t PENDSVSET : 1; // bit 28 PendSV set-pending bit
    volatile uint32_t RESERVED7 : 1; // bit 29
    volatile uint32_t RESERVED8 : 1; // bit 30
    volatile uint32_t NMIPENDSET : 1; // bit 31 NMI set-pending bit.
  } BITS;
} SCB_ICSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RESERVED5 : 1; // bit 5
    volatile uint32_t RESERVED6 : 1; // bit 6
    volatile uint32_t RESERVED7 : 1; // bit 7
    volatile uint32_t RESERVED8 : 1; // bit 8
    volatile uint32_t TBLOFF : 21; // bit 9 Vector table base offset field
    volatile uint32_t RESERVED9 : 1; // bit 30
    volatile uint32_t RESERVED10 : 1; // bit 31
  } BITS;
} SCB_VTOR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t VECTRESET : 1; // bit 0 VECTRESET
    volatile uint32_t VECTCLRACTIVE : 1; // bit 1 VECTCLRACTIVE
    volatile uint32_t SYSRESETREQ : 1; // bit 2 SYSRESETREQ
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t RESERVED4 : 1; // bit 7
    volatile uint32_t PRIGROUP : 3; // bit 8 PRIGROUP
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t ENDIANESS : 1; // bit 15 ENDIANESS
    volatile uint32_t VECTKEYSTAT : 16; // bit 16 Register key
  } BITS;
} SCB_AIRCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t SLEEPONEXIT : 1; // bit 1 SLEEPONEXIT
    volatile uint32_t SLEEPDEEP : 1; // bit 2 SLEEPDEEP
    volatile uint32_t RESERVED1 : 1; // bit 3
    volatile uint32_t SEVEONPEND : 1; // bit 4 Send Event on Pending bit
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t RESERVED4 : 1; // bit 7
    volatile uint32_t RESERVED5 : 1; // bit 8
    volatile uint32_t RESERVED6 : 1; // bit 9
    volatile uint32_t RESERVED7 : 1; // bit 10
    volatile uint32_t RESERVED8 : 1; // bit 11
    volatile uint32_t RESERVED9 : 1; // bit 12
    volatile uint32_t RESERVED10 : 1; // bit 13
    volatile uint32_t RESERVED11 : 1; // bit 14
    volatile uint32_t RESERVED12 : 1; // bit 15
    volatile uint32_t RESERVED13 : 1; // bit 16
    volatile uint32_t RESERVED14 : 1; // bit 17
    volatile uint32_t RESERVED15 : 1; // bit 18
    volatile uint32_t RESERVED16 : 1; // bit 19
    volatile uint32_t RESERVED17 : 1; // bit 20
    volatile uint32_t RESERVED18 : 1; // bit 21
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} SCB_SCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NONBASETHRDENA : 1; // bit 0 Configures how the processor enters Thread mode
    volatile uint32_t USERSETMPEND : 1; // bit 1 USERSETMPEND
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t UNALIGN__TRP : 1; // bit 3 UNALIGN_ TRP
    volatile uint32_t DIV_0_TRP : 1; // bit 4 DIV_0_TRP
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t BFHFNMIGN : 1; // bit 8 BFHFNMIGN
    volatile uint32_t STKALIGN : 1; // bit 9 STKALIGN
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t RESERVED9 : 1; // bit 15
    volatile uint32_t RESERVED10 : 1; // bit 16
    volatile uint32_t RESERVED11 : 1; // bit 17
    volatile uint32_t RESERVED12 : 1; // bit 18
    volatile uint32_t RESERVED13 : 1; // bit 19
    volatile uint32_t RESERVED14 : 1; // bit 20
    volatile uint32_t RESERVED15 : 1; // bit 21
    volatile uint32_t RESERVED16 : 1; // bit 22
    volatile uint32_t RESERVED17 : 1; // bit 23
    volatile uint32_t RESERVED18 : 1; // bit 24
    volatile uint32_t RESERVED19 : 1; // bit 25
    volatile uint32_t RESERVED20 : 1; // bit 26
    volatile uint32_t RESERVED21 : 1; // bit 27
    volatile uint32_t RESERVED22 : 1; // bit 28
    volatile uint32_t RESERVED23 : 1; // bit 29
    volatile uint32_t RESERVED24 : 1; // bit 30
    volatile uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} SCB_CCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PRI_4 : 8; // bit 0 Priority of system handler 4
    volatile uint32_t PRI_5 : 8; // bit 8 Priority of system handler 5
    volatile uint32_t PRI_6 : 8; // bit 16 Priority of system handler 6
    volatile uint32_t RESERVED0 : 1; // bit 24
    volatile uint32_t RESERVED1 : 1; // bit 25
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} SCB_SHPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RESERVED5 : 1; // bit 5
    volatile uint32_t RESERVED6 : 1; // bit 6
    volatile uint32_t RESERVED7 : 1; // bit 7
    volatile uint32_t RESERVED8 : 1; // bit 8
    volatile uint32_t RESERVED9 : 1; // bit 9
    volatile uint32_t RESERVED10 : 1; // bit 10
    volatile uint32_t RESERVED11 : 1; // bit 11
    volatile uint32_t RESERVED12 : 1; // bit 12
    volatile uint32_t RESERVED13 : 1; // bit 13
    volatile uint32_t RESERVED14 : 1; // bit 14
    volatile uint32_t RESERVED15 : 1; // bit 15
    volatile uint32_t RESERVED16 : 1; // bit 16
    volatile uint32_t RESERVED17 : 1; // bit 17
    volatile uint32_t RESERVED18 : 1; // bit 18
    volatile uint32_t RESERVED19 : 1; // bit 19
    volatile uint32_t RESERVED20 : 1; // bit 20
    volatile uint32_t RESERVED21 : 1; // bit 21
    volatile uint32_t RESERVED22 : 1; // bit 22
    volatile uint32_t RESERVED23 : 1; // bit 23
    volatile uint32_t PRI_11 : 8; // bit 24 Priority of system handler 11
  } BITS;
} SCB_SHPR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RESERVED5 : 1; // bit 5
    volatile uint32_t RESERVED6 : 1; // bit 6
    volatile uint32_t RESERVED7 : 1; // bit 7
    volatile uint32_t RESERVED8 : 1; // bit 8
    volatile uint32_t RESERVED9 : 1; // bit 9
    volatile uint32_t RESERVED10 : 1; // bit 10
    volatile uint32_t RESERVED11 : 1; // bit 11
    volatile uint32_t RESERVED12 : 1; // bit 12
    volatile uint32_t RESERVED13 : 1; // bit 13
    volatile uint32_t RESERVED14 : 1; // bit 14
    volatile uint32_t RESERVED15 : 1; // bit 15
    volatile uint32_t PRI_14 : 8; // bit 16 Priority of system handler 14
    volatile uint32_t PRI_15 : 8; // bit 24 Priority of system handler 15
  } BITS;
} SCB_SHPR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MEMFAULTACT : 1; // bit 0 Memory management fault exception active bit
    volatile uint32_t BUSFAULTACT : 1; // bit 1 Bus fault exception active bit
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t USGFAULTACT : 1; // bit 3 Usage fault exception active bit
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t SVCALLACT : 1; // bit 7 SVC call active bit
    volatile uint32_t MONITORACT : 1; // bit 8 Debug monitor active bit
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t PENDSVACT : 1; // bit 10 PendSV exception active bit
    volatile uint32_t SYSTICKACT : 1; // bit 11 SysTick exception active bit
    volatile uint32_t USGFAULTPENDED : 1; // bit 12 Usage fault exception pending bit
    volatile uint32_t MEMFAULTPENDED : 1; // bit 13 Memory management fault exception pending bit
    volatile uint32_t BUSFAULTPENDED : 1; // bit 14 Bus fault exception pending bit
    volatile uint32_t SVCALLPENDED : 1; // bit 15 SVC call pending bit
    volatile uint32_t MEMFAULTENA : 1; // bit 16 Memory management fault enable bit
    volatile uint32_t BUSFAULTENA : 1; // bit 17 Bus fault enable bit
    volatile uint32_t USGFAULTENA : 1; // bit 18 Usage fault enable bit
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} SCB_SHCRS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IACCVIOL : 1; // bit 0 IACCVIOL
    volatile uint32_t DACCVIOL : 1; // bit 1 DACCVIOL
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t MUNSTKERR : 1; // bit 3 MUNSTKERR
    volatile uint32_t MSTKERR : 1; // bit 4 MSTKERR
    volatile uint32_t MLSPERR : 1; // bit 5 MLSPERR
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t MMARVALID : 1; // bit 7 MMARVALID
    volatile uint32_t IBUSERR : 1; // bit 8 Instruction bus error
    volatile uint32_t PRECISERR : 1; // bit 9 Precise data bus error
    volatile uint32_t IMPRECISERR : 1; // bit 10 Imprecise data bus error
    volatile uint32_t UNSTKERR : 1; // bit 11 Bus fault on unstacking for a return from exception
    volatile uint32_t STKERR : 1; // bit 12 Bus fault on stacking for exception entry
    volatile uint32_t LSPERR : 1; // bit 13 Bus fault on floating-point lazy state preservation
    volatile uint32_t RESERVED2 : 1; // bit 14
    volatile uint32_t BFARVALID : 1; // bit 15 Bus Fault Address Register (BFAR) valid flag
    volatile uint32_t UNDEFINSTR : 1; // bit 16 Undefined instruction usage fault
    volatile uint32_t INVSTATE : 1; // bit 17 Invalid state usage fault
    volatile uint32_t INVPC : 1; // bit 18 Invalid PC load usage fault
    volatile uint32_t NOCP : 1; // bit 19 No coprocessor usage fault.
    volatile uint32_t RESERVED3 : 1; // bit 20
    volatile uint32_t RESERVED4 : 1; // bit 21
    volatile uint32_t RESERVED5 : 1; // bit 22
    volatile uint32_t RESERVED6 : 1; // bit 23
    volatile uint32_t UNALIGNED : 1; // bit 24 Unaligned access usage fault
    volatile uint32_t DIVBYZERO : 1; // bit 25 Divide by zero usage fault
    volatile uint32_t RESERVED7 : 1; // bit 26
    volatile uint32_t RESERVED8 : 1; // bit 27
    volatile uint32_t RESERVED9 : 1; // bit 28
    volatile uint32_t RESERVED10 : 1; // bit 29
    volatile uint32_t RESERVED11 : 1; // bit 30
    volatile uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} SCB_CFSR_UFSR_BFSR_MMFSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t VECTTBL : 1; // bit 1 Vector table hard fault
    volatile uint32_t RESERVED1 : 1; // bit 2
    volatile uint32_t RESERVED2 : 1; // bit 3
    volatile uint32_t RESERVED3 : 1; // bit 4
    volatile uint32_t RESERVED4 : 1; // bit 5
    volatile uint32_t RESERVED5 : 1; // bit 6
    volatile uint32_t RESERVED6 : 1; // bit 7
    volatile uint32_t RESERVED7 : 1; // bit 8
    volatile uint32_t RESERVED8 : 1; // bit 9
    volatile uint32_t RESERVED9 : 1; // bit 10
    volatile uint32_t RESERVED10 : 1; // bit 11
    volatile uint32_t RESERVED11 : 1; // bit 12
    volatile uint32_t RESERVED12 : 1; // bit 13
    volatile uint32_t RESERVED13 : 1; // bit 14
    volatile uint32_t RESERVED14 : 1; // bit 15
    volatile uint32_t RESERVED15 : 1; // bit 16
    volatile uint32_t RESERVED16 : 1; // bit 17
    volatile uint32_t RESERVED17 : 1; // bit 18
    volatile uint32_t RESERVED18 : 1; // bit 19
    volatile uint32_t RESERVED19 : 1; // bit 20
    volatile uint32_t RESERVED20 : 1; // bit 21
    volatile uint32_t RESERVED21 : 1; // bit 22
    volatile uint32_t RESERVED22 : 1; // bit 23
    volatile uint32_t RESERVED23 : 1; // bit 24
    volatile uint32_t RESERVED24 : 1; // bit 25
    volatile uint32_t RESERVED25 : 1; // bit 26
    volatile uint32_t RESERVED26 : 1; // bit 27
    volatile uint32_t RESERVED27 : 1; // bit 28
    volatile uint32_t RESERVED28 : 1; // bit 29
    volatile uint32_t FORCED : 1; // bit 30 Forced hard fault
    volatile uint32_t DEBUG_VT : 1; // bit 31 Reserved for Debug use
  } BITS;
} SCB_HFSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MMFAR : 32; // bit 0 Memory management fault address
  } BITS;
} SCB_MMFAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t BFAR : 32; // bit 0 Bus fault address
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