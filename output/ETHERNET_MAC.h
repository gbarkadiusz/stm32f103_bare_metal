/**
 * @file    ETHERNET_MAC.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Ethernet: media access control
 *
 * This header file provides register definitions and bitfield access
 * for the ETHERNET_MAC peripheral of the STM32F103.
 */

#ifndef _ETHERNET_MAC_H
#define _ETHERNET_MAC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RE : 1; // bit 2 Receiver enable
    volatile uint32_t TE : 1; // bit 3 Transmitter enable
    volatile uint32_t DC : 1; // bit 4 Deferral check
    volatile uint32_t BL : 2; // bit 5 Back-off limit
    volatile uint32_t APCS : 1; // bit 7 Automatic pad/CRC stripping
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t RD : 1; // bit 9 Retry disable
    volatile uint32_t IPCO : 1; // bit 10 IPv4 checksum offload
    volatile uint32_t DM : 1; // bit 11 Duplex mode
    volatile uint32_t LM : 1; // bit 12 Loopback mode
    volatile uint32_t ROD : 1; // bit 13 Receive own disable
    volatile uint32_t FES : 1; // bit 14 Fast Ethernet speed
    volatile uint32_t RESERVED3 : 1; // bit 15
    volatile uint32_t CSD : 1; // bit 16 Carrier sense disable
    volatile uint32_t IFG : 3; // bit 17 Interframe gap
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t JD : 1; // bit 22 Jabber disable
    volatile uint32_t WD : 1; // bit 23 Watchdog disable
    volatile uint32_t RESERVED6 : 1; // bit 24
    volatile uint32_t RESERVED7 : 1; // bit 25
    volatile uint32_t RESERVED8 : 1; // bit 26
    volatile uint32_t RESERVED9 : 1; // bit 27
    volatile uint32_t RESERVED10 : 1; // bit 28
    volatile uint32_t RESERVED11 : 1; // bit 29
    volatile uint32_t RESERVED12 : 1; // bit 30
    volatile uint32_t RESERVED13 : 1; // bit 31
  } BITS;
} ETHERNET_MAC_MACCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PM : 1; // bit 0 Promiscuous mode
    volatile uint32_t HU : 1; // bit 1 Hash unicast
    volatile uint32_t HM : 1; // bit 2 Hash multicast
    volatile uint32_t DAIF : 1; // bit 3 Destination address inverse filtering
    volatile uint32_t PAM : 1; // bit 4 Pass all multicast
    volatile uint32_t BFD : 1; // bit 5 Broadcast frames disable
    volatile uint32_t PCF : 2; // bit 6 Pass control frames
    volatile uint32_t SAIF : 1; // bit 8 Source address inverse filtering
    volatile uint32_t SAF : 1; // bit 9 Source address filter
    volatile uint32_t HPF : 1; // bit 10 Hash or perfect filter
    volatile uint32_t RESERVED0 : 1; // bit 11
    volatile uint32_t RESERVED1 : 1; // bit 12
    volatile uint32_t RESERVED2 : 1; // bit 13
    volatile uint32_t RESERVED3 : 1; // bit 14
    volatile uint32_t RESERVED4 : 1; // bit 15
    volatile uint32_t RESERVED5 : 1; // bit 16
    volatile uint32_t RESERVED6 : 1; // bit 17
    volatile uint32_t RESERVED7 : 1; // bit 18
    volatile uint32_t RESERVED8 : 1; // bit 19
    volatile uint32_t RESERVED9 : 1; // bit 20
    volatile uint32_t RESERVED10 : 1; // bit 21
    volatile uint32_t RESERVED11 : 1; // bit 22
    volatile uint32_t RESERVED12 : 1; // bit 23
    volatile uint32_t RESERVED13 : 1; // bit 24
    volatile uint32_t RESERVED14 : 1; // bit 25
    volatile uint32_t RESERVED15 : 1; // bit 26
    volatile uint32_t RESERVED16 : 1; // bit 27
    volatile uint32_t RESERVED17 : 1; // bit 28
    volatile uint32_t RESERVED18 : 1; // bit 29
    volatile uint32_t RESERVED19 : 1; // bit 30
    volatile uint32_t RA : 1; // bit 31 Receive all
  } BITS;
} ETHERNET_MAC_MACFFR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HTH : 32; // bit 0 Hash table high
  } BITS;
} ETHERNET_MAC_MACHTHR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HTL : 32; // bit 0 Hash table low
  } BITS;
} ETHERNET_MAC_MACHTLR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MB : 1; // bit 0 MII busy
    volatile uint32_t MW : 1; // bit 1 MII write
    volatile uint32_t CR : 3; // bit 2 Clock range
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t MR : 5; // bit 6 MII register
    volatile uint32_t PA : 5; // bit 11 PHY address
    volatile uint32_t RESERVED1 : 1; // bit 16
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
} ETHERNET_MAC_MACMIIAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MD : 16; // bit 0 MII data
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} ETHERNET_MAC_MACMIIDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FCB_BPA : 1; // bit 0 Flow control busy/back pressure activate
    volatile uint32_t TFCE : 1; // bit 1 Transmit flow control enable
    volatile uint32_t RFCE : 1; // bit 2 Receive flow control enable
    volatile uint32_t UPFD : 1; // bit 3 Unicast pause frame detect
    volatile uint32_t PLT : 2; // bit 4 Pause low threshold
    volatile uint32_t RESERVED0 : 1; // bit 6
    volatile uint32_t ZQPD : 1; // bit 7 Zero-quanta pause disable
    volatile uint32_t RESERVED1 : 1; // bit 8
    volatile uint32_t RESERVED2 : 1; // bit 9
    volatile uint32_t RESERVED3 : 1; // bit 10
    volatile uint32_t RESERVED4 : 1; // bit 11
    volatile uint32_t RESERVED5 : 1; // bit 12
    volatile uint32_t RESERVED6 : 1; // bit 13
    volatile uint32_t RESERVED7 : 1; // bit 14
    volatile uint32_t RESERVED8 : 1; // bit 15
    volatile uint32_t PT : 16; // bit 16 Pass control frames
  } BITS;
} ETHERNET_MAC_MACFCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t VLANTI : 16; // bit 0 VLAN tag identifier (for receive frames)
    volatile uint32_t VLANTC : 1; // bit 16 12-bit VLAN tag comparison
    volatile uint32_t RESERVED0 : 1; // bit 17
    volatile uint32_t RESERVED1 : 1; // bit 18
    volatile uint32_t RESERVED2 : 1; // bit 19
    volatile uint32_t RESERVED3 : 1; // bit 20
    volatile uint32_t RESERVED4 : 1; // bit 21
    volatile uint32_t RESERVED5 : 1; // bit 22
    volatile uint32_t RESERVED6 : 1; // bit 23
    volatile uint32_t RESERVED7 : 1; // bit 24
    volatile uint32_t RESERVED8 : 1; // bit 25
    volatile uint32_t RESERVED9 : 1; // bit 26
    volatile uint32_t RESERVED10 : 1; // bit 27
    volatile uint32_t RESERVED11 : 1; // bit 28
    volatile uint32_t RESERVED12 : 1; // bit 29
    volatile uint32_t RESERVED13 : 1; // bit 30
    volatile uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} ETHERNET_MAC_MACVLANTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PD : 1; // bit 0 Power down
    volatile uint32_t MPE : 1; // bit 1 Magic Packet enable
    volatile uint32_t WFE : 1; // bit 2 Wakeup frame enable
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t MPR : 1; // bit 5 Magic packet received
    volatile uint32_t WFR : 1; // bit 6 Wakeup frame received
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t RESERVED3 : 1; // bit 8
    volatile uint32_t GU : 1; // bit 9 Global unicast
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t RESERVED9 : 1; // bit 15
    volatile uint32_t RESERVED10 : 1; // bit 16
    volatile uint32_t RESERVED11 : 1; // bit 17
    volatile uint32_t RESERVED12 : 1; // bit 18
    volatile uint32_t RESERVED13 : 1; // bit 19
    volatile uint32_t RESERVED14 : 1; // bit 20
    volatile uint32_t RESERVED15 : 1; // bit 21
    volatile uint32_t RESERVED16 : 1; // bit 22
    volatile uint32_t RESERVED17 : 1; // bit 23
    volatile uint32_t RESERVED18 : 1; // bit 24
    volatile uint32_t RESERVED19 : 1; // bit 25
    volatile uint32_t RESERVED20 : 1; // bit 26
    volatile uint32_t RESERVED21 : 1; // bit 27
    volatile uint32_t RESERVED22 : 1; // bit 28
    volatile uint32_t RESERVED23 : 1; // bit 29
    volatile uint32_t RESERVED24 : 1; // bit 30
    volatile uint32_t WFFRPR : 1; // bit 31 Wakeup frame filter register pointer reset
  } BITS;
} ETHERNET_MAC_MACPMTCSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t PMTS : 1; // bit 3 PMT status
    volatile uint32_t MMCS : 1; // bit 4 MMC status
    volatile uint32_t MMCRS : 1; // bit 5 MMC receive status
    volatile uint32_t MMCTS : 1; // bit 6 MMC transmit status
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t RESERVED4 : 1; // bit 8
    volatile uint32_t TSTS : 1; // bit 9 Time stamp trigger status
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t RESERVED6 : 1; // bit 11
    volatile uint32_t RESERVED7 : 1; // bit 12
    volatile uint32_t RESERVED8 : 1; // bit 13
    volatile uint32_t RESERVED9 : 1; // bit 14
    volatile uint32_t RESERVED10 : 1; // bit 15
    volatile uint32_t RESERVED11 : 1; // bit 16
    volatile uint32_t RESERVED12 : 1; // bit 17
    volatile uint32_t RESERVED13 : 1; // bit 18
    volatile uint32_t RESERVED14 : 1; // bit 19
    volatile uint32_t RESERVED15 : 1; // bit 20
    volatile uint32_t RESERVED16 : 1; // bit 21
    volatile uint32_t RESERVED17 : 1; // bit 22
    volatile uint32_t RESERVED18 : 1; // bit 23
    volatile uint32_t RESERVED19 : 1; // bit 24
    volatile uint32_t RESERVED20 : 1; // bit 25
    volatile uint32_t RESERVED21 : 1; // bit 26
    volatile uint32_t RESERVED22 : 1; // bit 27
    volatile uint32_t RESERVED23 : 1; // bit 28
    volatile uint32_t RESERVED24 : 1; // bit 29
    volatile uint32_t RESERVED25 : 1; // bit 30
    volatile uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} ETHERNET_MAC_MACSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t PMTIM : 1; // bit 3 PMT interrupt mask
    volatile uint32_t RESERVED3 : 1; // bit 4
    volatile uint32_t RESERVED4 : 1; // bit 5
    volatile uint32_t RESERVED5 : 1; // bit 6
    volatile uint32_t RESERVED6 : 1; // bit 7
    volatile uint32_t RESERVED7 : 1; // bit 8
    volatile uint32_t TSTIM : 1; // bit 9 Time stamp trigger interrupt mask
    volatile uint32_t RESERVED8 : 1; // bit 10
    volatile uint32_t RESERVED9 : 1; // bit 11
    volatile uint32_t RESERVED10 : 1; // bit 12
    volatile uint32_t RESERVED11 : 1; // bit 13
    volatile uint32_t RESERVED12 : 1; // bit 14
    volatile uint32_t RESERVED13 : 1; // bit 15
    volatile uint32_t RESERVED14 : 1; // bit 16
    volatile uint32_t RESERVED15 : 1; // bit 17
    volatile uint32_t RESERVED16 : 1; // bit 18
    volatile uint32_t RESERVED17 : 1; // bit 19
    volatile uint32_t RESERVED18 : 1; // bit 20
    volatile uint32_t RESERVED19 : 1; // bit 21
    volatile uint32_t RESERVED20 : 1; // bit 22
    volatile uint32_t RESERVED21 : 1; // bit 23
    volatile uint32_t RESERVED22 : 1; // bit 24
    volatile uint32_t RESERVED23 : 1; // bit 25
    volatile uint32_t RESERVED24 : 1; // bit 26
    volatile uint32_t RESERVED25 : 1; // bit 27
    volatile uint32_t RESERVED26 : 1; // bit 28
    volatile uint32_t RESERVED27 : 1; // bit 29
    volatile uint32_t RESERVED28 : 1; // bit 30
    volatile uint32_t RESERVED29 : 1; // bit 31
  } BITS;
} ETHERNET_MAC_MACIMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MACA0H : 16; // bit 0 MAC address0 high
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t MO : 1; // bit 31 Always 1
  } BITS;
} ETHERNET_MAC_MACA0HR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MACA0L : 32; // bit 0 MAC address0 low
  } BITS;
} ETHERNET_MAC_MACA0LR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MACA1H : 16; // bit 0 MAC address1 high
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t MBC : 6; // bit 24 Mask byte control
    volatile uint32_t SA : 1; // bit 30 Source address
    volatile uint32_t AE : 1; // bit 31 Address enable
  } BITS;
} ETHERNET_MAC_MACA1HR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MACA1L : 32; // bit 0 MAC address1 low
  } BITS;
} ETHERNET_MAC_MACA1LR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ETH_MACA2HR : 16; // bit 0 Ethernet MAC address 2 high register
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t MBC : 6; // bit 24 Mask byte control
    volatile uint32_t SA : 1; // bit 30 Source address
    volatile uint32_t AE : 1; // bit 31 Address enable
  } BITS;
} ETHERNET_MAC_MACA2HR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MACA2L : 31; // bit 0 MAC address2 low
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} ETHERNET_MAC_MACA2LR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MACA3H : 16; // bit 0 MAC address3 high
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t MBC : 6; // bit 24 Mask byte control
    volatile uint32_t SA : 1; // bit 30 Source address
    volatile uint32_t AE : 1; // bit 31 Address enable
  } BITS;
} ETHERNET_MAC_MACA3HR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MBCA3L : 32; // bit 0 MAC address3 low
  } BITS;
} ETHERNET_MAC_MACA3LR_t;

typedef struct {
  ETHERNET_MAC_MACCR_t MACCR;
  ETHERNET_MAC_MACFFR_t MACFFR;
  ETHERNET_MAC_MACHTHR_t MACHTHR;
  ETHERNET_MAC_MACHTLR_t MACHTLR;
  ETHERNET_MAC_MACMIIAR_t MACMIIAR;
  ETHERNET_MAC_MACMIIDR_t MACMIIDR;
  ETHERNET_MAC_MACFCR_t MACFCR;
  ETHERNET_MAC_MACVLANTR_t MACVLANTR;
  ETHERNET_MAC_MACPMTCSR_t MACPMTCSR;
  ETHERNET_MAC_MACSR_t MACSR;
  ETHERNET_MAC_MACIMR_t MACIMR;
  ETHERNET_MAC_MACA0HR_t MACA0HR;
  ETHERNET_MAC_MACA0LR_t MACA0LR;
  ETHERNET_MAC_MACA1HR_t MACA1HR;
  ETHERNET_MAC_MACA1LR_t MACA1LR;
  ETHERNET_MAC_MACA2HR_t MACA2HR;
  ETHERNET_MAC_MACA2LR_t MACA2LR;
  ETHERNET_MAC_MACA3HR_t MACA3HR;
  ETHERNET_MAC_MACA3LR_t MACA3LR;
} ETHERNET_MAC_t;

#define ETHERNET_MAC_BASE (0x40028000UL)
#define ETHERNET_MAC ((ETHERNET_MAC_t *)ETHERNET_MAC_BASE)

#define ETHERNET_MAC_MACCRbits (ETHERNET_MAC->MACCR.BITS)
#define ETHERNET_MAC_MACFFRbits (ETHERNET_MAC->MACFFR.BITS)
#define ETHERNET_MAC_MACHTHRbits (ETHERNET_MAC->MACHTHR.BITS)
#define ETHERNET_MAC_MACHTLRbits (ETHERNET_MAC->MACHTLR.BITS)
#define ETHERNET_MAC_MACMIIARbits (ETHERNET_MAC->MACMIIAR.BITS)
#define ETHERNET_MAC_MACMIIDRbits (ETHERNET_MAC->MACMIIDR.BITS)
#define ETHERNET_MAC_MACFCRbits (ETHERNET_MAC->MACFCR.BITS)
#define ETHERNET_MAC_MACVLANTRbits (ETHERNET_MAC->MACVLANTR.BITS)
#define ETHERNET_MAC_MACRWUFFRbits (ETHERNET_MAC->MACRWUFFR.BITS)
#define ETHERNET_MAC_MACPMTCSRbits (ETHERNET_MAC->MACPMTCSR.BITS)
#define ETHERNET_MAC_MACSRbits (ETHERNET_MAC->MACSR.BITS)
#define ETHERNET_MAC_MACIMRbits (ETHERNET_MAC->MACIMR.BITS)
#define ETHERNET_MAC_MACA0HRbits (ETHERNET_MAC->MACA0HR.BITS)
#define ETHERNET_MAC_MACA0LRbits (ETHERNET_MAC->MACA0LR.BITS)
#define ETHERNET_MAC_MACA1HRbits (ETHERNET_MAC->MACA1HR.BITS)
#define ETHERNET_MAC_MACA1LRbits (ETHERNET_MAC->MACA1LR.BITS)
#define ETHERNET_MAC_MACA2HRbits (ETHERNET_MAC->MACA2HR.BITS)
#define ETHERNET_MAC_MACA2LRbits (ETHERNET_MAC->MACA2LR.BITS)
#define ETHERNET_MAC_MACA3HRbits (ETHERNET_MAC->MACA3HR.BITS)
#define ETHERNET_MAC_MACA3LRbits (ETHERNET_MAC->MACA3LR.BITS)

#endif // _ETHERNET_MAC_H