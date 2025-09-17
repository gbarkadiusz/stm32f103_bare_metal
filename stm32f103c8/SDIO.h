/**
 * @file    SDIO.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Secure digital input/output
      interface
 *
 * This header file provides register definitions and bitfield access
 * for the SDIO peripheral of the STM32F103.
 */

#ifndef _SDIO_H
#define _SDIO_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PWRCTRL : 2; // bit 0 PWRCTRL
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t RESERVED1 : 1; // bit 3
    uint32_t RESERVED2 : 1; // bit 4
    uint32_t RESERVED3 : 1; // bit 5
    uint32_t RESERVED4 : 1; // bit 6
    uint32_t RESERVED5 : 1; // bit 7
    uint32_t RESERVED6 : 1; // bit 8
    uint32_t RESERVED7 : 1; // bit 9
    uint32_t RESERVED8 : 1; // bit 10
    uint32_t RESERVED9 : 1; // bit 11
    uint32_t RESERVED10 : 1; // bit 12
    uint32_t RESERVED11 : 1; // bit 13
    uint32_t RESERVED12 : 1; // bit 14
    uint32_t RESERVED13 : 1; // bit 15
    uint32_t RESERVED14 : 1; // bit 16
    uint32_t RESERVED15 : 1; // bit 17
    uint32_t RESERVED16 : 1; // bit 18
    uint32_t RESERVED17 : 1; // bit 19
    uint32_t RESERVED18 : 1; // bit 20
    uint32_t RESERVED19 : 1; // bit 21
    uint32_t RESERVED20 : 1; // bit 22
    uint32_t RESERVED21 : 1; // bit 23
    uint32_t RESERVED22 : 1; // bit 24
    uint32_t RESERVED23 : 1; // bit 25
    uint32_t RESERVED24 : 1; // bit 26
    uint32_t RESERVED25 : 1; // bit 27
    uint32_t RESERVED26 : 1; // bit 28
    uint32_t RESERVED27 : 1; // bit 29
    uint32_t RESERVED28 : 1; // bit 30
    uint32_t RESERVED29 : 1; // bit 31
  } BITS;
} SDIO_POWER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CLKDIV : 8; // bit 0 Clock divide factor
    uint32_t CLKEN : 1; // bit 8 Clock enable bit
    uint32_t PWRSAV : 1; // bit 9 Power saving configuration bit
    uint32_t BYPASS : 1; // bit 10 Clock divider bypass enable bit
    uint32_t WIDBUS : 2; // bit 11 Wide bus mode enable bit
    uint32_t NEGEDGE : 1; // bit 13 SDIO_CK dephasing selection bit
    uint32_t HWFC_EN : 1; // bit 14 HW Flow Control enable
    uint32_t RESERVED0 : 1; // bit 15
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
} SDIO_CLKCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CMDARG : 32; // bit 0 Command argument
  } BITS;
} SDIO_ARG_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CMDINDEX : 6; // bit 0 CMDINDEX
    uint32_t WAITRESP : 2; // bit 6 WAITRESP
    uint32_t WAITINT : 1; // bit 8 WAITINT
    uint32_t WAITPEND : 1; // bit 9 WAITPEND
    uint32_t CPSMEN : 1; // bit 10 CPSMEN
    uint32_t SDIOSuspend : 1; // bit 11 SDIOSuspend
    uint32_t ENCMDcompl : 1; // bit 12 ENCMDcompl
    uint32_t nIEN : 1; // bit 13 nIEN
    uint32_t CE_ATACMD : 1; // bit 14 CE_ATACMD
    uint32_t RESERVED0 : 1; // bit 15
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
} SDIO_CMD_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESPCMD : 6; // bit 0 RESPCMD
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
} SDIO_RESPCMD_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CARDSTATUS1 : 32; // bit 0 CARDSTATUS1
  } BITS;
} SDIO_RESPI1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CARDSTATUS2 : 32; // bit 0 CARDSTATUS2
  } BITS;
} SDIO_RESP2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CARDSTATUS3 : 32; // bit 0 CARDSTATUS3
  } BITS;
} SDIO_RESP3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CARDSTATUS4 : 32; // bit 0 CARDSTATUS4
  } BITS;
} SDIO_RESP4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DATATIME : 32; // bit 0 Data timeout period
  } BITS;
} SDIO_DTIMER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DATALENGTH : 25; // bit 0 Data length value
    uint32_t RESERVED0 : 1; // bit 25
    uint32_t RESERVED1 : 1; // bit 26
    uint32_t RESERVED2 : 1; // bit 27
    uint32_t RESERVED3 : 1; // bit 28
    uint32_t RESERVED4 : 1; // bit 29
    uint32_t RESERVED5 : 1; // bit 30
    uint32_t RESERVED6 : 1; // bit 31
  } BITS;
} SDIO_DLEN_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DTEN : 1; // bit 0 DTEN
    uint32_t DTDIR : 1; // bit 1 DTDIR
    uint32_t DTMODE : 1; // bit 2 DTMODE
    uint32_t DMAEN : 1; // bit 3 DMAEN
    uint32_t DBLOCKSIZE : 4; // bit 4 DBLOCKSIZE
    uint32_t PWSTART : 1; // bit 8 PWSTART
    uint32_t PWSTOP : 1; // bit 9 PWSTOP
    uint32_t RWMOD : 1; // bit 10 RWMOD
    uint32_t SDIOEN : 1; // bit 11 SDIOEN
    uint32_t RESERVED0 : 1; // bit 12
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} SDIO_DCTRL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DATACOUNT : 25; // bit 0 Data count value
    uint32_t RESERVED0 : 1; // bit 25
    uint32_t RESERVED1 : 1; // bit 26
    uint32_t RESERVED2 : 1; // bit 27
    uint32_t RESERVED3 : 1; // bit 28
    uint32_t RESERVED4 : 1; // bit 29
    uint32_t RESERVED5 : 1; // bit 30
    uint32_t RESERVED6 : 1; // bit 31
  } BITS;
} SDIO_DCOUNT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCRCFAIL : 1; // bit 0 CCRCFAIL
    uint32_t DCRCFAIL : 1; // bit 1 DCRCFAIL
    uint32_t CTIMEOUT : 1; // bit 2 CTIMEOUT
    uint32_t DTIMEOUT : 1; // bit 3 DTIMEOUT
    uint32_t TXUNDERR : 1; // bit 4 TXUNDERR
    uint32_t RXOVERR : 1; // bit 5 RXOVERR
    uint32_t CMDREND : 1; // bit 6 CMDREND
    uint32_t CMDSENT : 1; // bit 7 CMDSENT
    uint32_t DATAEND : 1; // bit 8 DATAEND
    uint32_t STBITERR : 1; // bit 9 STBITERR
    uint32_t DBCKEND : 1; // bit 10 DBCKEND
    uint32_t CMDACT : 1; // bit 11 CMDACT
    uint32_t TXACT : 1; // bit 12 TXACT
    uint32_t RXACT : 1; // bit 13 RXACT
    uint32_t TXFIFOHE : 1; // bit 14 TXFIFOHE
    uint32_t RXFIFOHF : 1; // bit 15 RXFIFOHF
    uint32_t TXFIFOF : 1; // bit 16 TXFIFOF
    uint32_t RXFIFOF : 1; // bit 17 RXFIFOF
    uint32_t TXFIFOE : 1; // bit 18 TXFIFOE
    uint32_t RXFIFOE : 1; // bit 19 RXFIFOE
    uint32_t TXDAVL : 1; // bit 20 TXDAVL
    uint32_t RXDAVL : 1; // bit 21 RXDAVL
    uint32_t SDIOIT : 1; // bit 22 SDIOIT
    uint32_t CEATAEND : 1; // bit 23 CEATAEND
    uint32_t RESERVED0 : 1; // bit 24
    uint32_t RESERVED1 : 1; // bit 25
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t RESERVED3 : 1; // bit 27
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} SDIO_STA_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCRCFAILC : 1; // bit 0 CCRCFAILC
    uint32_t DCRCFAILC : 1; // bit 1 DCRCFAILC
    uint32_t CTIMEOUTC : 1; // bit 2 CTIMEOUTC
    uint32_t DTIMEOUTC : 1; // bit 3 DTIMEOUTC
    uint32_t TXUNDERRC : 1; // bit 4 TXUNDERRC
    uint32_t RXOVERRC : 1; // bit 5 RXOVERRC
    uint32_t CMDRENDC : 1; // bit 6 CMDRENDC
    uint32_t CMDSENTC : 1; // bit 7 CMDSENTC
    uint32_t DATAENDC : 1; // bit 8 DATAENDC
    uint32_t STBITERRC : 1; // bit 9 STBITERRC
    uint32_t DBCKENDC : 1; // bit 10 DBCKENDC
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
    uint32_t SDIOITC : 1; // bit 22 SDIOITC
    uint32_t CEATAENDC : 1; // bit 23 CEATAENDC
    uint32_t RESERVED11 : 1; // bit 24
    uint32_t RESERVED12 : 1; // bit 25
    uint32_t RESERVED13 : 1; // bit 26
    uint32_t RESERVED14 : 1; // bit 27
    uint32_t RESERVED15 : 1; // bit 28
    uint32_t RESERVED16 : 1; // bit 29
    uint32_t RESERVED17 : 1; // bit 30
    uint32_t RESERVED18 : 1; // bit 31
  } BITS;
} SDIO_ICR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCRCFAILIE : 1; // bit 0 CCRCFAILIE
    uint32_t DCRCFAILIE : 1; // bit 1 DCRCFAILIE
    uint32_t CTIMEOUTIE : 1; // bit 2 CTIMEOUTIE
    uint32_t DTIMEOUTIE : 1; // bit 3 DTIMEOUTIE
    uint32_t TXUNDERRIE : 1; // bit 4 TXUNDERRIE
    uint32_t RXOVERRIE : 1; // bit 5 RXOVERRIE
    uint32_t CMDRENDIE : 1; // bit 6 CMDRENDIE
    uint32_t CMDSENTIE : 1; // bit 7 CMDSENTIE
    uint32_t DATAENDIE : 1; // bit 8 DATAENDIE
    uint32_t STBITERRIE : 1; // bit 9 STBITERRIE
    uint32_t DBACKENDIE : 1; // bit 10 DBACKENDIE
    uint32_t CMDACTIE : 1; // bit 11 CMDACTIE
    uint32_t TXACTIE : 1; // bit 12 TXACTIE
    uint32_t RXACTIE : 1; // bit 13 RXACTIE
    uint32_t TXFIFOHEIE : 1; // bit 14 TXFIFOHEIE
    uint32_t RXFIFOHFIE : 1; // bit 15 RXFIFOHFIE
    uint32_t TXFIFOFIE : 1; // bit 16 TXFIFOFIE
    uint32_t RXFIFOFIE : 1; // bit 17 RXFIFOFIE
    uint32_t TXFIFOEIE : 1; // bit 18 TXFIFOEIE
    uint32_t RXFIFOEIE : 1; // bit 19 RXFIFOEIE
    uint32_t TXDAVLIE : 1; // bit 20 TXDAVLIE
    uint32_t RXDAVLIE : 1; // bit 21 RXDAVLIE
    uint32_t SDIOITIE : 1; // bit 22 SDIOITIE
    uint32_t CEATENDIE : 1; // bit 23 CEATENDIE
    uint32_t RESERVED0 : 1; // bit 24
    uint32_t RESERVED1 : 1; // bit 25
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t RESERVED3 : 1; // bit 27
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} SDIO_MASK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t FIF0COUNT : 24; // bit 0 FIF0COUNT
    uint32_t RESERVED0 : 1; // bit 24
    uint32_t RESERVED1 : 1; // bit 25
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t RESERVED3 : 1; // bit 27
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} SDIO_FIFOCNT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t FIFOData : 32; // bit 0 FIFOData
  } BITS;
} SDIO_FIFO_t;

typedef struct {
  SDIO_POWER_t POWER;
  SDIO_CLKCR_t CLKCR;
  SDIO_ARG_t ARG;
  SDIO_CMD_t CMD;
  SDIO_RESPCMD_t RESPCMD;
  SDIO_RESPI1_t RESPI1;
  SDIO_RESP2_t RESP2;
  SDIO_RESP3_t RESP3;
  SDIO_RESP4_t RESP4;
  SDIO_DTIMER_t DTIMER;
  SDIO_DLEN_t DLEN;
  SDIO_DCTRL_t DCTRL;
  SDIO_DCOUNT_t DCOUNT;
  SDIO_STA_t STA;
  SDIO_ICR_t ICR;
  SDIO_MASK_t MASK;
  SDIO_FIFOCNT_t FIFOCNT;
  SDIO_FIFO_t FIFO;
} SDIO_t;

#define SDIO_BASE (0x40018000UL)
#define SDIO ((SDIO_t *)SDIO_BASE)

#define SDIO_POWERbits (SDIO->POWER.BITS)
#define SDIO_CLKCRbits (SDIO->CLKCR.BITS)
#define SDIO_ARGbits (SDIO->ARG.BITS)
#define SDIO_CMDbits (SDIO->CMD.BITS)
#define SDIO_RESPCMDbits (SDIO->RESPCMD.BITS)
#define SDIO_RESPI1bits (SDIO->RESPI1.BITS)
#define SDIO_RESP2bits (SDIO->RESP2.BITS)
#define SDIO_RESP3bits (SDIO->RESP3.BITS)
#define SDIO_RESP4bits (SDIO->RESP4.BITS)
#define SDIO_DTIMERbits (SDIO->DTIMER.BITS)
#define SDIO_DLENbits (SDIO->DLEN.BITS)
#define SDIO_DCTRLbits (SDIO->DCTRL.BITS)
#define SDIO_DCOUNTbits (SDIO->DCOUNT.BITS)
#define SDIO_STAbits (SDIO->STA.BITS)
#define SDIO_ICRbits (SDIO->ICR.BITS)
#define SDIO_MASKbits (SDIO->MASK.BITS)
#define SDIO_FIFOCNTbits (SDIO->FIFOCNT.BITS)
#define SDIO_FIFObits (SDIO->FIFO.BITS)

#endif // _SDIO_H