/**
 * @file    WWDG.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Window watchdog
 *
 * This header file provides register definitions and bitfield access
 * for the WWDG peripheral of the STM32F103.
 */

#ifndef _WWDG_H
#define _WWDG_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t T : 7; // bit 0 7-bit counter (MSB to LSB)
    volatile uint32_t WDGA : 1; // bit 7 Activation bit
    volatile uint32_t RESERVED0 : 1; // bit 8
    volatile uint32_t RESERVED1 : 1; // bit 9
    volatile uint32_t RESERVED2 : 1; // bit 10
    volatile uint32_t RESERVED3 : 1; // bit 11
    volatile uint32_t RESERVED4 : 1; // bit 12
    volatile uint32_t RESERVED5 : 1; // bit 13
    volatile uint32_t RESERVED6 : 1; // bit 14
    volatile uint32_t RESERVED7 : 1; // bit 15
    volatile uint32_t RESERVED8 : 1; // bit 16
    volatile uint32_t RESERVED9 : 1; // bit 17
    volatile uint32_t RESERVED10 : 1; // bit 18
    volatile uint32_t RESERVED11 : 1; // bit 19
    volatile uint32_t RESERVED12 : 1; // bit 20
    volatile uint32_t RESERVED13 : 1; // bit 21
    volatile uint32_t RESERVED14 : 1; // bit 22
    volatile uint32_t RESERVED15 : 1; // bit 23
    volatile uint32_t RESERVED16 : 1; // bit 24
    volatile uint32_t RESERVED17 : 1; // bit 25
    volatile uint32_t RESERVED18 : 1; // bit 26
    volatile uint32_t RESERVED19 : 1; // bit 27
    volatile uint32_t RESERVED20 : 1; // bit 28
    volatile uint32_t RESERVED21 : 1; // bit 29
    volatile uint32_t RESERVED22 : 1; // bit 30
    volatile uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} WWDG_CR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t W : 7; // bit 0 7-bit window value
    volatile uint32_t WDGTB : 2; // bit 7 Timer Base
    volatile uint32_t EWI : 1; // bit 9 Early Wakeup Interrupt
    volatile uint32_t RESERVED0 : 1; // bit 10
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
    volatile uint32_t RESERVED7 : 1; // bit 17
    volatile uint32_t RESERVED8 : 1; // bit 18
    volatile uint32_t RESERVED9 : 1; // bit 19
    volatile uint32_t RESERVED10 : 1; // bit 20
    volatile uint32_t RESERVED11 : 1; // bit 21
    volatile uint32_t RESERVED12 : 1; // bit 22
    volatile uint32_t RESERVED13 : 1; // bit 23
    volatile uint32_t RESERVED14 : 1; // bit 24
    volatile uint32_t RESERVED15 : 1; // bit 25
    volatile uint32_t RESERVED16 : 1; // bit 26
    volatile uint32_t RESERVED17 : 1; // bit 27
    volatile uint32_t RESERVED18 : 1; // bit 28
    volatile uint32_t RESERVED19 : 1; // bit 29
    volatile uint32_t RESERVED20 : 1; // bit 30
    volatile uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} WWDG_CFR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EWI : 1; // bit 0 Early Wakeup Interrupt
    volatile uint32_t RESERVED0 : 1; // bit 1
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
    volatile uint32_t RESERVED29 : 1; // bit 30
    volatile uint32_t RESERVED30 : 1; // bit 31
  } BITS;
} WWDG_SR_t;

typedef struct {
  WWDG_CR_t CR;
  WWDG_CFR_t CFR;
  WWDG_SR_t SR;
} WWDG_t;

#define WWDG_BASE (0x40002C00UL)
#define WWDG ((WWDG_t *)WWDG_BASE)

#define WWDG_CRbits (WWDG->CR.BITS)
#define WWDG_CFRbits (WWDG->CFR.BITS)
#define WWDG_SRbits (WWDG->SR.BITS)

#endif // _WWDG_H