/**
 * @file    UART5.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Universal asynchronous receiver
      transmitter
 *
 * This header file provides register definitions and bitfield access
 * for the UART5 peripheral of the STM32F103.
 */

#ifndef _UART5_H
#define _UART5_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PE : 1; // bit 0 PE
    uint32_t FE : 1; // bit 1 FE
    uint32_t NE : 1; // bit 2 NE
    uint32_t ORE : 1; // bit 3 ORE
    uint32_t IDLE : 1; // bit 4 IDLE
    uint32_t RXNE : 1; // bit 5 RXNE
    uint32_t TC : 1; // bit 6 TC
    uint32_t TXE : 1; // bit 7 TXE
    uint32_t LBD : 1; // bit 8 LBD
    uint32_t RESERVED0 : 1; // bit 9
    uint32_t RESERVED1 : 1; // bit 10
    uint32_t RESERVED2 : 1; // bit 11
    uint32_t RESERVED3 : 1; // bit 12
    uint32_t RESERVED4 : 1; // bit 13
    uint32_t RESERVED5 : 1; // bit 14
    uint32_t RESERVED6 : 1; // bit 15
    uint32_t RESERVED7 : 1; // bit 16
    uint32_t RESERVED8 : 1; // bit 17
    uint32_t RESERVED9 : 1; // bit 18
    uint32_t RESERVED10 : 1; // bit 19
    uint32_t RESERVED11 : 1; // bit 20
    uint32_t RESERVED12 : 1; // bit 21
    uint32_t RESERVED13 : 1; // bit 22
    uint32_t RESERVED14 : 1; // bit 23
    uint32_t RESERVED15 : 1; // bit 24
    uint32_t RESERVED16 : 1; // bit 25
    uint32_t RESERVED17 : 1; // bit 26
    uint32_t RESERVED18 : 1; // bit 27
    uint32_t RESERVED19 : 1; // bit 28
    uint32_t RESERVED20 : 1; // bit 29
    uint32_t RESERVED21 : 1; // bit 30
    uint32_t RESERVED22 : 1; // bit 31
  } BITS;
} UART5_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DR : 9; // bit 0 DR
    uint32_t RESERVED0 : 1; // bit 9
    uint32_t RESERVED1 : 1; // bit 10
    uint32_t RESERVED2 : 1; // bit 11
    uint32_t RESERVED3 : 1; // bit 12
    uint32_t RESERVED4 : 1; // bit 13
    uint32_t RESERVED5 : 1; // bit 14
    uint32_t RESERVED6 : 1; // bit 15
    uint32_t RESERVED7 : 1; // bit 16
    uint32_t RESERVED8 : 1; // bit 17
    uint32_t RESERVED9 : 1; // bit 18
    uint32_t RESERVED10 : 1; // bit 19
    uint32_t RESERVED11 : 1; // bit 20
    uint32_t RESERVED12 : 1; // bit 21
    uint32_t RESERVED13 : 1; // bit 22
    uint32_t RESERVED14 : 1; // bit 23
    uint32_t RESERVED15 : 1; // bit 24
    uint32_t RESERVED16 : 1; // bit 25
    uint32_t RESERVED17 : 1; // bit 26
    uint32_t RESERVED18 : 1; // bit 27
    uint32_t RESERVED19 : 1; // bit 28
    uint32_t RESERVED20 : 1; // bit 29
    uint32_t RESERVED21 : 1; // bit 30
    uint32_t RESERVED22 : 1; // bit 31
  } BITS;
} UART5_DR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DIV_Fraction : 4; // bit 0 DIV_Fraction
    uint32_t DIV_Mantissa : 12; // bit 4 DIV_Mantissa
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
} UART5_BRR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SBK : 1; // bit 0 SBK
    uint32_t RWU : 1; // bit 1 RWU
    uint32_t RE : 1; // bit 2 RE
    uint32_t TE : 1; // bit 3 TE
    uint32_t IDLEIE : 1; // bit 4 IDLEIE
    uint32_t RXNEIE : 1; // bit 5 RXNEIE
    uint32_t TCIE : 1; // bit 6 TCIE
    uint32_t TXEIE : 1; // bit 7 TXEIE
    uint32_t PEIE : 1; // bit 8 PEIE
    uint32_t PS : 1; // bit 9 PS
    uint32_t PCE : 1; // bit 10 PCE
    uint32_t WAKE : 1; // bit 11 WAKE
    uint32_t M : 1; // bit 12 M
    uint32_t UE : 1; // bit 13 UE
    uint32_t RESERVED0 : 1; // bit 14
    uint32_t RESERVED1 : 1; // bit 15
    uint32_t RESERVED2 : 1; // bit 16
    uint32_t RESERVED3 : 1; // bit 17
    uint32_t RESERVED4 : 1; // bit 18
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
} UART5_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADD : 4; // bit 0 ADD
    uint32_t RESERVED0 : 1; // bit 4
    uint32_t LBDL : 1; // bit 5 LBDL
    uint32_t LBDIE : 1; // bit 6 LBDIE
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t RESERVED3 : 1; // bit 9
    uint32_t RESERVED4 : 1; // bit 10
    uint32_t RESERVED5 : 1; // bit 11
    uint32_t STOP : 2; // bit 12 STOP
    uint32_t LINEN : 1; // bit 14 LINEN
    uint32_t RESERVED6 : 1; // bit 15
    uint32_t RESERVED7 : 1; // bit 16
    uint32_t RESERVED8 : 1; // bit 17
    uint32_t RESERVED9 : 1; // bit 18
    uint32_t RESERVED10 : 1; // bit 19
    uint32_t RESERVED11 : 1; // bit 20
    uint32_t RESERVED12 : 1; // bit 21
    uint32_t RESERVED13 : 1; // bit 22
    uint32_t RESERVED14 : 1; // bit 23
    uint32_t RESERVED15 : 1; // bit 24
    uint32_t RESERVED16 : 1; // bit 25
    uint32_t RESERVED17 : 1; // bit 26
    uint32_t RESERVED18 : 1; // bit 27
    uint32_t RESERVED19 : 1; // bit 28
    uint32_t RESERVED20 : 1; // bit 29
    uint32_t RESERVED21 : 1; // bit 30
    uint32_t RESERVED22 : 1; // bit 31
  } BITS;
} UART5_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EIE : 1; // bit 0 Error interrupt enable
    uint32_t IREN : 1; // bit 1 IrDA mode enable
    uint32_t IRLP : 1; // bit 2 IrDA low-power
    uint32_t HDSEL : 1; // bit 3 Half-duplex selection
    uint32_t RESERVED0 : 1; // bit 4
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t DMAT : 1; // bit 7 DMA enable transmitter
    uint32_t RESERVED3 : 1; // bit 8
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t RESERVED6 : 1; // bit 11
    uint32_t RESERVED7 : 1; // bit 12
    uint32_t RESERVED8 : 1; // bit 13
    uint32_t RESERVED9 : 1; // bit 14
    uint32_t RESERVED10 : 1; // bit 15
    uint32_t RESERVED11 : 1; // bit 16
    uint32_t RESERVED12 : 1; // bit 17
    uint32_t RESERVED13 : 1; // bit 18
    uint32_t RESERVED14 : 1; // bit 19
    uint32_t RESERVED15 : 1; // bit 20
    uint32_t RESERVED16 : 1; // bit 21
    uint32_t RESERVED17 : 1; // bit 22
    uint32_t RESERVED18 : 1; // bit 23
    uint32_t RESERVED19 : 1; // bit 24
    uint32_t RESERVED20 : 1; // bit 25
    uint32_t RESERVED21 : 1; // bit 26
    uint32_t RESERVED22 : 1; // bit 27
    uint32_t RESERVED23 : 1; // bit 28
    uint32_t RESERVED24 : 1; // bit 29
    uint32_t RESERVED25 : 1; // bit 30
    uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} UART5_CR3_t;

typedef struct {
  UART5_SR_t SR;
  UART5_DR_t DR;
  UART5_BRR_t BRR;
  UART5_CR1_t CR1;
  UART5_CR2_t CR2;
  UART5_CR3_t CR3;
} UART5_t;

#define UART5_BASE (0x40005000UL)
#define UART5 ((UART5_t *)UART5_BASE)

#define UART5_SRbits (UART5->SR.BITS)
#define UART5_DRbits (UART5->DR.BITS)
#define UART5_BRRbits (UART5->BRR.BITS)
#define UART5_CR1bits (UART5->CR1.BITS)
#define UART5_CR2bits (UART5->CR2.BITS)
#define UART5_CR3bits (UART5->CR3.BITS)

#endif // _UART5_H