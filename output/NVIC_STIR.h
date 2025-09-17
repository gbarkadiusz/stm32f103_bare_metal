/**
 * @file    NVIC_STIR.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Nested vectored interrupt
      controller
 *
 * This header file provides register definitions and bitfield access
 * for the NVIC_STIR peripheral of the STM32F103.
 */

#ifndef _NVIC_STIR_H
#define _NVIC_STIR_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t INTID : 9; // bit 0 Software generated interrupt ID
    volatile uint32_t RESERVED0 : 1; // bit 9
    volatile uint32_t RESERVED1 : 1; // bit 10
    volatile uint32_t RESERVED2 : 1; // bit 11
    volatile uint32_t RESERVED3 : 1; // bit 12
    volatile uint32_t RESERVED4 : 1; // bit 13
    volatile uint32_t RESERVED5 : 1; // bit 14
    volatile uint32_t RESERVED6 : 1; // bit 15
    volatile uint32_t RESERVED7 : 1; // bit 16
    volatile uint32_t RESERVED8 : 1; // bit 17
    volatile uint32_t RESERVED9 : 1; // bit 18
    volatile uint32_t RESERVED10 : 1; // bit 19
    volatile uint32_t RESERVED11 : 1; // bit 20
    volatile uint32_t RESERVED12 : 1; // bit 21
    volatile uint32_t RESERVED13 : 1; // bit 22
    volatile uint32_t RESERVED14 : 1; // bit 23
    volatile uint32_t RESERVED15 : 1; // bit 24
    volatile uint32_t RESERVED16 : 1; // bit 25
    volatile uint32_t RESERVED17 : 1; // bit 26
    volatile uint32_t RESERVED18 : 1; // bit 27
    volatile uint32_t RESERVED19 : 1; // bit 28
    volatile uint32_t RESERVED20 : 1; // bit 29
    volatile uint32_t RESERVED21 : 1; // bit 30
    volatile uint32_t RESERVED22 : 1; // bit 31
  } BITS;
} NVIC_STIR_STIR_t;

typedef struct {
  NVIC_STIR_STIR_t STIR;
} NVIC_STIR_t;

#define NVIC_STIR_BASE (0xE000EF00UL)
#define NVIC_STIR ((NVIC_STIR_t *)NVIC_STIR_BASE)

#define NVIC_STIR_STIRbits (NVIC_STIR->STIR.BITS)

#endif // _NVIC_STIR_H