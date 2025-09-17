/**
 * @file    I2C1.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Inter integrated circuit
 *
 * This header file provides register definitions and bitfield access
 * for the I2C1 peripheral of the STM32F103.
 */

#ifndef _I2C1_H
#define _I2C1_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PE : 1; // bit 0 Peripheral enable
    uint32_t SMBUS : 1; // bit 1 SMBus mode
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t SMBTYPE : 1; // bit 3 SMBus type
    uint32_t ENARP : 1; // bit 4 ARP enable
    uint32_t ENPEC : 1; // bit 5 PEC enable
    uint32_t ENGC : 1; // bit 6 General call enable
    uint32_t NOSTRETCH : 1; // bit 7 Clock stretching disable (Slave mode)
    uint32_t START : 1; // bit 8 Start generation
    uint32_t STOP : 1; // bit 9 Stop generation
    uint32_t ACK : 1; // bit 10 Acknowledge enable
    uint32_t POS : 1; // bit 11 Acknowledge/PEC Position (for data reception)
    uint32_t PEC : 1; // bit 12 Packet error checking
    uint32_t ALERT : 1; // bit 13 SMBus alert
    uint32_t RESERVED1 : 1; // bit 14
    uint32_t SWRST : 1; // bit 15 Software reset
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
} I2C1_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t FREQ : 6; // bit 0 Peripheral clock frequency
    uint32_t RESERVED0 : 1; // bit 6
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t ITERREN : 1; // bit 8 Error interrupt enable
    uint32_t ITEVTEN : 1; // bit 9 Event interrupt enable
    uint32_t ITBUFEN : 1; // bit 10 Buffer interrupt enable
    uint32_t DMAEN : 1; // bit 11 DMA requests enable
    uint32_t LAST : 1; // bit 12 DMA last transfer
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
} I2C1_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADD0 : 1; // bit 0 Interface address
    uint32_t ADD7 : 7; // bit 1 Interface address
    uint32_t ADD10 : 2; // bit 8 Interface address
    uint32_t RESERVED0 : 1; // bit 10
    uint32_t RESERVED1 : 1; // bit 11
    uint32_t RESERVED2 : 1; // bit 12
    uint32_t RESERVED3 : 1; // bit 13
    uint32_t RESERVED4 : 1; // bit 14
    uint32_t ADDMODE : 1; // bit 15 Addressing mode (slave mode)
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
} I2C1_OAR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ENDUAL : 1; // bit 0 Dual addressing mode enable
    uint32_t ADD2 : 7; // bit 1 Interface address
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
} I2C1_OAR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DR : 8; // bit 0 8-bit data register
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
} I2C1_DR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SB : 1; // bit 0 Start bit (Master mode)
    uint32_t ADDR : 1; // bit 1 Address sent (master mode)/matched (slave mode)
    uint32_t BTF : 1; // bit 2 Byte transfer finished
    uint32_t ADD10 : 1; // bit 3 10-bit header sent (Master mode)
    uint32_t STOPF : 1; // bit 4 Stop detection (slave mode)
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t RxNE : 1; // bit 6 Data register not empty (receivers)
    uint32_t TxE : 1; // bit 7 Data register empty (transmitters)
    uint32_t BERR : 1; // bit 8 Bus error
    uint32_t ARLO : 1; // bit 9 Arbitration lost (master mode)
    uint32_t AF : 1; // bit 10 Acknowledge failure
    uint32_t OVR : 1; // bit 11 Overrun/Underrun
    uint32_t PECERR : 1; // bit 12 PEC Error in reception
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t TIMEOUT : 1; // bit 14 Timeout or Tlow error
    uint32_t SMBALERT : 1; // bit 15 SMBus alert
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
} I2C1_SR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MSL : 1; // bit 0 Master/slave
    uint32_t BUSY : 1; // bit 1 Bus busy
    uint32_t TRA : 1; // bit 2 Transmitter/receiver
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t GENCALL : 1; // bit 4 General call address (Slave mode)
    uint32_t SMBDEFAULT : 1; // bit 5 SMBus device default address (Slave mode)
    uint32_t SMBHOST : 1; // bit 6 SMBus host header (Slave mode)
    uint32_t DUALF : 1; // bit 7 Dual flag (Slave mode)
    uint32_t PEC : 8; // bit 8 acket error checking register
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t RESERVED4 : 1; // bit 19
    uint32_t RESERVED5 : 1; // bit 20
    uint32_t RESERVED6 : 1; // bit 21
    uint32_t RESERVED7 : 1; // bit 22
    uint32_t RESERVED8 : 1; // bit 23
    uint32_t RESERVED9 : 1; // bit 24
    uint32_t RESERVED10 : 1; // bit 25
    uint32_t RESERVED11 : 1; // bit 26
    uint32_t RESERVED12 : 1; // bit 27
    uint32_t RESERVED13 : 1; // bit 28
    uint32_t RESERVED14 : 1; // bit 29
    uint32_t RESERVED15 : 1; // bit 30
    uint32_t RESERVED16 : 1; // bit 31
  } BITS;
} I2C1_SR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR : 12; // bit 0 Clock control register in Fast/Standard mode (Master mode)
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t DUTY : 1; // bit 14 Fast mode duty cycle
    uint32_t F_S : 1; // bit 15 I2C master mode selection
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
} I2C1_CCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TRISE : 6; // bit 0 Maximum rise time in Fast/Standard mode (Master mode)
    uint32_t RESERVED0 : 1; // bit 6
    uint32_t RESERVED1 : 1; // bit 7
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
} I2C1_TRISE_t;

typedef struct {
  I2C1_CR1_t CR1;
  I2C1_CR2_t CR2;
  I2C1_OAR1_t OAR1;
  I2C1_OAR2_t OAR2;
  I2C1_DR_t DR;
  I2C1_SR1_t SR1;
  I2C1_SR2_t SR2;
  I2C1_CCR_t CCR;
  I2C1_TRISE_t TRISE;
} I2C1_t;

#define I2C1_BASE (0x40005400UL)
#define I2C1 ((I2C1_t *)I2C1_BASE)

#define I2C1_CR1bits (I2C1->CR1.BITS)
#define I2C1_CR2bits (I2C1->CR2.BITS)
#define I2C1_OAR1bits (I2C1->OAR1.BITS)
#define I2C1_OAR2bits (I2C1->OAR2.BITS)
#define I2C1_DRbits (I2C1->DR.BITS)
#define I2C1_SR1bits (I2C1->SR1.BITS)
#define I2C1_SR2bits (I2C1->SR2.BITS)
#define I2C1_CCRbits (I2C1->CCR.BITS)
#define I2C1_TRISEbits (I2C1->TRISE.BITS)

#endif // _I2C1_H