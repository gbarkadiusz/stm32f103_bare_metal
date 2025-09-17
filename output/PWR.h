/**
 * @file    PWR.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Power control
 *
 * This header file provides register definitions and bitfield access
 * for the PWR peripheral of the STM32F103.
 */

#ifndef _PWR_H
#define _PWR_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t LPDS : 1; // bit 0 Low Power Deep Sleep
    volatile uint32_t PDDS : 1; // bit 1 Power Down Deep Sleep
    volatile uint32_t CWUF : 1; // bit 2 Clear Wake-up Flag
    volatile uint32_t CSBF : 1; // bit 3 Clear STANDBY Flag
    volatile uint32_t PVDE : 1; // bit 4 Power Voltage Detector Enable
    volatile uint32_t PLS : 3; // bit 5 PVD Level Selection
    volatile uint32_t DBP : 1; // bit 8 Disable Backup Domain write protection
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
} PWR_CR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t WUF : 1; // bit 0 Wake-Up Flag
    volatile uint32_t SBF : 1; // bit 1 STANDBY Flag
    volatile uint32_t PVDO : 1; // bit 2 PVD Output
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t RESERVED4 : 1; // bit 7
    volatile uint32_t EWUP : 1; // bit 8 Enable WKUP pin
    volatile uint32_t RESERVED5 : 1; // bit 9
    volatile uint32_t RESERVED6 : 1; // bit 10
    volatile uint32_t RESERVED7 : 1; // bit 11
    volatile uint32_t RESERVED8 : 1; // bit 12
    volatile uint32_t RESERVED9 : 1; // bit 13
    volatile uint32_t RESERVED10 : 1; // bit 14
    volatile uint32_t RESERVED11 : 1; // bit 15
    volatile uint32_t RESERVED12 : 1; // bit 16
    volatile uint32_t RESERVED13 : 1; // bit 17
    volatile uint32_t RESERVED14 : 1; // bit 18
    volatile uint32_t RESERVED15 : 1; // bit 19
    volatile uint32_t RESERVED16 : 1; // bit 20
    volatile uint32_t RESERVED17 : 1; // bit 21
    volatile uint32_t RESERVED18 : 1; // bit 22
    volatile uint32_t RESERVED19 : 1; // bit 23
    volatile uint32_t RESERVED20 : 1; // bit 24
    volatile uint32_t RESERVED21 : 1; // bit 25
    volatile uint32_t RESERVED22 : 1; // bit 26
    volatile uint32_t RESERVED23 : 1; // bit 27
    volatile uint32_t RESERVED24 : 1; // bit 28
    volatile uint32_t RESERVED25 : 1; // bit 29
    volatile uint32_t RESERVED26 : 1; // bit 30
    volatile uint32_t RESERVED27 : 1; // bit 31
  } BITS;
} PWR_CSR_t;

typedef struct {
  PWR_CR_t CR;
  PWR_CSR_t CSR;
} PWR_t;

#define PWR_BASE (0x40007000UL)
#define PWR ((PWR_t *)PWR_BASE)

#define PWR_CRbits (PWR->CR.BITS)
#define PWR_CSRbits (PWR->CSR.BITS)

#endif // _PWR_H