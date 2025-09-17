/**
 * @file    STK.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   SysTick timer
 *
 * This header file provides register definitions and bitfield access
 * for the STK peripheral of the STM32F103.
 */

#ifndef _STK_H
#define _STK_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ENABLE : 1; // bit 0 Counter enable
    volatile uint32_t TICKINT : 1; // bit 1 SysTick exception request enable
    volatile uint32_t CLKSOURCE : 1; // bit 2 Clock source selection
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
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
    volatile uint32_t COUNTFLAG : 1; // bit 16 COUNTFLAG
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
} STK_CTRL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RELOAD : 24; // bit 0 RELOAD value
    volatile uint32_t RESERVED0 : 1; // bit 24
    volatile uint32_t RESERVED1 : 1; // bit 25
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} STK_LOAD__t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CURRENT : 24; // bit 0 Current counter value
    volatile uint32_t RESERVED0 : 1; // bit 24
    volatile uint32_t RESERVED1 : 1; // bit 25
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} STK_VAL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TENMS : 24; // bit 0 Calibration value
    volatile uint32_t RESERVED0 : 1; // bit 24
    volatile uint32_t RESERVED1 : 1; // bit 25
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} STK_CALIB_t;

typedef struct {
  STK_CTRL_t CTRL;
  STK_LOAD__t LOAD_;
  STK_VAL_t VAL;
  STK_CALIB_t CALIB;
} STK_t;

#define STK_BASE (0xE000E010UL)
#define STK ((STK_t *)STK_BASE)

#define STK_CTRLbits (STK->CTRL.BITS)
#define STK_LOAD_bits (STK->LOAD_.BITS)
#define STK_VALbits (STK->VAL.BITS)
#define STK_CALIBbits (STK->CALIB.BITS)

#endif // _STK_H