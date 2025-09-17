/**
 * @file    OTG_FS_DEVICE.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   USB on the go full speed
 *
 * This header file provides register definitions and bitfield access
 * for the OTG_FS_DEVICE peripheral of the STM32F103.
 */

#ifndef _OTG_FS_DEVICE_H
#define _OTG_FS_DEVICE_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DSPD : 2; // bit 0 Device speed
    uint32_t NZLSOHSK : 1; // bit 2 Non-zero-length status OUT handshake
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t DAD : 7; // bit 4 Device address
    uint32_t PFIVL : 2; // bit 11 Periodic frame interval
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
} OTG_FS_DEVICE_FS_DCFG_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RWUSIG : 1; // bit 0 Remote wakeup signaling
    uint32_t SDIS : 1; // bit 1 Soft disconnect
    uint32_t GINSTS : 1; // bit 2 Global IN NAK status
    uint32_t GONSTS : 1; // bit 3 Global OUT NAK status
    uint32_t TCTL : 3; // bit 4 Test control
    uint32_t SGINAK : 1; // bit 7 Set global IN NAK
    uint32_t CGINAK : 1; // bit 8 Clear global IN NAK
    uint32_t SGONAK : 1; // bit 9 Set global OUT NAK
    uint32_t CGONAK : 1; // bit 10 Clear global OUT NAK
    uint32_t POPRGDNE : 1; // bit 11 Power-on programming done
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
} OTG_FS_DEVICE_FS_DCTL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SUSPSTS : 1; // bit 0 Suspend status
    uint32_t ENUMSPD : 2; // bit 1 Enumerated speed
    uint32_t EERR : 1; // bit 3 Erratic error
    uint32_t RESERVED0 : 1; // bit 4
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t FNSOF : 14; // bit 8 Frame number of the received SOF
    uint32_t RESERVED4 : 1; // bit 22
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t RESERVED6 : 1; // bit 24
    uint32_t RESERVED7 : 1; // bit 25
    uint32_t RESERVED8 : 1; // bit 26
    uint32_t RESERVED9 : 1; // bit 27
    uint32_t RESERVED10 : 1; // bit 28
    uint32_t RESERVED11 : 1; // bit 29
    uint32_t RESERVED12 : 1; // bit 30
    uint32_t RESERVED13 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_FS_DSTS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRCM : 1; // bit 0 Transfer completed interrupt mask
    uint32_t EPDM : 1; // bit 1 Endpoint disabled interrupt mask
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t TOM : 1; // bit 3 Timeout condition mask (Non-isochronous endpoints)
    uint32_t ITTXFEMSK : 1; // bit 4 IN token received when TxFIFO empty mask
    uint32_t INEPNMM : 1; // bit 5 IN token received with EP mismatch mask
    uint32_t INEPNEM : 1; // bit 6 IN endpoint NAK effective mask
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
} OTG_FS_DEVICE_FS_DIEPMSK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRCM : 1; // bit 0 Transfer completed interrupt mask
    uint32_t EPDM : 1; // bit 1 Endpoint disabled interrupt mask
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t STUPM : 1; // bit 3 SETUP phase done mask
    uint32_t OTEPDM : 1; // bit 4 OUT token received when endpoint disabled mask
    uint32_t RESERVED1 : 1; // bit 5
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
} OTG_FS_DEVICE_FS_DOEPMSK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IEPINT : 16; // bit 0 IN endpoint interrupt bits
    uint32_t OEPINT : 16; // bit 16 OUT endpoint interrupt bits
  } BITS;
} OTG_FS_DEVICE_FS_DAINT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IEPM : 16; // bit 0 IN EP interrupt mask bits
    uint32_t OEPINT : 16; // bit 16 OUT endpoint interrupt bits
  } BITS;
} OTG_FS_DEVICE_FS_DAINTMSK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t VBUSDT : 16; // bit 0 Device VBUS discharge time
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DVBUSDIS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DVBUSP : 12; // bit 0 Device VBUS pulsing time
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
} OTG_FS_DEVICE_DVBUSPULSE_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTXFEM : 16; // bit 0 IN EP Tx FIFO empty interrupt mask bits
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DIEPEMPMSK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 2; // bit 0 Maximum packet size
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
    uint32_t USBAEP : 1; // bit 15 USB active endpoint
    uint32_t RESERVED13 : 1; // bit 16
    uint32_t NAKSTS : 1; // bit 17 NAK status
    uint32_t EPTYP : 2; // bit 18 Endpoint type
    uint32_t RESERVED14 : 1; // bit 20
    uint32_t STALL : 1; // bit 21 STALL handshake
    uint32_t TXFNUM : 4; // bit 22 TxFIFO number
    uint32_t CNAK : 1; // bit 26 Clear NAK
    uint32_t SNAK : 1; // bit 27 Set NAK
    uint32_t RESERVED15 : 1; // bit 28
    uint32_t RESERVED16 : 1; // bit 29
    uint32_t EPDIS : 1; // bit 30 Endpoint disable
    uint32_t EPENA : 1; // bit 31 Endpoint enable
  } BITS;
} OTG_FS_DEVICE_FS_DIEPCTL0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 11; // bit 0 MPSIZ
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t EONUM_DPID : 1; // bit 16 EONUM/DPID
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t TXFNUM : 4; // bit 22 TXFNUM
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
    uint32_t SODDFRM_SD1PID : 1; // bit 29 SODDFRM/SD1PID
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DIEPCTL1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 11; // bit 0 MPSIZ
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t EONUM_DPID : 1; // bit 16 EONUM/DPID
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t TXFNUM : 4; // bit 22 TXFNUM
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
    uint32_t SODDFRM : 1; // bit 29 SODDFRM
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DIEPCTL2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 11; // bit 0 MPSIZ
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t EONUM_DPID : 1; // bit 16 EONUM/DPID
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t TXFNUM : 4; // bit 22 TXFNUM
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
    uint32_t SODDFRM : 1; // bit 29 SODDFRM
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DIEPCTL3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 2; // bit 0 MPSIZ
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
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t RESERVED13 : 1; // bit 16
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t SNPM : 1; // bit 20 SNPM
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t RESERVED14 : 1; // bit 22
    uint32_t RESERVED15 : 1; // bit 23
    uint32_t RESERVED16 : 1; // bit 24
    uint32_t RESERVED17 : 1; // bit 25
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t RESERVED18 : 1; // bit 28
    uint32_t RESERVED19 : 1; // bit 29
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DOEPCTL0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 11; // bit 0 MPSIZ
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t EONUM_DPID : 1; // bit 16 EONUM/DPID
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t SNPM : 1; // bit 20 SNPM
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t RESERVED4 : 1; // bit 22
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t RESERVED6 : 1; // bit 24
    uint32_t RESERVED7 : 1; // bit 25
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
    uint32_t SODDFRM : 1; // bit 29 SODDFRM
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DOEPCTL1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 11; // bit 0 MPSIZ
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t EONUM_DPID : 1; // bit 16 EONUM/DPID
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t SNPM : 1; // bit 20 SNPM
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t RESERVED4 : 1; // bit 22
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t RESERVED6 : 1; // bit 24
    uint32_t RESERVED7 : 1; // bit 25
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
    uint32_t SODDFRM : 1; // bit 29 SODDFRM
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DOEPCTL2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MPSIZ : 11; // bit 0 MPSIZ
    uint32_t RESERVED0 : 1; // bit 11
    uint32_t RESERVED1 : 1; // bit 12
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t USBAEP : 1; // bit 15 USBAEP
    uint32_t EONUM_DPID : 1; // bit 16 EONUM/DPID
    uint32_t NAKSTS : 1; // bit 17 NAKSTS
    uint32_t EPTYP : 2; // bit 18 EPTYP
    uint32_t SNPM : 1; // bit 20 SNPM
    uint32_t Stall : 1; // bit 21 Stall
    uint32_t RESERVED4 : 1; // bit 22
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t RESERVED6 : 1; // bit 24
    uint32_t RESERVED7 : 1; // bit 25
    uint32_t CNAK : 1; // bit 26 CNAK
    uint32_t SNAK : 1; // bit 27 SNAK
    uint32_t SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
    uint32_t SODDFRM : 1; // bit 29 SODDFRM
    uint32_t EPDIS : 1; // bit 30 EPDIS
    uint32_t EPENA : 1; // bit 31 EPENA
  } BITS;
} OTG_FS_DEVICE_DOEPCTL3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t TOC : 1; // bit 3 TOC
    uint32_t ITTXFE : 1; // bit 4 ITTXFE
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t INEPNE : 1; // bit 6 INEPNE
    uint32_t TXFE : 1; // bit 7 TXFE
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
} OTG_FS_DEVICE_DIEPINT0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t TOC : 1; // bit 3 TOC
    uint32_t ITTXFE : 1; // bit 4 ITTXFE
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t INEPNE : 1; // bit 6 INEPNE
    uint32_t TXFE : 1; // bit 7 TXFE
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
} OTG_FS_DEVICE_DIEPINT1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t TOC : 1; // bit 3 TOC
    uint32_t ITTXFE : 1; // bit 4 ITTXFE
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t INEPNE : 1; // bit 6 INEPNE
    uint32_t TXFE : 1; // bit 7 TXFE
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
} OTG_FS_DEVICE_DIEPINT2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t TOC : 1; // bit 3 TOC
    uint32_t ITTXFE : 1; // bit 4 ITTXFE
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t INEPNE : 1; // bit 6 INEPNE
    uint32_t TXFE : 1; // bit 7 TXFE
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
} OTG_FS_DEVICE_DIEPINT3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t STUP : 1; // bit 3 STUP
    uint32_t OTEPDIS : 1; // bit 4 OTEPDIS
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t B2BSTUP : 1; // bit 6 B2BSTUP
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t RESERVED3 : 1; // bit 8
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t RESERVED6 : 1; // bit 11
    uint32_t RESERVED7 : 1; // bit 12
    uint32_t RESERVED8 : 1; // bit 13
    uint32_t RESERVED9 : 1; // bit 14
    uint32_t RESERVED10 : 1; // bit 15
    uint32_t RESERVED11 : 1; // bit 16
    uint32_t RESERVED12 : 1; // bit 17
    uint32_t RESERVED13 : 1; // bit 18
    uint32_t RESERVED14 : 1; // bit 19
    uint32_t RESERVED15 : 1; // bit 20
    uint32_t RESERVED16 : 1; // bit 21
    uint32_t RESERVED17 : 1; // bit 22
    uint32_t RESERVED18 : 1; // bit 23
    uint32_t RESERVED19 : 1; // bit 24
    uint32_t RESERVED20 : 1; // bit 25
    uint32_t RESERVED21 : 1; // bit 26
    uint32_t RESERVED22 : 1; // bit 27
    uint32_t RESERVED23 : 1; // bit 28
    uint32_t RESERVED24 : 1; // bit 29
    uint32_t RESERVED25 : 1; // bit 30
    uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPINT0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t STUP : 1; // bit 3 STUP
    uint32_t OTEPDIS : 1; // bit 4 OTEPDIS
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t B2BSTUP : 1; // bit 6 B2BSTUP
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t RESERVED3 : 1; // bit 8
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t RESERVED6 : 1; // bit 11
    uint32_t RESERVED7 : 1; // bit 12
    uint32_t RESERVED8 : 1; // bit 13
    uint32_t RESERVED9 : 1; // bit 14
    uint32_t RESERVED10 : 1; // bit 15
    uint32_t RESERVED11 : 1; // bit 16
    uint32_t RESERVED12 : 1; // bit 17
    uint32_t RESERVED13 : 1; // bit 18
    uint32_t RESERVED14 : 1; // bit 19
    uint32_t RESERVED15 : 1; // bit 20
    uint32_t RESERVED16 : 1; // bit 21
    uint32_t RESERVED17 : 1; // bit 22
    uint32_t RESERVED18 : 1; // bit 23
    uint32_t RESERVED19 : 1; // bit 24
    uint32_t RESERVED20 : 1; // bit 25
    uint32_t RESERVED21 : 1; // bit 26
    uint32_t RESERVED22 : 1; // bit 27
    uint32_t RESERVED23 : 1; // bit 28
    uint32_t RESERVED24 : 1; // bit 29
    uint32_t RESERVED25 : 1; // bit 30
    uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPINT1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t STUP : 1; // bit 3 STUP
    uint32_t OTEPDIS : 1; // bit 4 OTEPDIS
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t B2BSTUP : 1; // bit 6 B2BSTUP
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t RESERVED3 : 1; // bit 8
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t RESERVED6 : 1; // bit 11
    uint32_t RESERVED7 : 1; // bit 12
    uint32_t RESERVED8 : 1; // bit 13
    uint32_t RESERVED9 : 1; // bit 14
    uint32_t RESERVED10 : 1; // bit 15
    uint32_t RESERVED11 : 1; // bit 16
    uint32_t RESERVED12 : 1; // bit 17
    uint32_t RESERVED13 : 1; // bit 18
    uint32_t RESERVED14 : 1; // bit 19
    uint32_t RESERVED15 : 1; // bit 20
    uint32_t RESERVED16 : 1; // bit 21
    uint32_t RESERVED17 : 1; // bit 22
    uint32_t RESERVED18 : 1; // bit 23
    uint32_t RESERVED19 : 1; // bit 24
    uint32_t RESERVED20 : 1; // bit 25
    uint32_t RESERVED21 : 1; // bit 26
    uint32_t RESERVED22 : 1; // bit 27
    uint32_t RESERVED23 : 1; // bit 28
    uint32_t RESERVED24 : 1; // bit 29
    uint32_t RESERVED25 : 1; // bit 30
    uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPINT2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRC : 1; // bit 0 XFRC
    uint32_t EPDISD : 1; // bit 1 EPDISD
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t STUP : 1; // bit 3 STUP
    uint32_t OTEPDIS : 1; // bit 4 OTEPDIS
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t B2BSTUP : 1; // bit 6 B2BSTUP
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t RESERVED3 : 1; // bit 8
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t RESERVED6 : 1; // bit 11
    uint32_t RESERVED7 : 1; // bit 12
    uint32_t RESERVED8 : 1; // bit 13
    uint32_t RESERVED9 : 1; // bit 14
    uint32_t RESERVED10 : 1; // bit 15
    uint32_t RESERVED11 : 1; // bit 16
    uint32_t RESERVED12 : 1; // bit 17
    uint32_t RESERVED13 : 1; // bit 18
    uint32_t RESERVED14 : 1; // bit 19
    uint32_t RESERVED15 : 1; // bit 20
    uint32_t RESERVED16 : 1; // bit 21
    uint32_t RESERVED17 : 1; // bit 22
    uint32_t RESERVED18 : 1; // bit 23
    uint32_t RESERVED19 : 1; // bit 24
    uint32_t RESERVED20 : 1; // bit 25
    uint32_t RESERVED21 : 1; // bit 26
    uint32_t RESERVED22 : 1; // bit 27
    uint32_t RESERVED23 : 1; // bit 28
    uint32_t RESERVED24 : 1; // bit 29
    uint32_t RESERVED25 : 1; // bit 30
    uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPINT3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 7; // bit 0 Transfer size
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t RESERVED2 : 1; // bit 9
    uint32_t RESERVED3 : 1; // bit 10
    uint32_t RESERVED4 : 1; // bit 11
    uint32_t RESERVED5 : 1; // bit 12
    uint32_t RESERVED6 : 1; // bit 13
    uint32_t RESERVED7 : 1; // bit 14
    uint32_t RESERVED8 : 1; // bit 15
    uint32_t RESERVED9 : 1; // bit 16
    uint32_t RESERVED10 : 1; // bit 17
    uint32_t RESERVED11 : 1; // bit 18
    uint32_t PKTCNT : 2; // bit 19 Packet count
    uint32_t RESERVED12 : 1; // bit 21
    uint32_t RESERVED13 : 1; // bit 22
    uint32_t RESERVED14 : 1; // bit 23
    uint32_t RESERVED15 : 1; // bit 24
    uint32_t RESERVED16 : 1; // bit 25
    uint32_t RESERVED17 : 1; // bit 26
    uint32_t RESERVED18 : 1; // bit 27
    uint32_t RESERVED19 : 1; // bit 28
    uint32_t RESERVED20 : 1; // bit 29
    uint32_t RESERVED21 : 1; // bit 30
    uint32_t RESERVED22 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DIEPTSIZ0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 7; // bit 0 Transfer size
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t RESERVED2 : 1; // bit 9
    uint32_t RESERVED3 : 1; // bit 10
    uint32_t RESERVED4 : 1; // bit 11
    uint32_t RESERVED5 : 1; // bit 12
    uint32_t RESERVED6 : 1; // bit 13
    uint32_t RESERVED7 : 1; // bit 14
    uint32_t RESERVED8 : 1; // bit 15
    uint32_t RESERVED9 : 1; // bit 16
    uint32_t RESERVED10 : 1; // bit 17
    uint32_t RESERVED11 : 1; // bit 18
    uint32_t PKTCNT : 1; // bit 19 Packet count
    uint32_t RESERVED12 : 1; // bit 20
    uint32_t RESERVED13 : 1; // bit 21
    uint32_t RESERVED14 : 1; // bit 22
    uint32_t RESERVED15 : 1; // bit 23
    uint32_t RESERVED16 : 1; // bit 24
    uint32_t RESERVED17 : 1; // bit 25
    uint32_t RESERVED18 : 1; // bit 26
    uint32_t RESERVED19 : 1; // bit 27
    uint32_t RESERVED20 : 1; // bit 28
    uint32_t STUPCNT : 2; // bit 29 SETUP packet count
    uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPTSIZ0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 19; // bit 0 Transfer size
    uint32_t PKTCNT : 10; // bit 19 Packet count
    uint32_t MCNT : 2; // bit 29 Multi count
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DIEPTSIZ1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 19; // bit 0 Transfer size
    uint32_t PKTCNT : 10; // bit 19 Packet count
    uint32_t MCNT : 2; // bit 29 Multi count
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DIEPTSIZ2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 19; // bit 0 Transfer size
    uint32_t PKTCNT : 10; // bit 19 Packet count
    uint32_t MCNT : 2; // bit 29 Multi count
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DIEPTSIZ3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTFSAV : 16; // bit 0 IN endpoint TxFIFO space available
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DTXFSTS0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTFSAV : 16; // bit 0 IN endpoint TxFIFO space available
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DTXFSTS1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTFSAV : 16; // bit 0 IN endpoint TxFIFO space available
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DTXFSTS2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTFSAV : 16; // bit 0 IN endpoint TxFIFO space available
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DTXFSTS3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 19; // bit 0 Transfer size
    uint32_t PKTCNT : 10; // bit 19 Packet count
    uint32_t RXDPID_STUPCNT : 2; // bit 29 Received data PID/SETUP packet count
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPTSIZ1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 19; // bit 0 Transfer size
    uint32_t PKTCNT : 10; // bit 19 Packet count
    uint32_t RXDPID_STUPCNT : 2; // bit 29 Received data PID/SETUP packet count
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPTSIZ2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t XFRSIZ : 19; // bit 0 Transfer size
    uint32_t PKTCNT : 10; // bit 19 Packet count
    uint32_t RXDPID_STUPCNT : 2; // bit 29 Received data PID/SETUP packet count
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_DEVICE_DOEPTSIZ3_t;

typedef struct {
  OTG_FS_DEVICE_FS_DCFG_t FS_DCFG;
  OTG_FS_DEVICE_FS_DCTL_t FS_DCTL;
  OTG_FS_DEVICE_FS_DSTS_t FS_DSTS;
  OTG_FS_DEVICE_FS_DIEPMSK_t FS_DIEPMSK;
  OTG_FS_DEVICE_FS_DOEPMSK_t FS_DOEPMSK;
  OTG_FS_DEVICE_FS_DAINT_t FS_DAINT;
  OTG_FS_DEVICE_FS_DAINTMSK_t FS_DAINTMSK;
  OTG_FS_DEVICE_DVBUSDIS_t DVBUSDIS;
  OTG_FS_DEVICE_DVBUSPULSE_t DVBUSPULSE;
  OTG_FS_DEVICE_DIEPEMPMSK_t DIEPEMPMSK;
  OTG_FS_DEVICE_FS_DIEPCTL0_t FS_DIEPCTL0;
  OTG_FS_DEVICE_DIEPCTL1_t DIEPCTL1;
  OTG_FS_DEVICE_DIEPCTL2_t DIEPCTL2;
  OTG_FS_DEVICE_DIEPCTL3_t DIEPCTL3;
  OTG_FS_DEVICE_DOEPCTL0_t DOEPCTL0;
  OTG_FS_DEVICE_DOEPCTL1_t DOEPCTL1;
  OTG_FS_DEVICE_DOEPCTL2_t DOEPCTL2;
  OTG_FS_DEVICE_DOEPCTL3_t DOEPCTL3;
  OTG_FS_DEVICE_DIEPINT0_t DIEPINT0;
  OTG_FS_DEVICE_DIEPINT1_t DIEPINT1;
  OTG_FS_DEVICE_DIEPINT2_t DIEPINT2;
  OTG_FS_DEVICE_DIEPINT3_t DIEPINT3;
  OTG_FS_DEVICE_DOEPINT0_t DOEPINT0;
  OTG_FS_DEVICE_DOEPINT1_t DOEPINT1;
  OTG_FS_DEVICE_DOEPINT2_t DOEPINT2;
  OTG_FS_DEVICE_DOEPINT3_t DOEPINT3;
  OTG_FS_DEVICE_DIEPTSIZ0_t DIEPTSIZ0;
  OTG_FS_DEVICE_DOEPTSIZ0_t DOEPTSIZ0;
  OTG_FS_DEVICE_DIEPTSIZ1_t DIEPTSIZ1;
  OTG_FS_DEVICE_DIEPTSIZ2_t DIEPTSIZ2;
  OTG_FS_DEVICE_DIEPTSIZ3_t DIEPTSIZ3;
  OTG_FS_DEVICE_DTXFSTS0_t DTXFSTS0;
  OTG_FS_DEVICE_DTXFSTS1_t DTXFSTS1;
  OTG_FS_DEVICE_DTXFSTS2_t DTXFSTS2;
  OTG_FS_DEVICE_DTXFSTS3_t DTXFSTS3;
  OTG_FS_DEVICE_DOEPTSIZ1_t DOEPTSIZ1;
  OTG_FS_DEVICE_DOEPTSIZ2_t DOEPTSIZ2;
  OTG_FS_DEVICE_DOEPTSIZ3_t DOEPTSIZ3;
} OTG_FS_DEVICE_t;

#define OTG_FS_DEVICE_BASE (0x50000800UL)
#define OTG_FS_DEVICE ((OTG_FS_DEVICE_t *)OTG_FS_DEVICE_BASE)

#define OTG_FS_DEVICE_FS_DCFGbits (OTG_FS_DEVICE->FS_DCFG.BITS)
#define OTG_FS_DEVICE_FS_DCTLbits (OTG_FS_DEVICE->FS_DCTL.BITS)
#define OTG_FS_DEVICE_FS_DSTSbits (OTG_FS_DEVICE->FS_DSTS.BITS)
#define OTG_FS_DEVICE_FS_DIEPMSKbits (OTG_FS_DEVICE->FS_DIEPMSK.BITS)
#define OTG_FS_DEVICE_FS_DOEPMSKbits (OTG_FS_DEVICE->FS_DOEPMSK.BITS)
#define OTG_FS_DEVICE_FS_DAINTbits (OTG_FS_DEVICE->FS_DAINT.BITS)
#define OTG_FS_DEVICE_FS_DAINTMSKbits (OTG_FS_DEVICE->FS_DAINTMSK.BITS)
#define OTG_FS_DEVICE_DVBUSDISbits (OTG_FS_DEVICE->DVBUSDIS.BITS)
#define OTG_FS_DEVICE_DVBUSPULSEbits (OTG_FS_DEVICE->DVBUSPULSE.BITS)
#define OTG_FS_DEVICE_DIEPEMPMSKbits (OTG_FS_DEVICE->DIEPEMPMSK.BITS)
#define OTG_FS_DEVICE_FS_DIEPCTL0bits (OTG_FS_DEVICE->FS_DIEPCTL0.BITS)
#define OTG_FS_DEVICE_DIEPCTL1bits (OTG_FS_DEVICE->DIEPCTL1.BITS)
#define OTG_FS_DEVICE_DIEPCTL2bits (OTG_FS_DEVICE->DIEPCTL2.BITS)
#define OTG_FS_DEVICE_DIEPCTL3bits (OTG_FS_DEVICE->DIEPCTL3.BITS)
#define OTG_FS_DEVICE_DOEPCTL0bits (OTG_FS_DEVICE->DOEPCTL0.BITS)
#define OTG_FS_DEVICE_DOEPCTL1bits (OTG_FS_DEVICE->DOEPCTL1.BITS)
#define OTG_FS_DEVICE_DOEPCTL2bits (OTG_FS_DEVICE->DOEPCTL2.BITS)
#define OTG_FS_DEVICE_DOEPCTL3bits (OTG_FS_DEVICE->DOEPCTL3.BITS)
#define OTG_FS_DEVICE_DIEPINT0bits (OTG_FS_DEVICE->DIEPINT0.BITS)
#define OTG_FS_DEVICE_DIEPINT1bits (OTG_FS_DEVICE->DIEPINT1.BITS)
#define OTG_FS_DEVICE_DIEPINT2bits (OTG_FS_DEVICE->DIEPINT2.BITS)
#define OTG_FS_DEVICE_DIEPINT3bits (OTG_FS_DEVICE->DIEPINT3.BITS)
#define OTG_FS_DEVICE_DOEPINT0bits (OTG_FS_DEVICE->DOEPINT0.BITS)
#define OTG_FS_DEVICE_DOEPINT1bits (OTG_FS_DEVICE->DOEPINT1.BITS)
#define OTG_FS_DEVICE_DOEPINT2bits (OTG_FS_DEVICE->DOEPINT2.BITS)
#define OTG_FS_DEVICE_DOEPINT3bits (OTG_FS_DEVICE->DOEPINT3.BITS)
#define OTG_FS_DEVICE_DIEPTSIZ0bits (OTG_FS_DEVICE->DIEPTSIZ0.BITS)
#define OTG_FS_DEVICE_DOEPTSIZ0bits (OTG_FS_DEVICE->DOEPTSIZ0.BITS)
#define OTG_FS_DEVICE_DIEPTSIZ1bits (OTG_FS_DEVICE->DIEPTSIZ1.BITS)
#define OTG_FS_DEVICE_DIEPTSIZ2bits (OTG_FS_DEVICE->DIEPTSIZ2.BITS)
#define OTG_FS_DEVICE_DIEPTSIZ3bits (OTG_FS_DEVICE->DIEPTSIZ3.BITS)
#define OTG_FS_DEVICE_DTXFSTS0bits (OTG_FS_DEVICE->DTXFSTS0.BITS)
#define OTG_FS_DEVICE_DTXFSTS1bits (OTG_FS_DEVICE->DTXFSTS1.BITS)
#define OTG_FS_DEVICE_DTXFSTS2bits (OTG_FS_DEVICE->DTXFSTS2.BITS)
#define OTG_FS_DEVICE_DTXFSTS3bits (OTG_FS_DEVICE->DTXFSTS3.BITS)
#define OTG_FS_DEVICE_DOEPTSIZ1bits (OTG_FS_DEVICE->DOEPTSIZ1.BITS)
#define OTG_FS_DEVICE_DOEPTSIZ2bits (OTG_FS_DEVICE->DOEPTSIZ2.BITS)
#define OTG_FS_DEVICE_DOEPTSIZ3bits (OTG_FS_DEVICE->DOEPTSIZ3.BITS)

#endif // _OTG_FS_DEVICE_H