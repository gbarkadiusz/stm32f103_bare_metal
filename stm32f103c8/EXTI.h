/**
 * @file    EXTI.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   EXTI
 *
 * This header file provides register definitions and bitfield access
 * for the EXTI peripheral of the STM32F103.
 */

#ifndef _EXTI_H
#define _EXTI_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MR0 : 1; // bit 0 Interrupt Mask on line 0
    uint32_t MR1 : 1; // bit 1 Interrupt Mask on line 1
    uint32_t MR2 : 1; // bit 2 Interrupt Mask on line 2
    uint32_t MR3 : 1; // bit 3 Interrupt Mask on line 3
    uint32_t MR4 : 1; // bit 4 Interrupt Mask on line 4
    uint32_t MR5 : 1; // bit 5 Interrupt Mask on line 5
    uint32_t MR6 : 1; // bit 6 Interrupt Mask on line 6
    uint32_t MR7 : 1; // bit 7 Interrupt Mask on line 7
    uint32_t MR8 : 1; // bit 8 Interrupt Mask on line 8
    uint32_t MR9 : 1; // bit 9 Interrupt Mask on line 9
    uint32_t MR10 : 1; // bit 10 Interrupt Mask on line 10
    uint32_t MR11 : 1; // bit 11 Interrupt Mask on line 11
    uint32_t MR12 : 1; // bit 12 Interrupt Mask on line 12
    uint32_t MR13 : 1; // bit 13 Interrupt Mask on line 13
    uint32_t MR14 : 1; // bit 14 Interrupt Mask on line 14
    uint32_t MR15 : 1; // bit 15 Interrupt Mask on line 15
    uint32_t MR16 : 1; // bit 16 Interrupt Mask on line 16
    uint32_t MR17 : 1; // bit 17 Interrupt Mask on line 17
    uint32_t MR18 : 1; // bit 18 Interrupt Mask on line 18
    uint32_t RESERVED0 : 1; // bit 19
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t RESERVED6 : 1; // bit 25
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} EXTI_IMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MR0 : 1; // bit 0 Event Mask on line 0
    uint32_t MR1 : 1; // bit 1 Event Mask on line 1
    uint32_t MR2 : 1; // bit 2 Event Mask on line 2
    uint32_t MR3 : 1; // bit 3 Event Mask on line 3
    uint32_t MR4 : 1; // bit 4 Event Mask on line 4
    uint32_t MR5 : 1; // bit 5 Event Mask on line 5
    uint32_t MR6 : 1; // bit 6 Event Mask on line 6
    uint32_t MR7 : 1; // bit 7 Event Mask on line 7
    uint32_t MR8 : 1; // bit 8 Event Mask on line 8
    uint32_t MR9 : 1; // bit 9 Event Mask on line 9
    uint32_t MR10 : 1; // bit 10 Event Mask on line 10
    uint32_t MR11 : 1; // bit 11 Event Mask on line 11
    uint32_t MR12 : 1; // bit 12 Event Mask on line 12
    uint32_t MR13 : 1; // bit 13 Event Mask on line 13
    uint32_t MR14 : 1; // bit 14 Event Mask on line 14
    uint32_t MR15 : 1; // bit 15 Event Mask on line 15
    uint32_t MR16 : 1; // bit 16 Event Mask on line 16
    uint32_t MR17 : 1; // bit 17 Event Mask on line 17
    uint32_t MR18 : 1; // bit 18 Event Mask on line 18
    uint32_t RESERVED0 : 1; // bit 19
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t RESERVED6 : 1; // bit 25
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} EXTI_EMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TR0 : 1; // bit 0 Rising trigger event configuration of line 0
    uint32_t TR1 : 1; // bit 1 Rising trigger event configuration of line 1
    uint32_t TR2 : 1; // bit 2 Rising trigger event configuration of line 2
    uint32_t TR3 : 1; // bit 3 Rising trigger event configuration of line 3
    uint32_t TR4 : 1; // bit 4 Rising trigger event configuration of line 4
    uint32_t TR5 : 1; // bit 5 Rising trigger event configuration of line 5
    uint32_t TR6 : 1; // bit 6 Rising trigger event configuration of line 6
    uint32_t TR7 : 1; // bit 7 Rising trigger event configuration of line 7
    uint32_t TR8 : 1; // bit 8 Rising trigger event configuration of line 8
    uint32_t TR9 : 1; // bit 9 Rising trigger event configuration of line 9
    uint32_t TR10 : 1; // bit 10 Rising trigger event configuration of line 10
    uint32_t TR11 : 1; // bit 11 Rising trigger event configuration of line 11
    uint32_t TR12 : 1; // bit 12 Rising trigger event configuration of line 12
    uint32_t TR13 : 1; // bit 13 Rising trigger event configuration of line 13
    uint32_t TR14 : 1; // bit 14 Rising trigger event configuration of line 14
    uint32_t TR15 : 1; // bit 15 Rising trigger event configuration of line 15
    uint32_t TR16 : 1; // bit 16 Rising trigger event configuration of line 16
    uint32_t TR17 : 1; // bit 17 Rising trigger event configuration of line 17
    uint32_t TR18 : 1; // bit 18 Rising trigger event configuration of line 18
    uint32_t RESERVED0 : 1; // bit 19
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t RESERVED6 : 1; // bit 25
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} EXTI_RTSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TR0 : 1; // bit 0 Falling trigger event configuration of line 0
    uint32_t TR1 : 1; // bit 1 Falling trigger event configuration of line 1
    uint32_t TR2 : 1; // bit 2 Falling trigger event configuration of line 2
    uint32_t TR3 : 1; // bit 3 Falling trigger event configuration of line 3
    uint32_t TR4 : 1; // bit 4 Falling trigger event configuration of line 4
    uint32_t TR5 : 1; // bit 5 Falling trigger event configuration of line 5
    uint32_t TR6 : 1; // bit 6 Falling trigger event configuration of line 6
    uint32_t TR7 : 1; // bit 7 Falling trigger event configuration of line 7
    uint32_t TR8 : 1; // bit 8 Falling trigger event configuration of line 8
    uint32_t TR9 : 1; // bit 9 Falling trigger event configuration of line 9
    uint32_t TR10 : 1; // bit 10 Falling trigger event configuration of line 10
    uint32_t TR11 : 1; // bit 11 Falling trigger event configuration of line 11
    uint32_t TR12 : 1; // bit 12 Falling trigger event configuration of line 12
    uint32_t TR13 : 1; // bit 13 Falling trigger event configuration of line 13
    uint32_t TR14 : 1; // bit 14 Falling trigger event configuration of line 14
    uint32_t TR15 : 1; // bit 15 Falling trigger event configuration of line 15
    uint32_t TR16 : 1; // bit 16 Falling trigger event configuration of line 16
    uint32_t TR17 : 1; // bit 17 Falling trigger event configuration of line 17
    uint32_t TR18 : 1; // bit 18 Falling trigger event configuration of line 18
    uint32_t RESERVED0 : 1; // bit 19
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t RESERVED6 : 1; // bit 25
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} EXTI_FTSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SWIER0 : 1; // bit 0 Software Interrupt on line 0
    uint32_t SWIER1 : 1; // bit 1 Software Interrupt on line 1
    uint32_t SWIER2 : 1; // bit 2 Software Interrupt on line 2
    uint32_t SWIER3 : 1; // bit 3 Software Interrupt on line 3
    uint32_t SWIER4 : 1; // bit 4 Software Interrupt on line 4
    uint32_t SWIER5 : 1; // bit 5 Software Interrupt on line 5
    uint32_t SWIER6 : 1; // bit 6 Software Interrupt on line 6
    uint32_t SWIER7 : 1; // bit 7 Software Interrupt on line 7
    uint32_t SWIER8 : 1; // bit 8 Software Interrupt on line 8
    uint32_t SWIER9 : 1; // bit 9 Software Interrupt on line 9
    uint32_t SWIER10 : 1; // bit 10 Software Interrupt on line 10
    uint32_t SWIER11 : 1; // bit 11 Software Interrupt on line 11
    uint32_t SWIER12 : 1; // bit 12 Software Interrupt on line 12
    uint32_t SWIER13 : 1; // bit 13 Software Interrupt on line 13
    uint32_t SWIER14 : 1; // bit 14 Software Interrupt on line 14
    uint32_t SWIER15 : 1; // bit 15 Software Interrupt on line 15
    uint32_t SWIER16 : 1; // bit 16 Software Interrupt on line 16
    uint32_t SWIER17 : 1; // bit 17 Software Interrupt on line 17
    uint32_t SWIER18 : 1; // bit 18 Software Interrupt on line 18
    uint32_t RESERVED0 : 1; // bit 19
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t RESERVED6 : 1; // bit 25
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} EXTI_SWIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PR0 : 1; // bit 0 Pending bit 0
    uint32_t PR1 : 1; // bit 1 Pending bit 1
    uint32_t PR2 : 1; // bit 2 Pending bit 2
    uint32_t PR3 : 1; // bit 3 Pending bit 3
    uint32_t PR4 : 1; // bit 4 Pending bit 4
    uint32_t PR5 : 1; // bit 5 Pending bit 5
    uint32_t PR6 : 1; // bit 6 Pending bit 6
    uint32_t PR7 : 1; // bit 7 Pending bit 7
    uint32_t PR8 : 1; // bit 8 Pending bit 8
    uint32_t PR9 : 1; // bit 9 Pending bit 9
    uint32_t PR10 : 1; // bit 10 Pending bit 10
    uint32_t PR11 : 1; // bit 11 Pending bit 11
    uint32_t PR12 : 1; // bit 12 Pending bit 12
    uint32_t PR13 : 1; // bit 13 Pending bit 13
    uint32_t PR14 : 1; // bit 14 Pending bit 14
    uint32_t PR15 : 1; // bit 15 Pending bit 15
    uint32_t PR16 : 1; // bit 16 Pending bit 16
    uint32_t PR17 : 1; // bit 17 Pending bit 17
    uint32_t PR18 : 1; // bit 18 Pending bit 18
    uint32_t RESERVED0 : 1; // bit 19
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t RESERVED6 : 1; // bit 25
    uint32_t RESERVED7 : 1; // bit 26
    uint32_t RESERVED8 : 1; // bit 27
    uint32_t RESERVED9 : 1; // bit 28
    uint32_t RESERVED10 : 1; // bit 29
    uint32_t RESERVED11 : 1; // bit 30
    uint32_t RESERVED12 : 1; // bit 31
  } BITS;
} EXTI_PR_t;

typedef struct {
  EXTI_IMR_t IMR;
  EXTI_EMR_t EMR;
  EXTI_RTSR_t RTSR;
  EXTI_FTSR_t FTSR;
  EXTI_SWIER_t SWIER;
  EXTI_PR_t PR;
} EXTI_t;

#define EXTI_BASE (0x40010400UL)
#define EXTI ((EXTI_t *)EXTI_BASE)

#define EXTI_IMRbits (EXTI->IMR.BITS)
#define EXTI_EMRbits (EXTI->EMR.BITS)
#define EXTI_RTSRbits (EXTI->RTSR.BITS)
#define EXTI_FTSRbits (EXTI->FTSR.BITS)
#define EXTI_SWIERbits (EXTI->SWIER.BITS)
#define EXTI_PRbits (EXTI->PR.BITS)

#endif // _EXTI_H