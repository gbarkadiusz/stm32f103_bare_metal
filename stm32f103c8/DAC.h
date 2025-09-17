/**
 * @file    DAC.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Digital to analog converter
 *
 * This header file provides register definitions and bitfield access
 * for the DAC peripheral of the STM32F103.
 */

#ifndef _DAC_H
#define _DAC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN1 : 1; // bit 0 DAC channel1 enable
    uint32_t BOFF1 : 1; // bit 1 DAC channel1 output buffer disable
    uint32_t TEN1 : 1; // bit 2 DAC channel1 trigger enable
    uint32_t TSEL1 : 3; // bit 3 DAC channel1 trigger selection
    uint32_t WAVE1 : 2; // bit 6 DAC channel1 noise/triangle wave generation enable
    uint32_t MAMP1 : 4; // bit 8 DAC channel1 mask/amplitude selector
    uint32_t DMAEN1 : 1; // bit 12 DAC channel1 DMA enable
    uint32_t RESERVED0 : 1; // bit 13
    uint32_t RESERVED1 : 1; // bit 14
    uint32_t RESERVED2 : 1; // bit 15
    uint32_t EN2 : 1; // bit 16 DAC channel2 enable
    uint32_t BOFF2 : 1; // bit 17 DAC channel2 output buffer disable
    uint32_t TEN2 : 1; // bit 18 DAC channel2 trigger enable
    uint32_t TSEL2 : 3; // bit 19 DAC channel2 trigger selection
    uint32_t WAVE2 : 2; // bit 22 DAC channel2 noise/triangle wave generation enable
    uint32_t MAMP2 : 4; // bit 24 DAC channel2 mask/amplitude selector
    uint32_t DMAEN2 : 1; // bit 28 DAC channel2 DMA enable
    uint32_t RESERVED3 : 1; // bit 29
    uint32_t RESERVED4 : 1; // bit 30
    uint32_t RESERVED5 : 1; // bit 31
  } BITS;
} DAC_CR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SWTRIG1 : 1; // bit 0 DAC channel1 software trigger
    uint32_t SWTRIG2 : 1; // bit 1 DAC channel2 software trigger
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t RESERVED1 : 1; // bit 3
    uint32_t RESERVED2 : 1; // bit 4
    uint32_t RESERVED3 : 1; // bit 5
    uint32_t RESERVED4 : 1; // bit 6
    uint32_t RESERVED5 : 1; // bit 7
    uint32_t RESERVED6 : 1; // bit 8
    uint32_t RESERVED7 : 1; // bit 9
    uint32_t RESERVED8 : 1; // bit 10
    uint32_t RESERVED9 : 1; // bit 11
    uint32_t RESERVED10 : 1; // bit 12
    uint32_t RESERVED11 : 1; // bit 13
    uint32_t RESERVED12 : 1; // bit 14
    uint32_t RESERVED13 : 1; // bit 15
    uint32_t RESERVED14 : 1; // bit 16
    uint32_t RESERVED15 : 1; // bit 17
    uint32_t RESERVED16 : 1; // bit 18
    uint32_t RESERVED17 : 1; // bit 19
    uint32_t RESERVED18 : 1; // bit 20
    uint32_t RESERVED19 : 1; // bit 21
    uint32_t RESERVED20 : 1; // bit 22
    uint32_t RESERVED21 : 1; // bit 23
    uint32_t RESERVED22 : 1; // bit 24
    uint32_t RESERVED23 : 1; // bit 25
    uint32_t RESERVED24 : 1; // bit 26
    uint32_t RESERVED25 : 1; // bit 27
    uint32_t RESERVED26 : 1; // bit 28
    uint32_t RESERVED27 : 1; // bit 29
    uint32_t RESERVED28 : 1; // bit 30
    uint32_t RESERVED29 : 1; // bit 31
  } BITS;
} DAC_SWTRIGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC1DHR : 12; // bit 0 DAC channel1 12-bit right-aligned data
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} DAC_DHR12R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t DACC1DHR : 12; // bit 4 DAC channel1 12-bit left-aligned data
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} DAC_DHR12L1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC1DHR : 8; // bit 0 DAC channel1 8-bit right-aligned data
    uint32_t RESERVED0 : 1; // bit 8
    uint32_t RESERVED1 : 1; // bit 9
    uint32_t RESERVED2 : 1; // bit 10
    uint32_t RESERVED3 : 1; // bit 11
    uint32_t RESERVED4 : 1; // bit 12
    uint32_t RESERVED5 : 1; // bit 13
    uint32_t RESERVED6 : 1; // bit 14
    uint32_t RESERVED7 : 1; // bit 15
    uint32_t RESERVED8 : 1; // bit 16
    uint32_t RESERVED9 : 1; // bit 17
    uint32_t RESERVED10 : 1; // bit 18
    uint32_t RESERVED11 : 1; // bit 19
    uint32_t RESERVED12 : 1; // bit 20
    uint32_t RESERVED13 : 1; // bit 21
    uint32_t RESERVED14 : 1; // bit 22
    uint32_t RESERVED15 : 1; // bit 23
    uint32_t RESERVED16 : 1; // bit 24
    uint32_t RESERVED17 : 1; // bit 25
    uint32_t RESERVED18 : 1; // bit 26
    uint32_t RESERVED19 : 1; // bit 27
    uint32_t RESERVED20 : 1; // bit 28
    uint32_t RESERVED21 : 1; // bit 29
    uint32_t RESERVED22 : 1; // bit 30
    uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} DAC_DHR8R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC2DHR : 12; // bit 0 DAC channel2 12-bit right-aligned data
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} DAC_DHR12R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t DACC2DHR : 12; // bit 4 DAC channel2 12-bit left-aligned data
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} DAC_DHR12L2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC2DHR : 8; // bit 0 DAC channel2 8-bit right-aligned data
    uint32_t RESERVED0 : 1; // bit 8
    uint32_t RESERVED1 : 1; // bit 9
    uint32_t RESERVED2 : 1; // bit 10
    uint32_t RESERVED3 : 1; // bit 11
    uint32_t RESERVED4 : 1; // bit 12
    uint32_t RESERVED5 : 1; // bit 13
    uint32_t RESERVED6 : 1; // bit 14
    uint32_t RESERVED7 : 1; // bit 15
    uint32_t RESERVED8 : 1; // bit 16
    uint32_t RESERVED9 : 1; // bit 17
    uint32_t RESERVED10 : 1; // bit 18
    uint32_t RESERVED11 : 1; // bit 19
    uint32_t RESERVED12 : 1; // bit 20
    uint32_t RESERVED13 : 1; // bit 21
    uint32_t RESERVED14 : 1; // bit 22
    uint32_t RESERVED15 : 1; // bit 23
    uint32_t RESERVED16 : 1; // bit 24
    uint32_t RESERVED17 : 1; // bit 25
    uint32_t RESERVED18 : 1; // bit 26
    uint32_t RESERVED19 : 1; // bit 27
    uint32_t RESERVED20 : 1; // bit 28
    uint32_t RESERVED21 : 1; // bit 29
    uint32_t RESERVED22 : 1; // bit 30
    uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} DAC_DHR8R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC1DHR : 12; // bit 0 DAC channel1 12-bit right-aligned data
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t DACC2DHR : 12; // bit 16 DAC channel2 12-bit right-aligned data
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} DAC_DHR12RD_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t DACC1DHR : 12; // bit 4 DAC channel1 12-bit left-aligned data
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t DACC2DHR : 12; // bit 20 DAC channel2 12-bit right-aligned data
  } BITS;
} DAC_DHR12LD_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC1DHR : 8; // bit 0 DAC channel1 8-bit right-aligned data
    uint32_t DACC2DHR : 8; // bit 8 DAC channel2 8-bit right-aligned data
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} DAC_DHR8RD_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC1DOR : 12; // bit 0 DAC channel1 data output
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} DAC_DOR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DACC2DOR : 12; // bit 0 DAC channel2 data output
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} DAC_DOR2_t;

typedef struct {
  DAC_CR_t CR;
  DAC_SWTRIGR_t SWTRIGR;
  DAC_DHR12R1_t DHR12R1;
  DAC_DHR12L1_t DHR12L1;
  DAC_DHR8R1_t DHR8R1;
  DAC_DHR12R2_t DHR12R2;
  DAC_DHR12L2_t DHR12L2;
  DAC_DHR8R2_t DHR8R2;
  DAC_DHR12RD_t DHR12RD;
  DAC_DHR12LD_t DHR12LD;
  DAC_DHR8RD_t DHR8RD;
  DAC_DOR1_t DOR1;
  DAC_DOR2_t DOR2;
} DAC_t;

#define DAC_BASE (0x40007400UL)
#define DAC ((DAC_t *)DAC_BASE)

#define DAC_CRbits (DAC->CR.BITS)
#define DAC_SWTRIGRbits (DAC->SWTRIGR.BITS)
#define DAC_DHR12R1bits (DAC->DHR12R1.BITS)
#define DAC_DHR12L1bits (DAC->DHR12L1.BITS)
#define DAC_DHR8R1bits (DAC->DHR8R1.BITS)
#define DAC_DHR12R2bits (DAC->DHR12R2.BITS)
#define DAC_DHR12L2bits (DAC->DHR12L2.BITS)
#define DAC_DHR8R2bits (DAC->DHR8R2.BITS)
#define DAC_DHR12RDbits (DAC->DHR12RD.BITS)
#define DAC_DHR12LDbits (DAC->DHR12LD.BITS)
#define DAC_DHR8RDbits (DAC->DHR8RD.BITS)
#define DAC_DOR1bits (DAC->DOR1.BITS)
#define DAC_DOR2bits (DAC->DOR2.BITS)

#endif // _DAC_H