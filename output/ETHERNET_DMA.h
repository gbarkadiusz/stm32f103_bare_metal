/**
 * @file    ETHERNET_DMA.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
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
    volatile uint32_t SR : 1; // bit 0 Software reset
    volatile uint32_t DA : 1; // bit 1 DMA Arbitration
    volatile uint32_t DSL : 5; // bit 2 Descriptor skip length
    volatile uint32_t RESERVED0 : 1; // bit 7
    volatile uint32_t PBL : 6; // bit 8 Programmable burst length
    volatile uint32_t RTPR : 2; // bit 14 Rx Tx priority ratio
    volatile uint32_t FB : 1; // bit 16 Fixed burst
    volatile uint32_t RDP : 6; // bit 17 Rx DMA PBL
    volatile uint32_t USP : 1; // bit 23 Use separate PBL
    volatile uint32_t FPM : 1; // bit 24 4xPBL mode
    volatile uint32_t AAB : 1; // bit 25 Address-aligned beats
    volatile uint32_t RESERVED1 : 1; // bit 26
    volatile uint32_t RESERVED2 : 1; // bit 27
    volatile uint32_t RESERVED3 : 1; // bit 28
    volatile uint32_t RESERVED4 : 1; // bit 29
    volatile uint32_t RESERVED5 : 1; // bit 30
    volatile uint32_t RESERVED6 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMABMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TPD : 32; // bit 0 Transmit poll demand
  } BITS;
} ETHERNET_DMA_DMATPDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RPD : 32; // bit 0 Receive poll demand
  } BITS;
} ETHERNET_DMA_DMARPDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SRL : 32; // bit 0 Start of receive list
  } BITS;
} ETHERNET_DMA_DMARDLAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t STL : 32; // bit 0 Start of transmit list
  } BITS;
} ETHERNET_DMA_DMATDLAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TS : 1; // bit 0 Transmit status
    volatile uint32_t TPSS : 1; // bit 1 Transmit process stopped status
    volatile uint32_t TBUS : 1; // bit 2 Transmit buffer unavailable status
    volatile uint32_t TJTS : 1; // bit 3 Transmit jabber timeout status
    volatile uint32_t ROS : 1; // bit 4 Receive overflow status
    volatile uint32_t TUS : 1; // bit 5 Transmit underflow status
    volatile uint32_t RS : 1; // bit 6 Receive status
    volatile uint32_t RBUS : 1; // bit 7 Receive buffer unavailable status
    volatile uint32_t RPSS : 1; // bit 8 Receive process stopped status
    volatile uint32_t PWTS : 1; // bit 9 Receive watchdog timeout status
    volatile uint32_t ETS : 1; // bit 10 Early transmit status
    volatile uint32_t RESERVED0 : 1; // bit 11
    volatile uint32_t RESERVED1 : 1; // bit 12
    volatile uint32_t FBES : 1; // bit 13 Fatal bus error status
    volatile uint32_t ERS : 1; // bit 14 Early receive status
    volatile uint32_t AIS : 1; // bit 15 Abnormal interrupt summary
    volatile uint32_t NIS : 1; // bit 16 Normal interrupt summary
    volatile uint32_t RPS : 3; // bit 17 Receive process state
    volatile uint32_t TPS : 3; // bit 20 Transmit process state
    volatile uint32_t EBS : 3; // bit 23 Error bits status
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t MMCS : 1; // bit 27 MMC status
    volatile uint32_t PMTS : 1; // bit 28 PMT status
    volatile uint32_t TSTS : 1; // bit 29 Time stamp trigger status
    volatile uint32_t RESERVED3 : 1; // bit 30
    volatile uint32_t RESERVED4 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMASR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t SR : 1; // bit 1 SR
    volatile uint32_t OSF : 1; // bit 2 OSF
    volatile uint32_t RTC : 2; // bit 3 RTC
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t FUGF : 1; // bit 6 FUGF
    volatile uint32_t FEF : 1; // bit 7 FEF
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t RESERVED3 : 1; // bit 9
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t ST : 1; // bit 13 ST
    volatile uint32_t TTC : 3; // bit 14 TTC
    volatile uint32_t RESERVED7 : 1; // bit 17
    volatile uint32_t RESERVED8 : 1; // bit 18
    volatile uint32_t RESERVED9 : 1; // bit 19
    volatile uint32_t FTF : 1; // bit 20 FTF
    volatile uint32_t TSF : 1; // bit 21 TSF
    volatile uint32_t RESERVED10 : 1; // bit 22
    volatile uint32_t RESERVED11 : 1; // bit 23
    volatile uint32_t DFRF : 1; // bit 24 DFRF
    volatile uint32_t RSF : 1; // bit 25 RSF
    volatile uint32_t DTCEFD : 1; // bit 26 DTCEFD
    volatile uint32_t RESERVED12 : 1; // bit 27
    volatile uint32_t RESERVED13 : 1; // bit 28
    volatile uint32_t RESERVED14 : 1; // bit 29
    volatile uint32_t RESERVED15 : 1; // bit 30
    volatile uint32_t RESERVED16 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMAOMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TIE : 1; // bit 0 Transmit interrupt enable
    volatile uint32_t TPSIE : 1; // bit 1 Transmit process stopped interrupt enable
    volatile uint32_t TBUIE : 1; // bit 2 Transmit buffer unavailable interrupt enable
    volatile uint32_t TJTIE : 1; // bit 3 Transmit jabber timeout interrupt enable
    volatile uint32_t ROIE : 1; // bit 4 Overflow interrupt enable
    volatile uint32_t TUIE : 1; // bit 5 Underflow interrupt enable
    volatile uint32_t RIE : 1; // bit 6 Receive interrupt enable
    volatile uint32_t RBUIE : 1; // bit 7 Receive buffer unavailable interrupt enable
    volatile uint32_t RPSIE : 1; // bit 8 Receive process stopped interrupt enable
    volatile uint32_t RWTIE : 1; // bit 9 receive watchdog timeout interrupt enable
    volatile uint32_t ETIE : 1; // bit 10 Early transmit interrupt enable
    volatile uint32_t RESERVED0 : 1; // bit 11
    volatile uint32_t RESERVED1 : 1; // bit 12
    volatile uint32_t FBEIE : 1; // bit 13 Fatal bus error interrupt enable
    volatile uint32_t ERIE : 1; // bit 14 Early receive interrupt enable
    volatile uint32_t AISE : 1; // bit 15 Abnormal interrupt summary enable
    volatile uint32_t NISE : 1; // bit 16 Normal interrupt summary enable
    volatile uint32_t RESERVED2 : 1; // bit 17
    volatile uint32_t RESERVED3 : 1; // bit 18
    volatile uint32_t RESERVED4 : 1; // bit 19
    volatile uint32_t RESERVED5 : 1; // bit 20
    volatile uint32_t RESERVED6 : 1; // bit 21
    volatile uint32_t RESERVED7 : 1; // bit 22
    volatile uint32_t RESERVED8 : 1; // bit 23
    volatile uint32_t RESERVED9 : 1; // bit 24
    volatile uint32_t RESERVED10 : 1; // bit 25
    volatile uint32_t RESERVED11 : 1; // bit 26
    volatile uint32_t RESERVED12 : 1; // bit 27
    volatile uint32_t RESERVED13 : 1; // bit 28
    volatile uint32_t RESERVED14 : 1; // bit 29
    volatile uint32_t RESERVED15 : 1; // bit 30
    volatile uint32_t RESERVED16 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMAIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MFC : 16; // bit 0 Missed frames by the controller
    volatile uint32_t OMFC : 1; // bit 16 Overflow bit for missed frame counter
    volatile uint32_t MFA : 11; // bit 17 Missed frames by the application
    volatile uint32_t OFOC : 1; // bit 28 Overflow bit for FIFO overflow counter
    volatile uint32_t RESERVED0 : 1; // bit 29
    volatile uint32_t RESERVED1 : 1; // bit 30
    volatile uint32_t RESERVED2 : 1; // bit 31
  } BITS;
} ETHERNET_DMA_DMAMFBOCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HTDAP : 32; // bit 0 Host transmit descriptor address pointer
  } BITS;
} ETHERNET_DMA_DMACHTDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HRDAP : 32; // bit 0 Host receive descriptor address pointer
  } BITS;
} ETHERNET_DMA_DMACHRDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HTBAP : 32; // bit 0 Host transmit buffer address pointer
  } BITS;
} ETHERNET_DMA_DMACHTBAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HRBAP : 32; // bit 0 Host receive buffer address pointer
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