/**
 * @file    GPIOD.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   General purpose I/O
 *
 * This header file provides register definitions and bitfield access
 * for the GPIOD peripheral of the STM32F103.
 */

#ifndef _GPIOD_H
#define _GPIOD_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MODE0 : 2; // bit 0 Port n.0 mode bits
    volatile uint32_t CNF0 : 2; // bit 2 Port n.0 configuration bits
    volatile uint32_t MODE1 : 2; // bit 4 Port n.1 mode bits
    volatile uint32_t CNF1 : 2; // bit 6 Port n.1 configuration bits
    volatile uint32_t MODE2 : 2; // bit 8 Port n.2 mode bits
    volatile uint32_t CNF2 : 2; // bit 10 Port n.2 configuration bits
    volatile uint32_t MODE3 : 2; // bit 12 Port n.3 mode bits
    volatile uint32_t CNF3 : 2; // bit 14 Port n.3 configuration bits
    volatile uint32_t MODE4 : 2; // bit 16 Port n.4 mode bits
    volatile uint32_t CNF4 : 2; // bit 18 Port n.4 configuration bits
    volatile uint32_t MODE5 : 2; // bit 20 Port n.5 mode bits
    volatile uint32_t CNF5 : 2; // bit 22 Port n.5 configuration bits
    volatile uint32_t MODE6 : 2; // bit 24 Port n.6 mode bits
    volatile uint32_t CNF6 : 2; // bit 26 Port n.6 configuration bits
    volatile uint32_t MODE7 : 2; // bit 28 Port n.7 mode bits
    volatile uint32_t CNF7 : 2; // bit 30 Port n.7 configuration bits
  } BITS;
} GPIOD_CRL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MODE8 : 2; // bit 0 Port n.8 mode bits
    volatile uint32_t CNF8 : 2; // bit 2 Port n.8 configuration bits
    volatile uint32_t MODE9 : 2; // bit 4 Port n.9 mode bits
    volatile uint32_t CNF9 : 2; // bit 6 Port n.9 configuration bits
    volatile uint32_t MODE10 : 2; // bit 8 Port n.10 mode bits
    volatile uint32_t CNF10 : 2; // bit 10 Port n.10 configuration bits
    volatile uint32_t MODE11 : 2; // bit 12 Port n.11 mode bits
    volatile uint32_t CNF11 : 2; // bit 14 Port n.11 configuration bits
    volatile uint32_t MODE12 : 2; // bit 16 Port n.12 mode bits
    volatile uint32_t CNF12 : 2; // bit 18 Port n.12 configuration bits
    volatile uint32_t MODE13 : 2; // bit 20 Port n.13 mode bits
    volatile uint32_t CNF13 : 2; // bit 22 Port n.13 configuration bits
    volatile uint32_t MODE14 : 2; // bit 24 Port n.14 mode bits
    volatile uint32_t CNF14 : 2; // bit 26 Port n.14 configuration bits
    volatile uint32_t MODE15 : 2; // bit 28 Port n.15 mode bits
    volatile uint32_t CNF15 : 2; // bit 30 Port n.15 configuration bits
  } BITS;
} GPIOD_CRH_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t IDR0 : 1; // bit 0 Port input data
    volatile uint32_t IDR1 : 1; // bit 1 Port input data
    volatile uint32_t IDR2 : 1; // bit 2 Port input data
    volatile uint32_t IDR3 : 1; // bit 3 Port input data
    volatile uint32_t IDR4 : 1; // bit 4 Port input data
    volatile uint32_t IDR5 : 1; // bit 5 Port input data
    volatile uint32_t IDR6 : 1; // bit 6 Port input data
    volatile uint32_t IDR7 : 1; // bit 7 Port input data
    volatile uint32_t IDR8 : 1; // bit 8 Port input data
    volatile uint32_t IDR9 : 1; // bit 9 Port input data
    volatile uint32_t IDR10 : 1; // bit 10 Port input data
    volatile uint32_t IDR11 : 1; // bit 11 Port input data
    volatile uint32_t IDR12 : 1; // bit 12 Port input data
    volatile uint32_t IDR13 : 1; // bit 13 Port input data
    volatile uint32_t IDR14 : 1; // bit 14 Port input data
    volatile uint32_t IDR15 : 1; // bit 15 Port input data
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} GPIOD_IDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ODR0 : 1; // bit 0 Port output data
    volatile uint32_t ODR1 : 1; // bit 1 Port output data
    volatile uint32_t ODR2 : 1; // bit 2 Port output data
    volatile uint32_t ODR3 : 1; // bit 3 Port output data
    volatile uint32_t ODR4 : 1; // bit 4 Port output data
    volatile uint32_t ODR5 : 1; // bit 5 Port output data
    volatile uint32_t ODR6 : 1; // bit 6 Port output data
    volatile uint32_t ODR7 : 1; // bit 7 Port output data
    volatile uint32_t ODR8 : 1; // bit 8 Port output data
    volatile uint32_t ODR9 : 1; // bit 9 Port output data
    volatile uint32_t ODR10 : 1; // bit 10 Port output data
    volatile uint32_t ODR11 : 1; // bit 11 Port output data
    volatile uint32_t ODR12 : 1; // bit 12 Port output data
    volatile uint32_t ODR13 : 1; // bit 13 Port output data
    volatile uint32_t ODR14 : 1; // bit 14 Port output data
    volatile uint32_t ODR15 : 1; // bit 15 Port output data
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} GPIOD_ODR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t BS0 : 1; // bit 0 Set bit 0
    volatile uint32_t BS1 : 1; // bit 1 Set bit 1
    volatile uint32_t BS2 : 1; // bit 2 Set bit 1
    volatile uint32_t BS3 : 1; // bit 3 Set bit 3
    volatile uint32_t BS4 : 1; // bit 4 Set bit 4
    volatile uint32_t BS5 : 1; // bit 5 Set bit 5
    volatile uint32_t BS6 : 1; // bit 6 Set bit 6
    volatile uint32_t BS7 : 1; // bit 7 Set bit 7
    volatile uint32_t BS8 : 1; // bit 8 Set bit 8
    volatile uint32_t BS9 : 1; // bit 9 Set bit 9
    volatile uint32_t BS10 : 1; // bit 10 Set bit 10
    volatile uint32_t BS11 : 1; // bit 11 Set bit 11
    volatile uint32_t BS12 : 1; // bit 12 Set bit 12
    volatile uint32_t BS13 : 1; // bit 13 Set bit 13
    volatile uint32_t BS14 : 1; // bit 14 Set bit 14
    volatile uint32_t BS15 : 1; // bit 15 Set bit 15
    volatile uint32_t BR0 : 1; // bit 16 Reset bit 0
    volatile uint32_t BR1 : 1; // bit 17 Reset bit 1
    volatile uint32_t BR2 : 1; // bit 18 Reset bit 2
    volatile uint32_t BR3 : 1; // bit 19 Reset bit 3
    volatile uint32_t BR4 : 1; // bit 20 Reset bit 4
    volatile uint32_t BR5 : 1; // bit 21 Reset bit 5
    volatile uint32_t BR6 : 1; // bit 22 Reset bit 6
    volatile uint32_t BR7 : 1; // bit 23 Reset bit 7
    volatile uint32_t BR8 : 1; // bit 24 Reset bit 8
    volatile uint32_t BR9 : 1; // bit 25 Reset bit 9
    volatile uint32_t BR10 : 1; // bit 26 Reset bit 10
    volatile uint32_t BR11 : 1; // bit 27 Reset bit 11
    volatile uint32_t BR12 : 1; // bit 28 Reset bit 12
    volatile uint32_t BR13 : 1; // bit 29 Reset bit 13
    volatile uint32_t BR14 : 1; // bit 30 Reset bit 14
    volatile uint32_t BR15 : 1; // bit 31 Reset bit 15
  } BITS;
} GPIOD_BSRR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t BR0 : 1; // bit 0 Reset bit 0
    volatile uint32_t BR1 : 1; // bit 1 Reset bit 1
    volatile uint32_t BR2 : 1; // bit 2 Reset bit 1
    volatile uint32_t BR3 : 1; // bit 3 Reset bit 3
    volatile uint32_t BR4 : 1; // bit 4 Reset bit 4
    volatile uint32_t BR5 : 1; // bit 5 Reset bit 5
    volatile uint32_t BR6 : 1; // bit 6 Reset bit 6
    volatile uint32_t BR7 : 1; // bit 7 Reset bit 7
    volatile uint32_t BR8 : 1; // bit 8 Reset bit 8
    volatile uint32_t BR9 : 1; // bit 9 Reset bit 9
    volatile uint32_t BR10 : 1; // bit 10 Reset bit 10
    volatile uint32_t BR11 : 1; // bit 11 Reset bit 11
    volatile uint32_t BR12 : 1; // bit 12 Reset bit 12
    volatile uint32_t BR13 : 1; // bit 13 Reset bit 13
    volatile uint32_t BR14 : 1; // bit 14 Reset bit 14
    volatile uint32_t BR15 : 1; // bit 15 Reset bit 15
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} GPIOD_BRR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t LCK0 : 1; // bit 0 Port A Lock bit 0
    volatile uint32_t LCK1 : 1; // bit 1 Port A Lock bit 1
    volatile uint32_t LCK2 : 1; // bit 2 Port A Lock bit 2
    volatile uint32_t LCK3 : 1; // bit 3 Port A Lock bit 3
    volatile uint32_t LCK4 : 1; // bit 4 Port A Lock bit 4
    volatile uint32_t LCK5 : 1; // bit 5 Port A Lock bit 5
    volatile uint32_t LCK6 : 1; // bit 6 Port A Lock bit 6
    volatile uint32_t LCK7 : 1; // bit 7 Port A Lock bit 7
    volatile uint32_t LCK8 : 1; // bit 8 Port A Lock bit 8
    volatile uint32_t LCK9 : 1; // bit 9 Port A Lock bit 9
    volatile uint32_t LCK10 : 1; // bit 10 Port A Lock bit 10
    volatile uint32_t LCK11 : 1; // bit 11 Port A Lock bit 11
    volatile uint32_t LCK12 : 1; // bit 12 Port A Lock bit 12
    volatile uint32_t LCK13 : 1; // bit 13 Port A Lock bit 13
    volatile uint32_t LCK14 : 1; // bit 14 Port A Lock bit 14
    volatile uint32_t LCK15 : 1; // bit 15 Port A Lock bit 15
    volatile uint32_t LCKK : 1; // bit 16 Lock key
    volatile uint32_t RESERVED0 : 1; // bit 17
    volatile uint32_t RESERVED1 : 1; // bit 18
    volatile uint32_t RESERVED2 : 1; // bit 19
    volatile uint32_t RESERVED3 : 1; // bit 20
    volatile uint32_t RESERVED4 : 1; // bit 21
    volatile uint32_t RESERVED5 : 1; // bit 22
    volatile uint32_t RESERVED6 : 1; // bit 23
    volatile uint32_t RESERVED7 : 1; // bit 24
    volatile uint32_t RESERVED8 : 1; // bit 25
    volatile uint32_t RESERVED9 : 1; // bit 26
    volatile uint32_t RESERVED10 : 1; // bit 27
    volatile uint32_t RESERVED11 : 1; // bit 28
    volatile uint32_t RESERVED12 : 1; // bit 29
    volatile uint32_t RESERVED13 : 1; // bit 30
    volatile uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} GPIOD_LCKR_t;

typedef struct {
  GPIOD_CRL_t CRL;
  GPIOD_CRH_t CRH;
  GPIOD_IDR_t IDR;
  GPIOD_ODR_t ODR;
  GPIOD_BSRR_t BSRR;
  GPIOD_BRR_t BRR;
  GPIOD_LCKR_t LCKR;
} GPIOD_t;

#define GPIOD_BASE (0x40011400UL)
#define GPIOD ((GPIOD_t *)GPIOD_BASE)

#define GPIOD_CRLbits (GPIOD->CRL.BITS)
#define GPIOD_CRHbits (GPIOD->CRH.BITS)
#define GPIOD_IDRbits (GPIOD->IDR.BITS)
#define GPIOD_ODRbits (GPIOD->ODR.BITS)
#define GPIOD_BSRRbits (GPIOD->BSRR.BITS)
#define GPIOD_BRRbits (GPIOD->BRR.BITS)
#define GPIOD_LCKRbits (GPIOD->LCKR.BITS)

#endif // _GPIOD_H