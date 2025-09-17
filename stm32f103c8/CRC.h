/**
 * @file    CRC.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   CRC calculation unit
 *
 * This header file provides register definitions and bitfield access
 * for the CRC peripheral of the STM32F103.
 */

#ifndef _CRC_H
#define _CRC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DR : 32; // bit 0 Data Register
  } BITS;
} CRC_DR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IDR : 8; // bit 0 Independent Data register
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
} CRC_IDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESET : 1; // bit 0 Reset bit
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t RESERVED1 : 1; // bit 2
    uint32_t RESERVED2 : 1; // bit 3
    uint32_t RESERVED3 : 1; // bit 4
    uint32_t RESERVED4 : 1; // bit 5
    uint32_t RESERVED5 : 1; // bit 6
    uint32_t RESERVED6 : 1; // bit 7
    uint32_t RESERVED7 : 1; // bit 8
    uint32_t RESERVED8 : 1; // bit 9
    uint32_t RESERVED9 : 1; // bit 10
    uint32_t RESERVED10 : 1; // bit 11
    uint32_t RESERVED11 : 1; // bit 12
    uint32_t RESERVED12 : 1; // bit 13
    uint32_t RESERVED13 : 1; // bit 14
    uint32_t RESERVED14 : 1; // bit 15
    uint32_t RESERVED15 : 1; // bit 16
    uint32_t RESERVED16 : 1; // bit 17
    uint32_t RESERVED17 : 1; // bit 18
    uint32_t RESERVED18 : 1; // bit 19
    uint32_t RESERVED19 : 1; // bit 20
    uint32_t RESERVED20 : 1; // bit 21
    uint32_t RESERVED21 : 1; // bit 22
    uint32_t RESERVED22 : 1; // bit 23
    uint32_t RESERVED23 : 1; // bit 24
    uint32_t RESERVED24 : 1; // bit 25
    uint32_t RESERVED25 : 1; // bit 26
    uint32_t RESERVED26 : 1; // bit 27
    uint32_t RESERVED27 : 1; // bit 28
    uint32_t RESERVED28 : 1; // bit 29
    uint32_t RESERVED29 : 1; // bit 30
    uint32_t RESERVED30 : 1; // bit 31
  } BITS;
} CRC_CR_t;

typedef struct {
  CRC_DR_t DR;
  CRC_IDR_t IDR;
  CRC_CR_t CR;
} CRC_t;

#define CRC_BASE (0x40023000UL)
#define CRC ((CRC_t *)CRC_BASE)

#define CRC_DRbits (CRC->DR.BITS)
#define CRC_IDRbits (CRC->IDR.BITS)
#define CRC_CRbits (CRC->CR.BITS)

#endif // _CRC_H