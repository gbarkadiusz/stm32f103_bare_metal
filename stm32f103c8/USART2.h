/**
 * @file    USART2.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Universal synchronous asynchronous receiver
      transmitter
 *
 * This header file provides register definitions and bitfield access
 * for the USART2 peripheral of the STM32F103.
 */

#ifndef _USART2_H
#define _USART2_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PE : 1; // bit 0 Parity error
    uint32_t FE : 1; // bit 1 Framing error
    uint32_t NE : 1; // bit 2 Noise error flag
    uint32_t ORE : 1; // bit 3 Overrun error
    uint32_t IDLE : 1; // bit 4 IDLE line detected
    uint32_t RXNE : 1; // bit 5 Read data register not empty
    uint32_t TC : 1; // bit 6 Transmission complete
    uint32_t TXE : 1; // bit 7 Transmit data register empty
    uint32_t LBD : 1; // bit 8 LIN break detection flag
    uint32_t CTS : 1; // bit 9 CTS flag
    uint32_t RESERVED0 : 1; // bit 10
    uint32_t RESERVED1 : 1; // bit 11
    uint32_t RESERVED2 : 1; // bit 12
    uint32_t RESERVED3 : 1; // bit 13
    uint32_t RESERVED4 : 1; // bit 14
    uint32_t RESERVED5 : 1; // bit 15
    uint32_t RESERVED6 : 1; // bit 16
    uint32_t RESERVED7 : 1; // bit 17
    uint32_t RESERVED8 : 1; // bit 18
    uint32_t RESERVED9 : 1; // bit 19
    uint32_t RESERVED10 : 1; // bit 20
    uint32_t RESERVED11 : 1; // bit 21
    uint32_t RESERVED12 : 1; // bit 22
    uint32_t RESERVED13 : 1; // bit 23
    uint32_t RESERVED14 : 1; // bit 24
    uint32_t RESERVED15 : 1; // bit 25
    uint32_t RESERVED16 : 1; // bit 26
    uint32_t RESERVED17 : 1; // bit 27
    uint32_t RESERVED18 : 1; // bit 28
    uint32_t RESERVED19 : 1; // bit 29
    uint32_t RESERVED20 : 1; // bit 30
    uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} USART2_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DR : 9; // bit 0 Data value
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
} USART2_DR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DIV_Fraction : 4; // bit 0 fraction of USARTDIV
    uint32_t DIV_Mantissa : 12; // bit 4 mantissa of USARTDIV
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
} USART2_BRR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SBK : 1; // bit 0 Send break
    uint32_t RWU : 1; // bit 1 Receiver wakeup
    uint32_t RE : 1; // bit 2 Receiver enable
    uint32_t TE : 1; // bit 3 Transmitter enable
    uint32_t IDLEIE : 1; // bit 4 IDLE interrupt enable
    uint32_t RXNEIE : 1; // bit 5 RXNE interrupt enable
    uint32_t TCIE : 1; // bit 6 Transmission complete interrupt enable
    uint32_t TXEIE : 1; // bit 7 TXE interrupt enable
    uint32_t PEIE : 1; // bit 8 PE interrupt enable
    uint32_t PS : 1; // bit 9 Parity selection
    uint32_t PCE : 1; // bit 10 Parity control enable
    uint32_t WAKE : 1; // bit 11 Wakeup method
    uint32_t M : 1; // bit 12 Word length
    uint32_t UE : 1; // bit 13 USART enable
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
} USART2_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADD : 4; // bit 0 Address of the USART node
    uint32_t RESERVED0 : 1; // bit 4
    uint32_t LBDL : 1; // bit 5 lin break detection length
    uint32_t LBDIE : 1; // bit 6 LIN break detection interrupt enable
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t LBCL : 1; // bit 8 Last bit clock pulse
    uint32_t CPHA : 1; // bit 9 Clock phase
    uint32_t CPOL : 1; // bit 10 Clock polarity
    uint32_t CLKEN : 1; // bit 11 Clock enable
    uint32_t STOP : 2; // bit 12 STOP bits
    uint32_t LINEN : 1; // bit 14 LIN mode enable
    uint32_t RESERVED2 : 1; // bit 15
    uint32_t RESERVED3 : 1; // bit 16
    uint32_t RESERVED4 : 1; // bit 17
    uint32_t RESERVED5 : 1; // bit 18
    uint32_t RESERVED6 : 1; // bit 19
    uint32_t RESERVED7 : 1; // bit 20
    uint32_t RESERVED8 : 1; // bit 21
    uint32_t RESERVED9 : 1; // bit 22
    uint32_t RESERVED10 : 1; // bit 23
    uint32_t RESERVED11 : 1; // bit 24
    uint32_t RESERVED12 : 1; // bit 25
    uint32_t RESERVED13 : 1; // bit 26
    uint32_t RESERVED14 : 1; // bit 27
    uint32_t RESERVED15 : 1; // bit 28
    uint32_t RESERVED16 : 1; // bit 29
    uint32_t RESERVED17 : 1; // bit 30
    uint32_t RESERVED18 : 1; // bit 31
  } BITS;
} USART2_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EIE : 1; // bit 0 Error interrupt enable
    uint32_t IREN : 1; // bit 1 IrDA mode enable
    uint32_t IRLP : 1; // bit 2 IrDA low-power
    uint32_t HDSEL : 1; // bit 3 Half-duplex selection
    uint32_t NACK : 1; // bit 4 Smartcard NACK enable
    uint32_t SCEN : 1; // bit 5 Smartcard mode enable
    uint32_t DMAR : 1; // bit 6 DMA enable receiver
    uint32_t DMAT : 1; // bit 7 DMA enable transmitter
    uint32_t RTSE : 1; // bit 8 RTS enable
    uint32_t CTSE : 1; // bit 9 CTS enable
    uint32_t CTSIE : 1; // bit 10 CTS interrupt enable
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t RESERVED4 : 1; // bit 15
    uint32_t RESERVED5 : 1; // bit 16
    uint32_t RESERVED6 : 1; // bit 17
    uint32_t RESERVED7 : 1; // bit 18
    uint32_t RESERVED8 : 1; // bit 19
    uint32_t RESERVED9 : 1; // bit 20
    uint32_t RESERVED10 : 1; // bit 21
    uint32_t RESERVED11 : 1; // bit 22
    uint32_t RESERVED12 : 1; // bit 23
    uint32_t RESERVED13 : 1; // bit 24
    uint32_t RESERVED14 : 1; // bit 25
    uint32_t RESERVED15 : 1; // bit 26
    uint32_t RESERVED16 : 1; // bit 27
    uint32_t RESERVED17 : 1; // bit 28
    uint32_t RESERVED18 : 1; // bit 29
    uint32_t RESERVED19 : 1; // bit 30
    uint32_t RESERVED20 : 1; // bit 31
  } BITS;
} USART2_CR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PSC : 8; // bit 0 Prescaler value
    uint32_t GT : 8; // bit 8 Guard time value
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
} USART2_GTPR_t;

typedef struct {
  USART2_SR_t SR;
  USART2_DR_t DR;
  USART2_BRR_t BRR;
  USART2_CR1_t CR1;
  USART2_CR2_t CR2;
  USART2_CR3_t CR3;
  USART2_GTPR_t GTPR;
} USART2_t;

#define USART2_BASE (0x40004400UL)
#define USART2 ((USART2_t *)USART2_BASE)

#define USART2_SRbits (USART2->SR.BITS)
#define USART2_DRbits (USART2->DR.BITS)
#define USART2_BRRbits (USART2->BRR.BITS)
#define USART2_CR1bits (USART2->CR1.BITS)
#define USART2_CR2bits (USART2->CR2.BITS)
#define USART2_CR3bits (USART2->CR3.BITS)
#define USART2_GTPRbits (USART2->GTPR.BITS)

#endif // _USART2_H