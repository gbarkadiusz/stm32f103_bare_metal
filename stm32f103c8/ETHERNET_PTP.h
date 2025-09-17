/**
 * @file    ETHERNET_PTP.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Ethernet: Precision time protocol
 *
 * This header file provides register definitions and bitfield access
 * for the ETHERNET_PTP peripheral of the STM32F103.
 */

#ifndef _ETHERNET_PTP_H
#define _ETHERNET_PTP_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TSE : 1; // bit 0 Time stamp enable
    uint32_t TSFCU : 1; // bit 1 Time stamp fine or coarse update
    uint32_t TSSTI : 1; // bit 2 Time stamp system time initialize
    uint32_t TSSTU : 1; // bit 3 Time stamp system time update
    uint32_t TSITE : 1; // bit 4 Time stamp interrupt trigger enable
    uint32_t TSARU : 1; // bit 5 Time stamp addend register update
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
} ETHERNET_PTP_PTPTSCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t STSSI : 8; // bit 0 System time subsecond increment
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
} ETHERNET_PTP_PTPSSIR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t STS : 32; // bit 0 System time second
  } BITS;
} ETHERNET_PTP_PTPTSHR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t STSS : 31; // bit 0 System time subseconds
    uint32_t STPNS : 1; // bit 31 System time positive or negative sign
  } BITS;
} ETHERNET_PTP_PTPTSLR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TSUS : 32; // bit 0 Time stamp update second
  } BITS;
} ETHERNET_PTP_PTPTSHUR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TSUSS : 31; // bit 0 Time stamp update subseconds
    uint32_t TSUPNS : 1; // bit 31 Time stamp update positive or negative sign
  } BITS;
} ETHERNET_PTP_PTPTSLUR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TSA : 32; // bit 0 Time stamp addend
  } BITS;
} ETHERNET_PTP_PTPTSAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TTSH : 32; // bit 0 Target time stamp high
  } BITS;
} ETHERNET_PTP_PTPTTHR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TTSL : 32; // bit 0 Target time stamp low
  } BITS;
} ETHERNET_PTP_PTPTTLR_t;

typedef struct {
  ETHERNET_PTP_PTPTSCR_t PTPTSCR;
  ETHERNET_PTP_PTPSSIR_t PTPSSIR;
  ETHERNET_PTP_PTPTSHR_t PTPTSHR;
  ETHERNET_PTP_PTPTSLR_t PTPTSLR;
  ETHERNET_PTP_PTPTSHUR_t PTPTSHUR;
  ETHERNET_PTP_PTPTSLUR_t PTPTSLUR;
  ETHERNET_PTP_PTPTSAR_t PTPTSAR;
  ETHERNET_PTP_PTPTTHR_t PTPTTHR;
  ETHERNET_PTP_PTPTTLR_t PTPTTLR;
} ETHERNET_PTP_t;

#define ETHERNET_PTP_BASE (0x40028700UL)
#define ETHERNET_PTP ((ETHERNET_PTP_t *)ETHERNET_PTP_BASE)

#define ETHERNET_PTP_PTPTSCRbits (ETHERNET_PTP->PTPTSCR.BITS)
#define ETHERNET_PTP_PTPSSIRbits (ETHERNET_PTP->PTPSSIR.BITS)
#define ETHERNET_PTP_PTPTSHRbits (ETHERNET_PTP->PTPTSHR.BITS)
#define ETHERNET_PTP_PTPTSLRbits (ETHERNET_PTP->PTPTSLR.BITS)
#define ETHERNET_PTP_PTPTSHURbits (ETHERNET_PTP->PTPTSHUR.BITS)
#define ETHERNET_PTP_PTPTSLURbits (ETHERNET_PTP->PTPTSLUR.BITS)
#define ETHERNET_PTP_PTPTSARbits (ETHERNET_PTP->PTPTSAR.BITS)
#define ETHERNET_PTP_PTPTTHRbits (ETHERNET_PTP->PTPTTHR.BITS)
#define ETHERNET_PTP_PTPTTLRbits (ETHERNET_PTP->PTPTTLR.BITS)

#endif // _ETHERNET_PTP_H