/**
 * @file    SPI2.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Serial peripheral interface
 *
 * This header file provides register definitions and bitfield access
 * for the SPI2 peripheral of the STM32F103.
 */

#ifndef _SPI2_H
#define _SPI2_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CPHA : 1; // bit 0 Clock phase
    volatile uint32_t CPOL : 1; // bit 1 Clock polarity
    volatile uint32_t MSTR : 1; // bit 2 Master selection
    volatile uint32_t BR : 3; // bit 3 Baud rate control
    volatile uint32_t SPE : 1; // bit 6 SPI enable
    volatile uint32_t LSBFIRST : 1; // bit 7 Frame format
    volatile uint32_t SSI : 1; // bit 8 Internal slave select
    volatile uint32_t SSM : 1; // bit 9 Software slave management
    volatile uint32_t RXONLY : 1; // bit 10 Receive only
    volatile uint32_t DFF : 1; // bit 11 Data frame format
    volatile uint32_t CRCNEXT : 1; // bit 12 CRC transfer next
    volatile uint32_t CRCEN : 1; // bit 13 Hardware CRC calculation enable
    volatile uint32_t BIDIOE : 1; // bit 14 Output enable in bidirectional mode
    volatile uint32_t BIDIMODE : 1; // bit 15 Bidirectional data mode enable
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
} SPI2_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RXDMAEN : 1; // bit 0 Rx buffer DMA enable
    volatile uint32_t TXDMAEN : 1; // bit 1 Tx buffer DMA enable
    volatile uint32_t SSOE : 1; // bit 2 SS output enable
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t ERRIE : 1; // bit 5 Error interrupt enable
    volatile uint32_t RXNEIE : 1; // bit 6 RX buffer not empty interrupt enable
    volatile uint32_t TXEIE : 1; // bit 7 Tx buffer empty interrupt enable
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t RESERVED3 : 1; // bit 9
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t RESERVED9 : 1; // bit 15
    volatile uint32_t RESERVED10 : 1; // bit 16
    volatile uint32_t RESERVED11 : 1; // bit 17
    volatile uint32_t RESERVED12 : 1; // bit 18
    volatile uint32_t RESERVED13 : 1; // bit 19
    volatile uint32_t RESERVED14 : 1; // bit 20
    volatile uint32_t RESERVED15 : 1; // bit 21
    volatile uint32_t RESERVED16 : 1; // bit 22
    volatile uint32_t RESERVED17 : 1; // bit 23
    volatile uint32_t RESERVED18 : 1; // bit 24
    volatile uint32_t RESERVED19 : 1; // bit 25
    volatile uint32_t RESERVED20 : 1; // bit 26
    volatile uint32_t RESERVED21 : 1; // bit 27
    volatile uint32_t RESERVED22 : 1; // bit 28
    volatile uint32_t RESERVED23 : 1; // bit 29
    volatile uint32_t RESERVED24 : 1; // bit 30
    volatile uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} SPI2_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RXNE : 1; // bit 0 Receive buffer not empty
    volatile uint32_t TXE : 1; // bit 1 Transmit buffer empty
    volatile uint32_t CHSIDE : 1; // bit 2 Channel side
    volatile uint32_t UDR : 1; // bit 3 Underrun flag
    volatile uint32_t CRCERR : 1; // bit 4 CRC error flag
    volatile uint32_t MODF : 1; // bit 5 Mode fault
    volatile uint32_t OVR : 1; // bit 6 Overrun flag
    volatile uint32_t BSY : 1; // bit 7 Busy flag
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
} SPI2_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DR : 16; // bit 0 Data register
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
} SPI2_DR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CRCPOLY : 16; // bit 0 CRC polynomial register
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
} SPI2_CRCPR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RxCRC : 16; // bit 0 Rx CRC register
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
} SPI2_RXCRCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TxCRC : 16; // bit 0 Tx CRC register
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
} SPI2_TXCRCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CHLEN : 1; // bit 0 Channel length (number of bits per audio channel)
    volatile uint32_t DATLEN : 2; // bit 1 Data length to be transferred
    volatile uint32_t CKPOL : 1; // bit 3 Steady state clock polarity
    volatile uint32_t I2SSTD : 2; // bit 4 I2S standard selection
    volatile uint32_t RESERVED0 : 1; // bit 6
    volatile uint32_t PCMSYNC : 1; // bit 7 PCM frame synchronization
    volatile uint32_t I2SCFG : 2; // bit 8 I2S configuration mode
    volatile uint32_t I2SE : 1; // bit 10 I2S Enable
    volatile uint32_t I2SMOD : 1; // bit 11 I2S mode selection
    volatile uint32_t RESERVED1 : 1; // bit 12
    volatile uint32_t RESERVED2 : 1; // bit 13
    volatile uint32_t RESERVED3 : 1; // bit 14
    volatile uint32_t RESERVED4 : 1; // bit 15
    volatile uint32_t RESERVED5 : 1; // bit 16
    volatile uint32_t RESERVED6 : 1; // bit 17
    volatile uint32_t RESERVED7 : 1; // bit 18
    volatile uint32_t RESERVED8 : 1; // bit 19
    volatile uint32_t RESERVED9 : 1; // bit 20
    volatile uint32_t RESERVED10 : 1; // bit 21
    volatile uint32_t RESERVED11 : 1; // bit 22
    volatile uint32_t RESERVED12 : 1; // bit 23
    volatile uint32_t RESERVED13 : 1; // bit 24
    volatile uint32_t RESERVED14 : 1; // bit 25
    volatile uint32_t RESERVED15 : 1; // bit 26
    volatile uint32_t RESERVED16 : 1; // bit 27
    volatile uint32_t RESERVED17 : 1; // bit 28
    volatile uint32_t RESERVED18 : 1; // bit 29
    volatile uint32_t RESERVED19 : 1; // bit 30
    volatile uint32_t RESERVED20 : 1; // bit 31
  } BITS;
} SPI2_I2SCFGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t I2SDIV : 8; // bit 0 I2S Linear prescaler
    volatile uint32_t ODD : 1; // bit 8 Odd factor for the prescaler
    volatile uint32_t MCKOE : 1; // bit 9 Master clock output enable
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
} SPI2_I2SPR_t;

typedef struct {
  SPI2_CR1_t CR1;
  SPI2_CR2_t CR2;
  SPI2_SR_t SR;
  SPI2_DR_t DR;
  SPI2_CRCPR_t CRCPR;
  SPI2_RXCRCR_t RXCRCR;
  SPI2_TXCRCR_t TXCRCR;
  SPI2_I2SCFGR_t I2SCFGR;
  SPI2_I2SPR_t I2SPR;
} SPI2_t;

#define SPI2_BASE (0x40003800UL)
#define SPI2 ((SPI2_t *)SPI2_BASE)

#define SPI2_CR1bits (SPI2->CR1.BITS)
#define SPI2_CR2bits (SPI2->CR2.BITS)
#define SPI2_SRbits (SPI2->SR.BITS)
#define SPI2_DRbits (SPI2->DR.BITS)
#define SPI2_CRCPRbits (SPI2->CRCPR.BITS)
#define SPI2_RXCRCRbits (SPI2->RXCRCR.BITS)
#define SPI2_TXCRCRbits (SPI2->TXCRCR.BITS)
#define SPI2_I2SCFGRbits (SPI2->I2SCFGR.BITS)
#define SPI2_I2SPRbits (SPI2->I2SPR.BITS)

#endif // _SPI2_H