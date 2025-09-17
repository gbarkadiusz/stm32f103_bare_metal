/**
 * @file    FLASH.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   FLASH
 *
 * This header file provides register definitions and bitfield access
 * for the FLASH peripheral of the STM32F103.
 */

#ifndef _FLASH_H
#define _FLASH_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t LATENCY : 3; // bit 0 Latency
    uint32_t HLFCYA : 1; // bit 3 Flash half cycle access enable
    uint32_t PRFTBE : 1; // bit 4 Prefetch buffer enable
    uint32_t PRFTBS : 1; // bit 5 Prefetch buffer status
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
} FLASH_ACR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t KEY : 32; // bit 0 FPEC key
  } BITS;
} FLASH_KEYR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t OPTKEY : 32; // bit 0 Option byte key
  } BITS;
} FLASH_OPTKEYR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t BSY : 1; // bit 0 Busy
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t PGERR : 1; // bit 2 Programming error
    uint32_t RESERVED1 : 1; // bit 3
    uint32_t WRPRTERR : 1; // bit 4 Write protection error
    uint32_t EOP : 1; // bit 5 End of operation
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t RESERVED4 : 1; // bit 8
    uint32_t RESERVED5 : 1; // bit 9
    uint32_t RESERVED6 : 1; // bit 10
    uint32_t RESERVED7 : 1; // bit 11
    uint32_t RESERVED8 : 1; // bit 12
    uint32_t RESERVED9 : 1; // bit 13
    uint32_t RESERVED10 : 1; // bit 14
    uint32_t RESERVED11 : 1; // bit 15
    uint32_t RESERVED12 : 1; // bit 16
    uint32_t RESERVED13 : 1; // bit 17
    uint32_t RESERVED14 : 1; // bit 18
    uint32_t RESERVED15 : 1; // bit 19
    uint32_t RESERVED16 : 1; // bit 20
    uint32_t RESERVED17 : 1; // bit 21
    uint32_t RESERVED18 : 1; // bit 22
    uint32_t RESERVED19 : 1; // bit 23
    uint32_t RESERVED20 : 1; // bit 24
    uint32_t RESERVED21 : 1; // bit 25
    uint32_t RESERVED22 : 1; // bit 26
    uint32_t RESERVED23 : 1; // bit 27
    uint32_t RESERVED24 : 1; // bit 28
    uint32_t RESERVED25 : 1; // bit 29
    uint32_t RESERVED26 : 1; // bit 30
    uint32_t RESERVED27 : 1; // bit 31
  } BITS;
} FLASH_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PG : 1; // bit 0 Programming
    uint32_t PER : 1; // bit 1 Page Erase
    uint32_t MER : 1; // bit 2 Mass Erase
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t OPTPG : 1; // bit 4 Option byte programming
    uint32_t OPTER : 1; // bit 5 Option byte erase
    uint32_t STRT : 1; // bit 6 Start
    uint32_t LOCK : 1; // bit 7 Lock
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t OPTWRE : 1; // bit 9 Option bytes write enable
    uint32_t ERRIE : 1; // bit 10 Error interrupt enable
    uint32_t RESERVED2 : 1; // bit 11
    uint32_t EOPIE : 1; // bit 12 End of operation interrupt enable
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
} FLASH_CR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t FAR : 32; // bit 0 Flash Address
  } BITS;
} FLASH_AR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t OPTERR : 1; // bit 0 Option byte error
    uint32_t RDPRT : 1; // bit 1 Read protection
    uint32_t WDG_SW : 1; // bit 2 WDG_SW
    uint32_t nRST_STOP : 1; // bit 3 nRST_STOP
    uint32_t nRST_STDBY : 1; // bit 4 nRST_STDBY
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t RESERVED1 : 1; // bit 6
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t RESERVED3 : 1; // bit 8
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t Data0 : 8; // bit 10 Data0
    uint32_t Data1 : 8; // bit 18 Data1
    uint32_t RESERVED5 : 1; // bit 26
    uint32_t RESERVED6 : 1; // bit 27
    uint32_t RESERVED7 : 1; // bit 28
    uint32_t RESERVED8 : 1; // bit 29
    uint32_t RESERVED9 : 1; // bit 30
    uint32_t RESERVED10 : 1; // bit 31
  } BITS;
} FLASH_OBR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t WRP : 32; // bit 0 Write protect
  } BITS;
} FLASH_WRPR_t;

typedef struct {
  FLASH_ACR_t ACR;
  FLASH_KEYR_t KEYR;
  FLASH_OPTKEYR_t OPTKEYR;
  FLASH_SR_t SR;
  FLASH_CR_t CR;
  FLASH_AR_t AR;
  FLASH_OBR_t OBR;
  FLASH_WRPR_t WRPR;
} FLASH_t;

#define FLASH_BASE (0x40022000UL)
#define FLASH ((FLASH_t *)FLASH_BASE)

#define FLASH_ACRbits (FLASH->ACR.BITS)
#define FLASH_KEYRbits (FLASH->KEYR.BITS)
#define FLASH_OPTKEYRbits (FLASH->OPTKEYR.BITS)
#define FLASH_SRbits (FLASH->SR.BITS)
#define FLASH_CRbits (FLASH->CR.BITS)
#define FLASH_ARbits (FLASH->AR.BITS)
#define FLASH_OBRbits (FLASH->OBR.BITS)
#define FLASH_WRPRbits (FLASH->WRPR.BITS)

#endif // _FLASH_H