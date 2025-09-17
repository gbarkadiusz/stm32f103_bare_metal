/**
 * @file    SPI1.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Serial peripheral interface
 *
 * This header file provides register definitions and bitfield access
 * for the SPI1 peripheral of the STM32F103.
 */

#ifndef _SPI1_H
#define _SPI1_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CPHA : 1; // bit 0 Clock phase
    uint32_t CPOL : 1; // bit 1 Clock polarity
    uint32_t MSTR : 1; // bit 2 Master selection
    uint32_t BR : 3; // bit 3 Baud rate control
    uint32_t SPE : 1; // bit 6 SPI enable
    uint32_t LSBFIRST : 1; // bit 7 Frame format
    uint32_t SSI : 1; // bit 8 Internal slave select
    uint32_t SSM : 1; // bit 9 Software slave management
    uint32_t RXONLY : 1; // bit 10 Receive only
    uint32_t DFF : 1; // bit 11 Data frame format
    uint32_t CRCNEXT : 1; // bit 12 CRC transfer next
    uint32_t CRCEN : 1; // bit 13 Hardware CRC calculation enable
    uint32_t BIDIOE : 1; // bit 14 Output enable in bidirectional mode
    uint32_t BIDIMODE : 1; // bit 15 Bidirectional data mode enable
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
} SPI1_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RXDMAEN : 1; // bit 0 Rx buffer DMA enable
    uint32_t TXDMAEN : 1; // bit 1 Tx buffer DMA enable
    uint32_t SSOE : 1; // bit 2 SS output enable
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t ERRIE : 1; // bit 5 Error interrupt enable
    uint32_t RXNEIE : 1; // bit 6 RX buffer not empty interrupt enable
    uint32_t TXEIE : 1; // bit 7 Tx buffer empty interrupt enable
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t RESERVED3 : 1; // bit 9
    uint32_t RESERVED4 : 1; // bit 10
    uint32_t RESERVED5 : 1; // bit 11
    uint32_t RESERVED6 : 1; // bit 12
    uint32_t RESERVED7 : 1; // bit 13
    uint32_t RESERVED8 : 1; // bit 14
    uint32_t RESERVED9 : 1; // bit 15
    uint32_t RESERVED10 : 1; // bit 16
    uint32_t RESERVED11 : 1; // bit 17
    uint32_t RESERVED12 : 1; // bit 18
    uint32_t RESERVED13 : 1; // bit 19
    uint32_t RESERVED14 : 1; // bit 20
    uint32_t RESERVED15 : 1; // bit 21
    uint32_t RESERVED16 : 1; // bit 22
    uint32_t RESERVED17 : 1; // bit 23
    uint32_t RESERVED18 : 1; // bit 24
    uint32_t RESERVED19 : 1; // bit 25
    uint32_t RESERVED20 : 1; // bit 26
    uint32_t RESERVED21 : 1; // bit 27
    uint32_t RESERVED22 : 1; // bit 28
    uint32_t RESERVED23 : 1; // bit 29
    uint32_t RESERVED24 : 1; // bit 30
    uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} SPI1_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RXNE : 1; // bit 0 Receive buffer not empty
    uint32_t TXE : 1; // bit 1 Transmit buffer empty
    uint32_t CHSIDE : 1; // bit 2 Channel side
    uint32_t UDR : 1; // bit 3 Underrun flag
    uint32_t CRCERR : 1; // bit 4 CRC error flag
    uint32_t MODF : 1; // bit 5 Mode fault
    uint32_t OVR : 1; // bit 6 Overrun flag
    uint32_t BSY : 1; // bit 7 Busy flag
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
} SPI1_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DR : 16; // bit 0 Data register
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
} SPI1_DR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CRCPOLY : 16; // bit 0 CRC polynomial register
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
} SPI1_CRCPR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RxCRC : 16; // bit 0 Rx CRC register
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
} SPI1_RXCRCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TxCRC : 16; // bit 0 Tx CRC register
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
} SPI1_TXCRCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CHLEN : 1; // bit 0 Channel length (number of bits per audio channel)
    uint32_t DATLEN : 2; // bit 1 Data length to be transferred
    uint32_t CKPOL : 1; // bit 3 Steady state clock polarity
    uint32_t I2SSTD : 2; // bit 4 I2S standard selection
    uint32_t RESERVED0 : 1; // bit 6
    uint32_t PCMSYNC : 1; // bit 7 PCM frame synchronization
    uint32_t I2SCFG : 2; // bit 8 I2S configuration mode
    uint32_t I2SE : 1; // bit 10 I2S Enable
    uint32_t I2SMOD : 1; // bit 11 I2S mode selection
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
} SPI1_I2SCFGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t I2SDIV : 8; // bit 0 I2S Linear prescaler
    uint32_t ODD : 1; // bit 8 Odd factor for the prescaler
    uint32_t MCKOE : 1; // bit 9 Master clock output enable
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
} SPI1_I2SPR_t;

typedef struct {
  SPI1_CR1_t CR1;
  SPI1_CR2_t CR2;
  SPI1_SR_t SR;
  SPI1_DR_t DR;
  SPI1_CRCPR_t CRCPR;
  SPI1_RXCRCR_t RXCRCR;
  SPI1_TXCRCR_t TXCRCR;
  SPI1_I2SCFGR_t I2SCFGR;
  SPI1_I2SPR_t I2SPR;
} SPI1_t;

#define SPI1_BASE (0x40013000UL)
#define SPI1 ((SPI1_t *)SPI1_BASE)

#define SPI1_CR1bits (SPI1->CR1.BITS)
#define SPI1_CR2bits (SPI1->CR2.BITS)
#define SPI1_SRbits (SPI1->SR.BITS)
#define SPI1_DRbits (SPI1->DR.BITS)
#define SPI1_CRCPRbits (SPI1->CRCPR.BITS)
#define SPI1_RXCRCRbits (SPI1->RXCRCR.BITS)
#define SPI1_TXCRCRbits (SPI1->TXCRCR.BITS)
#define SPI1_I2SCFGRbits (SPI1->I2SCFGR.BITS)
#define SPI1_I2SPRbits (SPI1->I2SPR.BITS)

#endif // _SPI1_H