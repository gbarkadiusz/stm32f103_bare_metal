/**
 * @file    ETHERNET_MMC.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Ethernet: MAC management counters
 *
 * This header file provides register definitions and bitfield access
 * for the ETHERNET_MMC peripheral of the STM32F103.
 */

#ifndef _ETHERNET_MMC_H
#define _ETHERNET_MMC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CR : 1; // bit 0 Counter reset
    volatile uint32_t CSR : 1; // bit 1 Counter stop rollover
    volatile uint32_t ROR : 1; // bit 2 Reset on read
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t RESERVED4 : 1; // bit 7
    volatile uint32_t RESERVED5 : 1; // bit 8
    volatile uint32_t RESERVED6 : 1; // bit 9
    volatile uint32_t RESERVED7 : 1; // bit 10
    volatile uint32_t RESERVED8 : 1; // bit 11
    volatile uint32_t RESERVED9 : 1; // bit 12
    volatile uint32_t RESERVED10 : 1; // bit 13
    volatile uint32_t RESERVED11 : 1; // bit 14
    volatile uint32_t RESERVED12 : 1; // bit 15
    volatile uint32_t RESERVED13 : 1; // bit 16
    volatile uint32_t RESERVED14 : 1; // bit 17
    volatile uint32_t RESERVED15 : 1; // bit 18
    volatile uint32_t RESERVED16 : 1; // bit 19
    volatile uint32_t RESERVED17 : 1; // bit 20
    volatile uint32_t RESERVED18 : 1; // bit 21
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t MCF : 1; // bit 31 MMC counter freeze
  } BITS;
} ETHERNET_MMC_MMCCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RFCES : 1; // bit 5 Received frames CRC error status
    volatile uint32_t RFAES : 1; // bit 6 Received frames alignment error status
    volatile uint32_t RESERVED5 : 1; // bit 7
    volatile uint32_t RESERVED6 : 1; // bit 8
    volatile uint32_t RESERVED7 : 1; // bit 9
    volatile uint32_t RESERVED8 : 1; // bit 10
    volatile uint32_t RESERVED9 : 1; // bit 11
    volatile uint32_t RESERVED10 : 1; // bit 12
    volatile uint32_t RESERVED11 : 1; // bit 13
    volatile uint32_t RESERVED12 : 1; // bit 14
    volatile uint32_t RESERVED13 : 1; // bit 15
    volatile uint32_t RESERVED14 : 1; // bit 16
    volatile uint32_t RGUFS : 1; // bit 17 Received Good Unicast Frames Status
    volatile uint32_t RESERVED15 : 1; // bit 18
    volatile uint32_t RESERVED16 : 1; // bit 19
    volatile uint32_t RESERVED17 : 1; // bit 20
    volatile uint32_t RESERVED18 : 1; // bit 21
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} ETHERNET_MMC_MMCRIR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RESERVED5 : 1; // bit 5
    volatile uint32_t RESERVED6 : 1; // bit 6
    volatile uint32_t RESERVED7 : 1; // bit 7
    volatile uint32_t RESERVED8 : 1; // bit 8
    volatile uint32_t RESERVED9 : 1; // bit 9
    volatile uint32_t RESERVED10 : 1; // bit 10
    volatile uint32_t RESERVED11 : 1; // bit 11
    volatile uint32_t RESERVED12 : 1; // bit 12
    volatile uint32_t RESERVED13 : 1; // bit 13
    volatile uint32_t TGFSCS : 1; // bit 14 Transmitted good frames single collision status
    volatile uint32_t TGFMSCS : 1; // bit 15 Transmitted good frames more single collision status
    volatile uint32_t RESERVED14 : 1; // bit 16
    volatile uint32_t RESERVED15 : 1; // bit 17
    volatile uint32_t RESERVED16 : 1; // bit 18
    volatile uint32_t RESERVED17 : 1; // bit 19
    volatile uint32_t RESERVED18 : 1; // bit 20
    volatile uint32_t TGFS : 1; // bit 21 Transmitted good frames status
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} ETHERNET_MMC_MMCTIR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RFCEM : 1; // bit 5 Received frame CRC error mask
    volatile uint32_t RFAEM : 1; // bit 6 Received frames alignment error mask
    volatile uint32_t RESERVED5 : 1; // bit 7
    volatile uint32_t RESERVED6 : 1; // bit 8
    volatile uint32_t RESERVED7 : 1; // bit 9
    volatile uint32_t RESERVED8 : 1; // bit 10
    volatile uint32_t RESERVED9 : 1; // bit 11
    volatile uint32_t RESERVED10 : 1; // bit 12
    volatile uint32_t RESERVED11 : 1; // bit 13
    volatile uint32_t RESERVED12 : 1; // bit 14
    volatile uint32_t RESERVED13 : 1; // bit 15
    volatile uint32_t RESERVED14 : 1; // bit 16
    volatile uint32_t RGUFM : 1; // bit 17 Received good unicast frames mask
    volatile uint32_t RESERVED15 : 1; // bit 18
    volatile uint32_t RESERVED16 : 1; // bit 19
    volatile uint32_t RESERVED17 : 1; // bit 20
    volatile uint32_t RESERVED18 : 1; // bit 21
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} ETHERNET_MMC_MMCRIMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t RESERVED5 : 1; // bit 5
    volatile uint32_t RESERVED6 : 1; // bit 6
    volatile uint32_t RESERVED7 : 1; // bit 7
    volatile uint32_t RESERVED8 : 1; // bit 8
    volatile uint32_t RESERVED9 : 1; // bit 9
    volatile uint32_t RESERVED10 : 1; // bit 10
    volatile uint32_t RESERVED11 : 1; // bit 11
    volatile uint32_t RESERVED12 : 1; // bit 12
    volatile uint32_t RESERVED13 : 1; // bit 13
    volatile uint32_t TGFSCM : 1; // bit 14 Transmitted good frames single collision mask
    volatile uint32_t TGFMSCM : 1; // bit 15 Transmitted good frames more single collision mask
    volatile uint32_t RESERVED14 : 1; // bit 16
    volatile uint32_t RESERVED15 : 1; // bit 17
    volatile uint32_t RESERVED16 : 1; // bit 18
    volatile uint32_t RESERVED17 : 1; // bit 19
    volatile uint32_t RESERVED18 : 1; // bit 20
    volatile uint32_t TGFM : 1; // bit 21 Transmitted good frames mask
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} ETHERNET_MMC_MMCTIMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TGFSCC : 32; // bit 0 Transmitted good frames after a single collision counter
  } BITS;
} ETHERNET_MMC_MMCTGFSCCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TGFMSCC : 32; // bit 0 Transmitted good frames after more than a single collision counter
  } BITS;
} ETHERNET_MMC_MMCTGFMSCCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TGFC : 32; // bit 0 Transmitted good frames counter
  } BITS;
} ETHERNET_MMC_MMCTGFCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RFCFC : 32; // bit 0 Received frames with CRC error counter
  } BITS;
} ETHERNET_MMC_MMCRFCECR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RFAEC : 32; // bit 0 Received frames with alignment error counter
  } BITS;
} ETHERNET_MMC_MMCRFAECR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RGUFC : 32; // bit 0 Received good unicast frames counter
  } BITS;
} ETHERNET_MMC_MMCRGUFCR_t;

typedef struct {
  ETHERNET_MMC_MMCCR_t MMCCR;
  ETHERNET_MMC_MMCRIR_t MMCRIR;
  ETHERNET_MMC_MMCTIR_t MMCTIR;
  ETHERNET_MMC_MMCRIMR_t MMCRIMR;
  ETHERNET_MMC_MMCTIMR_t MMCTIMR;
  ETHERNET_MMC_MMCTGFSCCR_t MMCTGFSCCR;
  ETHERNET_MMC_MMCTGFMSCCR_t MMCTGFMSCCR;
  ETHERNET_MMC_MMCTGFCR_t MMCTGFCR;
  ETHERNET_MMC_MMCRFCECR_t MMCRFCECR;
  ETHERNET_MMC_MMCRFAECR_t MMCRFAECR;
  ETHERNET_MMC_MMCRGUFCR_t MMCRGUFCR;
} ETHERNET_MMC_t;

#define ETHERNET_MMC_BASE (0x40028100UL)
#define ETHERNET_MMC ((ETHERNET_MMC_t *)ETHERNET_MMC_BASE)

#define ETHERNET_MMC_MMCCRbits (ETHERNET_MMC->MMCCR.BITS)
#define ETHERNET_MMC_MMCRIRbits (ETHERNET_MMC->MMCRIR.BITS)
#define ETHERNET_MMC_MMCTIRbits (ETHERNET_MMC->MMCTIR.BITS)
#define ETHERNET_MMC_MMCRIMRbits (ETHERNET_MMC->MMCRIMR.BITS)
#define ETHERNET_MMC_MMCTIMRbits (ETHERNET_MMC->MMCTIMR.BITS)
#define ETHERNET_MMC_MMCTGFSCCRbits (ETHERNET_MMC->MMCTGFSCCR.BITS)
#define ETHERNET_MMC_MMCTGFMSCCRbits (ETHERNET_MMC->MMCTGFMSCCR.BITS)
#define ETHERNET_MMC_MMCTGFCRbits (ETHERNET_MMC->MMCTGFCR.BITS)
#define ETHERNET_MMC_MMCRFCECRbits (ETHERNET_MMC->MMCRFCECR.BITS)
#define ETHERNET_MMC_MMCRFAECRbits (ETHERNET_MMC->MMCRFAECR.BITS)
#define ETHERNET_MMC_MMCRGUFCRbits (ETHERNET_MMC->MMCRGUFCR.BITS)

#endif // _ETHERNET_MMC_H