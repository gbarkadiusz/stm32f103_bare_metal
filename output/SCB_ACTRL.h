/**
 * @file    SCB_ACTRL.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   System control block ACTLR
 *
 * This header file provides register definitions and bitfield access
 * for the SCB_ACTRL peripheral of the STM32F103.
 */

#ifndef _SCB_ACTRL_H
#define _SCB_ACTRL_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t DISFOLD : 1; // bit 2 DISFOLD
    volatile uint32_t RESERVED2 : 1; // bit 3
    volatile uint32_t RESERVED3 : 1; // bit 4
    volatile uint32_t RESERVED4 : 1; // bit 5
    volatile uint32_t RESERVED5 : 1; // bit 6
    volatile uint32_t RESERVED6 : 1; // bit 7
    volatile uint32_t RESERVED7 : 1; // bit 8
    volatile uint32_t RESERVED8 : 1; // bit 9
    volatile uint32_t FPEXCODIS : 1; // bit 10 FPEXCODIS
    volatile uint32_t DISRAMODE : 1; // bit 11 DISRAMODE
    volatile uint32_t DISITMATBFLUSH : 1; // bit 12 DISITMATBFLUSH
    volatile uint32_t RESERVED9 : 1; // bit 13
    volatile uint32_t RESERVED10 : 1; // bit 14
    volatile uint32_t RESERVED11 : 1; // bit 15
    volatile uint32_t RESERVED12 : 1; // bit 16
    volatile uint32_t RESERVED13 : 1; // bit 17
    volatile uint32_t RESERVED14 : 1; // bit 18
    volatile uint32_t RESERVED15 : 1; // bit 19
    volatile uint32_t RESERVED16 : 1; // bit 20
    volatile uint32_t RESERVED17 : 1; // bit 21
    volatile uint32_t RESERVED18 : 1; // bit 22
    volatile uint32_t RESERVED19 : 1; // bit 23
    volatile uint32_t RESERVED20 : 1; // bit 24
    volatile uint32_t RESERVED21 : 1; // bit 25
    volatile uint32_t RESERVED22 : 1; // bit 26
    volatile uint32_t RESERVED23 : 1; // bit 27
    volatile uint32_t RESERVED24 : 1; // bit 28
    volatile uint32_t RESERVED25 : 1; // bit 29
    volatile uint32_t RESERVED26 : 1; // bit 30
    volatile uint32_t RESERVED27 : 1; // bit 31
  } BITS;
} SCB_ACTRL_ACTRL_t;

typedef struct {
  SCB_ACTRL_ACTRL_t ACTRL;
} SCB_ACTRL_t;

#define SCB_ACTRL_BASE (0xE000E008UL)
#define SCB_ACTRL ((SCB_ACTRL_t *)SCB_ACTRL_BASE)

#define SCB_ACTRL_ACTRLbits (SCB_ACTRL->ACTRL.BITS)

#endif // _SCB_ACTRL_H