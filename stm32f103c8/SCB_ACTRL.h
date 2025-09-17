/**
 * @file    SCB_ACTRL.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
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
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t DISFOLD : 1; // bit 2 DISFOLD
    uint32_t RESERVED2 : 1; // bit 3
    uint32_t RESERVED3 : 1; // bit 4
    uint32_t RESERVED4 : 1; // bit 5
    uint32_t RESERVED5 : 1; // bit 6
    uint32_t RESERVED6 : 1; // bit 7
    uint32_t RESERVED7 : 1; // bit 8
    uint32_t RESERVED8 : 1; // bit 9
    uint32_t FPEXCODIS : 1; // bit 10 FPEXCODIS
    uint32_t DISRAMODE : 1; // bit 11 DISRAMODE
    uint32_t DISITMATBFLUSH : 1; // bit 12 DISITMATBFLUSH
    uint32_t RESERVED9 : 1; // bit 13
    uint32_t RESERVED10 : 1; // bit 14
    uint32_t RESERVED11 : 1; // bit 15
    uint32_t RESERVED12 : 1; // bit 16
    uint32_t RESERVED13 : 1; // bit 17
    uint32_t RESERVED14 : 1; // bit 18
    uint32_t RESERVED15 : 1; // bit 19
    uint32_t RESERVED16 : 1; // bit 20
    uint32_t RESERVED17 : 1; // bit 21
    uint32_t RESERVED18 : 1; // bit 22
    uint32_t RESERVED19 : 1; // bit 23
    uint32_t RESERVED20 : 1; // bit 24
    uint32_t RESERVED21 : 1; // bit 25
    uint32_t RESERVED22 : 1; // bit 26
    uint32_t RESERVED23 : 1; // bit 27
    uint32_t RESERVED24 : 1; // bit 28
    uint32_t RESERVED25 : 1; // bit 29
    uint32_t RESERVED26 : 1; // bit 30
    uint32_t RESERVED27 : 1; // bit 31
  } BITS;
} SCB_ACTRL_ACTRL_t;

typedef struct {
  SCB_ACTRL_ACTRL_t ACTRL;
} SCB_ACTRL_t;

#define SCB_ACTRL_BASE (0xE000E008UL)
#define SCB_ACTRL ((SCB_ACTRL_t *)SCB_ACTRL_BASE)

#define SCB_ACTRL_ACTRLbits (SCB_ACTRL->ACTRL.BITS)

#endif // _SCB_ACTRL_H