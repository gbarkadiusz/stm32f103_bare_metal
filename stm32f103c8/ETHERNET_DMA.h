/**
 * @file    ETHERNET_DMA.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Ethernet: DMA controller operation
 *
 * This header file provides register definitions and bitfield access
 * for the ETHERNET_DMA peripheral of the STM32F103.
 */

#ifndef _ETHERNET_DMA_H
#define _ETHERNET_DMA_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SR : 1; // bit 0 Software reset
    uint32_t DA : 1; // bit 1 DMA Arbitration
    uint32_t DSL : 5; // bit 2 Descriptor skip length
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t PBL : 6; // bit 8 Programmable burst length
    uint32_t RTPR : 2; // bit 14 Rx Tx priority ratio
    uint32_t FB : 1; // bit 16 Fixed burst
    uint32_t RDP : 6; // bit 17 Rx DMA PBL
    uint32_t USP : 1; // bit 23 Use separate PBL
    uint32_t FPM : 1; // bit 24 4xPBL mode
    uint32_t AAB : 1; // bit 25 Address-aligned beats
    uint32_t RESERVED1 : 1; // bit 26
    uint32_t RESERVED2 : 1; // bit 27
    uint32_t RESERVED3 : 1; // bit 28
    uint32_t RESERVED4 : 1; // bit 29
    uint32_t RESERVED5 : 1; // bit 30
    uint32_t RESERVED6 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMABMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TPD : 32; // bit 0 Transmit poll demand
  } BITS;
} ETHERNET_DMA_DMATPDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RPD : 32; // bit 0 Receive poll demand
  } BITS;
} ETHERNET_DMA_DMARPDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SRL : 32; // bit 0 Start of receive list
  } BITS;
} ETHERNET_DMA_DMARDLAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t STL : 32; // bit 0 Start of transmit list
  } BITS;
} ETHERNET_DMA_DMATDLAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TS : 1; // bit 0 Transmit status
    uint32_t TPSS : 1; // bit 1 Transmit process stopped status
    uint32_t TBUS : 1; // bit 2 Transmit buffer unavailable status
    uint32_t TJTS : 1; // bit 3 Transmit jabber timeout status
    uint32_t ROS : 1; // bit 4 Receive overflow status
    uint32_t TUS : 1; // bit 5 Transmit underflow status
    uint32_t RS : 1; // bit 6 Receive status
    uint32_t RBUS : 1; // bit 7 Receive buffer unavailable status
    uint32_t RPSS : 1; // bit 8 Receive process stopped status
    uint32_t PWTS : 1; // bit 9 Receive watchdog timeout status
    uint32_t ETS : 1; // bit 10 Early transmit status
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t FBES : 1; // bit 13 Fatal bus error status
    uint32_t ERS : 1; // bit 14 Early receive status
    uint32_t AIS : 1; // bit 15 Abnormal interrupt summary
    uint32_t NIS : 1; // bit 16 Normal interrupt summary
    uint32_t RPS : 3; // bit 17 Receive process state
    uint32_t TPS : 3; // bit 20 Transmit process state
    uint32_t EBS : 3; // bit 23 Error bits status
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t MMCS : 1; // bit 27 MMC status
    uint32_t PMTS : 1; // bit 28 PMT status
    uint32_t TSTS : 1; // bit 29 Time stamp trigger status
    uint32_t RESERVED3 : 1; // bit 30
    uint32_t RESERVED4 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMASR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t SR : 1; // bit 1 SR
    uint32_t OSF : 1; // bit 2 OSF
    uint32_t RTC : 2; // bit 3 RTC
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t FUGF : 1; // bit 6 FUGF
    uint32_t FEF : 1; // bit 7 FEF
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t RESERVED3 : 1; // bit 9
    uint32_t RESERVED4 : 1; // bit 10
    uint32_t RESERVED5 : 1; // bit 11
    uint32_t RESERVED6 : 1; // bit 12
    uint32_t ST : 1; // bit 13 ST
    uint32_t TTC : 3; // bit 14 TTC
    uint32_t RESERVED7 : 1; // bit 17
    uint32_t RESERVED8 : 1; // bit 18
    uint32_t RESERVED9 : 1; // bit 19
    uint32_t FTF : 1; // bit 20 FTF
    uint32_t TSF : 1; // bit 21 TSF
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t DFRF : 1; // bit 24 DFRF
    uint32_t RSF : 1; // bit 25 RSF
    uint32_t DTCEFD : 1; // bit 26 DTCEFD
    uint32_t RESERVED12 : 1; // bit 27
    uint32_t RESERVED13 : 1; // bit 28
    uint32_t RESERVED14 : 1; // bit 29
    uint32_t RESERVED15 : 1; // bit 30
    uint32_t RESERVED16 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMAOMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TIE : 1; // bit 0 Transmit interrupt enable
    uint32_t TPSIE : 1; // bit 1 Transmit process stopped interrupt enable
    uint32_t TBUIE : 1; // bit 2 Transmit buffer unavailable interrupt enable
    uint32_t TJTIE : 1; // bit 3 Transmit jabber timeout interrupt enable
    uint32_t ROIE : 1; // bit 4 Overflow interrupt enable
    uint32_t TUIE : 1; // bit 5 Underflow interrupt enable
    uint32_t RIE : 1; // bit 6 Receive interrupt enable
    uint32_t RBUIE : 1; // bit 7 Receive buffer unavailable interrupt enable
    uint32_t RPSIE : 1; // bit 8 Receive process stopped interrupt enable
    uint32_t RWTIE : 1; // bit 9 receive watchdog timeout interrupt enable
    uint32_t ETIE : 1; // bit 10 Early transmit interrupt enable
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t FBEIE : 1; // bit 13 Fatal bus error interrupt enable
    uint32_t ERIE : 1; // bit 14 Early receive interrupt enable
    uint32_t AISE : 1; // bit 15 Abnormal interrupt summary enable
    uint32_t NISE : 1; // bit 16 Normal interrupt summary enable
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
} ETHERNET_DMA_DMAIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MFC : 16; // bit 0 Missed frames by the controller
    uint32_t OMFC : 1; // bit 16 Overflow bit for missed frame counter
    uint32_t MFA : 11; // bit 17 Missed frames by the application
    uint32_t OFOC : 1; // bit 28 Overflow bit for FIFO overflow counter
    uint32_t RESERVED0 : 1; // bit 29
    uint32_t RESERVED1 : 1; // bit 30
    uint32_t RESERVED2 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMAMFBOCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t HTDAP : 32; // bit 0 Host transmit descriptor address pointer
  } BITS;
} ETHERNET_DMA_DMACHTDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t HRDAP : 32; // bit 0 Host receive descriptor address pointer
  } BITS;
} ETHERNET_DMA_DMACHRDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t HTBAP : 32; // bit 0 Host transmit buffer address pointer
  } BITS;
} ETHERNET_DMA_DMACHTBAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t HRBAP : 32; // bit 0 Host receive buffer address pointer
  } BITS;
} ETHERNET_DMA_DMACHRBAR_t;

typedef struct {
  ETHERNET_DMA_DMABMR_t DMABMR;
  ETHERNET_DMA_DMATPDR_t DMATPDR;
  ETHERNET_DMA_DMARPDR_t DMARPDR;
  ETHERNET_DMA_DMARDLAR_t DMARDLAR;
  ETHERNET_DMA_DMATDLAR_t DMATDLAR;
  ETHERNET_DMA_DMASR_t DMASR;
  ETHERNET_DMA_DMAOMR_t DMAOMR;
  ETHERNET_DMA_DMAIER_t DMAIER;
  ETHERNET_DMA_DMAMFBOCR_t DMAMFBOCR;
  ETHERNET_DMA_DMACHTDR_t DMACHTDR;
  ETHERNET_DMA_DMACHRDR_t DMACHRDR;
  ETHERNET_DMA_DMACHTBAR_t DMACHTBAR;
  ETHERNET_DMA_DMACHRBAR_t DMACHRBAR;
} ETHERNET_DMA_t;

#define ETHERNET_DMA_BASE (0x40029000UL)
#define ETHERNET_DMA ((ETHERNET_DMA_t *)ETHERNET_DMA_BASE)

#define ETHERNET_DMA_DMABMRbits (ETHERNET_DMA->DMABMR.BITS)
#define ETHERNET_DMA_DMATPDRbits (ETHERNET_DMA->DMATPDR.BITS)
#define ETHERNET_DMA_DMARPDRbits (ETHERNET_DMA->DMARPDR.BITS)
#define ETHERNET_DMA_DMARDLARbits (ETHERNET_DMA->DMARDLAR.BITS)
#define ETHERNET_DMA_DMATDLARbits (ETHERNET_DMA->DMATDLAR.BITS)
#define ETHERNET_DMA_DMASRbits (ETHERNET_DMA->DMASR.BITS)
#define ETHERNET_DMA_DMAOMRbits (ETHERNET_DMA->DMAOMR.BITS)
#define ETHERNET_DMA_DMAIERbits (ETHERNET_DMA->DMAIER.BITS)
#define ETHERNET_DMA_DMAMFBOCRbits (ETHERNET_DMA->DMAMFBOCR.BITS)
#define ETHERNET_DMA_DMACHTDRbits (ETHERNET_DMA->DMACHTDR.BITS)
#define ETHERNET_DMA_DMACHRDRbits (ETHERNET_DMA->DMACHRDR.BITS)
#define ETHERNET_DMA_DMACHTBARbits (ETHERNET_DMA->DMACHTBAR.BITS)
#define ETHERNET_DMA_DMACHRBARbits (ETHERNET_DMA->DMACHRBAR.BITS)

#endif // _ETHERNET_DMA_H