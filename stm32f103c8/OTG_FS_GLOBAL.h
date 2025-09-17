/**
 * @file    OTG_FS_GLOBAL.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   USB on the go full speed
 *
 * This header file provides register definitions and bitfield access
 * for the OTG_FS_GLOBAL peripheral of the STM32F103.
 */

#ifndef _OTG_FS_GLOBAL_H
#define _OTG_FS_GLOBAL_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SRQSCS : 1; // bit 0 Session request success
    uint32_t SRQ : 1; // bit 1 Session request
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t RESERVED1 : 1; // bit 3
    uint32_t RESERVED2 : 1; // bit 4
    uint32_t RESERVED3 : 1; // bit 5
    uint32_t RESERVED4 : 1; // bit 6
    uint32_t RESERVED5 : 1; // bit 7
    uint32_t HNGSCS : 1; // bit 8 Host negotiation success
    uint32_t HNPRQ : 1; // bit 9 HNP request
    uint32_t HSHNPEN : 1; // bit 10 Host set HNP enable
    uint32_t DHNPEN : 1; // bit 11 Device HNP enabled
    uint32_t RESERVED6 : 1; // bit 12
    uint32_t RESERVED7 : 1; // bit 13
    uint32_t RESERVED8 : 1; // bit 14
    uint32_t RESERVED9 : 1; // bit 15
    uint32_t CIDSTS : 1; // bit 16 Connector ID status
    uint32_t DBCT : 1; // bit 17 Long/short debounce time
    uint32_t ASVLD : 1; // bit 18 A-session valid
    uint32_t BSVLD : 1; // bit 19 B-session valid
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
} OTG_FS_GLOBAL_FS_GOTGCTL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t SEDET : 1; // bit 2 Session end detected
    uint32_t RESERVED2 : 1; // bit 3
    uint32_t RESERVED3 : 1; // bit 4
    uint32_t RESERVED4 : 1; // bit 5
    uint32_t RESERVED5 : 1; // bit 6
    uint32_t RESERVED6 : 1; // bit 7
    uint32_t SRSSCHG : 1; // bit 8 Session request success status change
    uint32_t HNSSCHG : 1; // bit 9 Host negotiation success status change
    uint32_t RESERVED7 : 1; // bit 10
    uint32_t RESERVED8 : 1; // bit 11
    uint32_t RESERVED9 : 1; // bit 12
    uint32_t RESERVED10 : 1; // bit 13
    uint32_t RESERVED11 : 1; // bit 14
    uint32_t RESERVED12 : 1; // bit 15
    uint32_t RESERVED13 : 1; // bit 16
    uint32_t HNGDET : 1; // bit 17 Host negotiation detected
    uint32_t ADTOCHG : 1; // bit 18 A-device timeout change
    uint32_t DBCDNE : 1; // bit 19 Debounce done
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
} OTG_FS_GLOBAL_FS_GOTGINT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t GINT : 1; // bit 0 Global interrupt mask
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t RESERVED1 : 1; // bit 2
    uint32_t RESERVED2 : 1; // bit 3
    uint32_t RESERVED3 : 1; // bit 4
    uint32_t RESERVED4 : 1; // bit 5
    uint32_t RESERVED5 : 1; // bit 6
    uint32_t TXFELVL : 1; // bit 7 TxFIFO empty level
    uint32_t PTXFELVL : 1; // bit 8 Periodic TxFIFO empty level
    uint32_t RESERVED6 : 1; // bit 9
    uint32_t RESERVED7 : 1; // bit 10
    uint32_t RESERVED8 : 1; // bit 11
    uint32_t RESERVED9 : 1; // bit 12
    uint32_t RESERVED10 : 1; // bit 13
    uint32_t RESERVED11 : 1; // bit 14
    uint32_t RESERVED12 : 1; // bit 15
    uint32_t RESERVED13 : 1; // bit 16
    uint32_t RESERVED14 : 1; // bit 17
    uint32_t RESERVED15 : 1; // bit 18
    uint32_t RESERVED16 : 1; // bit 19
    uint32_t RESERVED17 : 1; // bit 20
    uint32_t RESERVED18 : 1; // bit 21
    uint32_t RESERVED19 : 1; // bit 22
    uint32_t RESERVED20 : 1; // bit 23
    uint32_t RESERVED21 : 1; // bit 24
    uint32_t RESERVED22 : 1; // bit 25
    uint32_t RESERVED23 : 1; // bit 26
    uint32_t RESERVED24 : 1; // bit 27
    uint32_t RESERVED25 : 1; // bit 28
    uint32_t RESERVED26 : 1; // bit 29
    uint32_t RESERVED27 : 1; // bit 30
    uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} OTG_FS_GLOBAL_FS_GAHBCFG_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TOCAL : 3; // bit 0 FS timeout calibration
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t PHYSEL : 1; // bit 6 Full Speed serial transceiver select
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t SRPCAP : 1; // bit 8 SRP-capable
    uint32_t HNPCAP : 1; // bit 9 HNP-capable
    uint32_t TRDT : 4; // bit 10 USB turnaround time
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
    uint32_t FHMOD : 1; // bit 29 Force host mode
    uint32_t FDMOD : 1; // bit 30 Force device mode
    uint32_t CTXPKT : 1; // bit 31 Corrupt Tx packet
  } BITS;
} OTG_FS_GLOBAL_FS_GUSBCFG_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CSRST : 1; // bit 0 Core soft reset
    uint32_t HSRST : 1; // bit 1 HCLK soft reset
    uint32_t FCRST : 1; // bit 2 Host frame counter reset
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RXFFLSH : 1; // bit 4 RxFIFO flush
    uint32_t TXFFLSH : 1; // bit 5 TxFIFO flush
    uint32_t TXFNUM : 5; // bit 6 TxFIFO number
    uint32_t RESERVED1 : 1; // bit 11
    uint32_t RESERVED2 : 1; // bit 12
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
    uint32_t AHBIDL : 1; // bit 31 AHB master idle
  } BITS;
} OTG_FS_GLOBAL_FS_GRSTCTL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CMOD : 1; // bit 0 Current mode of operation
    uint32_t MMIS : 1; // bit 1 Mode mismatch interrupt
    uint32_t OTGINT : 1; // bit 2 OTG interrupt
    uint32_t SOF : 1; // bit 3 Start of frame
    uint32_t RXFLVL : 1; // bit 4 RxFIFO non-empty
    uint32_t NPTXFE : 1; // bit 5 Non-periodic TxFIFO empty
    uint32_t GINAKEFF : 1; // bit 6 Global IN non-periodic NAK effective
    uint32_t GOUTNAKEFF : 1; // bit 7 Global OUT NAK effective
    uint32_t RESERVED0 : 1; // bit 8
    uint32_t RESERVED1 : 1; // bit 9
    uint32_t ESUSP : 1; // bit 10 Early suspend
    uint32_t USBSUSP : 1; // bit 11 USB suspend
    uint32_t USBRST : 1; // bit 12 USB reset
    uint32_t ENUMDNE : 1; // bit 13 Enumeration done
    uint32_t ISOODRP : 1; // bit 14 Isochronous OUT packet dropped interrupt
    uint32_t EOPF : 1; // bit 15 End of periodic frame interrupt
    uint32_t RESERVED2 : 1; // bit 16
    uint32_t RESERVED3 : 1; // bit 17
    uint32_t IEPINT : 1; // bit 18 IN endpoint interrupt
    uint32_t OEPINT : 1; // bit 19 OUT endpoint interrupt
    uint32_t IISOIXFR : 1; // bit 20 Incomplete isochronous IN transfer
    uint32_t IPXFR_INCOMPISOOUT : 1; // bit 21 Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    uint32_t RESERVED4 : 1; // bit 22
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t HPRTINT : 1; // bit 24 Host port interrupt
    uint32_t HCINT : 1; // bit 25 Host channels interrupt
    uint32_t PTXFE : 1; // bit 26 Periodic TxFIFO empty
    uint32_t RESERVED6 : 1; // bit 27
    uint32_t CIDSCHG : 1; // bit 28 Connector ID status change
    uint32_t DISCINT : 1; // bit 29 Disconnect detected interrupt
    uint32_t SRQINT : 1; // bit 30 Session request/new session detected interrupt
    uint32_t WKUPINT : 1; // bit 31 Resume/remote wakeup detected interrupt
  } BITS;
} OTG_FS_GLOBAL_FS_GINTSTS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t MMISM : 1; // bit 1 Mode mismatch interrupt mask
    uint32_t OTGINT : 1; // bit 2 OTG interrupt mask
    uint32_t SOFM : 1; // bit 3 Start of frame mask
    uint32_t RXFLVLM : 1; // bit 4 Receive FIFO non-empty mask
    uint32_t NPTXFEM : 1; // bit 5 Non-periodic TxFIFO empty mask
    uint32_t GINAKEFFM : 1; // bit 6 Global non-periodic IN NAK effective mask
    uint32_t GONAKEFFM : 1; // bit 7 Global OUT NAK effective mask
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t RESERVED2 : 1; // bit 9
    uint32_t ESUSPM : 1; // bit 10 Early suspend mask
    uint32_t USBSUSPM : 1; // bit 11 USB suspend mask
    uint32_t USBRST : 1; // bit 12 USB reset mask
    uint32_t ENUMDNEM : 1; // bit 13 Enumeration done mask
    uint32_t ISOODRPM : 1; // bit 14 Isochronous OUT packet dropped interrupt mask
    uint32_t EOPFM : 1; // bit 15 End of periodic frame interrupt mask
    uint32_t RESERVED3 : 1; // bit 16
    uint32_t EPMISM : 1; // bit 17 Endpoint mismatch interrupt mask
    uint32_t IEPINT : 1; // bit 18 IN endpoints interrupt mask
    uint32_t OEPINT : 1; // bit 19 OUT endpoints interrupt mask
    uint32_t IISOIXFRM : 1; // bit 20 Incomplete isochronous IN transfer mask
    uint32_t IPXFRM_IISOOXFRM : 1; // bit 21 Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    uint32_t RESERVED4 : 1; // bit 22
    uint32_t RESERVED5 : 1; // bit 23
    uint32_t PRTIM : 1; // bit 24 Host port interrupt mask
    uint32_t HCIM : 1; // bit 25 Host channels interrupt mask
    uint32_t PTXFEM : 1; // bit 26 Periodic TxFIFO empty mask
    uint32_t RESERVED6 : 1; // bit 27
    uint32_t CIDSCHGM : 1; // bit 28 Connector ID status change mask
    uint32_t DISCINT : 1; // bit 29 Disconnect detected interrupt mask
    uint32_t SRQIM : 1; // bit 30 Session request/new session detected interrupt mask
    uint32_t WUIM : 1; // bit 31 Resume/remote wakeup detected interrupt mask
  } BITS;
} OTG_FS_GLOBAL_FS_GINTMSK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EPNUM : 4; // bit 0 Endpoint number
    uint32_t BCNT : 11; // bit 4 Byte count
    uint32_t DPID : 2; // bit 15 Data PID
    uint32_t PKTSTS : 4; // bit 17 Packet status
    uint32_t FRMNUM : 4; // bit 21 Frame number
    uint32_t RESERVED0 : 1; // bit 25
    uint32_t RESERVED1 : 1; // bit 26
    uint32_t RESERVED2 : 1; // bit 27
    uint32_t RESERVED3 : 1; // bit 28
    uint32_t RESERVED4 : 1; // bit 29
    uint32_t RESERVED5 : 1; // bit 30
    uint32_t RESERVED6 : 1; // bit 31
  } BITS;
} OTG_FS_GLOBAL_FS_GRXSTSR_Device_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EPNUM : 4; // bit 0 Endpoint number
    uint32_t BCNT : 11; // bit 4 Byte count
    uint32_t DPID : 2; // bit 15 Data PID
    uint32_t PKTSTS : 4; // bit 17 Packet status
    uint32_t FRMNUM : 4; // bit 21 Frame number
    uint32_t RESERVED0 : 1; // bit 25
    uint32_t RESERVED1 : 1; // bit 26
    uint32_t RESERVED2 : 1; // bit 27
    uint32_t RESERVED3 : 1; // bit 28
    uint32_t RESERVED4 : 1; // bit 29
    uint32_t RESERVED5 : 1; // bit 30
    uint32_t RESERVED6 : 1; // bit 31
  } BITS;
} OTG_FS_GLOBAL_FS_GRXSTSR_Host_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RXFD : 16; // bit 0 RxFIFO depth
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
} OTG_FS_GLOBAL_FS_GRXFSIZ_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TX0FSA : 16; // bit 0 Endpoint 0 transmit RAM start address
    uint32_t TX0FD : 16; // bit 16 Endpoint 0 TxFIFO depth
  } BITS;
} OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NPTXFSA : 16; // bit 0 Non-periodic transmit RAM start address
    uint32_t NPTXFD : 16; // bit 16 Non-periodic TxFIFO depth
  } BITS;
} OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NPTXFSAV : 16; // bit 0 Non-periodic TxFIFO space available
    uint32_t NPTQXSAV : 8; // bit 16 Non-periodic transmit request queue space available
    uint32_t NPTXQTOP : 7; // bit 24 Top of the non-periodic transmit request queue
    uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_GLOBAL_FS_GNPTXSTS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t RESERVED4 : 1; // bit 4
    uint32_t RESERVED5 : 1; // bit 5
    uint32_t RESERVED6 : 1; // bit 6
    uint32_t RESERVED7 : 1; // bit 7
    uint32_t RESERVED8 : 1; // bit 8
    uint32_t RESERVED9 : 1; // bit 9
    uint32_t RESERVED10 : 1; // bit 10
    uint32_t RESERVED11 : 1; // bit 11
    uint32_t RESERVED12 : 1; // bit 12
    uint32_t RESERVED13 : 1; // bit 13
    uint32_t RESERVED14 : 1; // bit 14
    uint32_t RESERVED15 : 1; // bit 15
    uint32_t PWRDWN : 1; // bit 16 Power down
    uint32_t RESERVED16 : 1; // bit 17
    uint32_t VBUSASEN : 1; // bit 18 Enable the VBUS sensing device
    uint32_t VBUSBSEN : 1; // bit 19 Enable the VBUS sensing device
    uint32_t SOFOUTEN : 1; // bit 20 SOF output enable
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
} OTG_FS_GLOBAL_FS_GCCFG_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PRODUCT_ID : 32; // bit 0 Product ID field
  } BITS;
} OTG_FS_GLOBAL_FS_CID_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PTXSA : 16; // bit 0 Host periodic TxFIFO start address
    uint32_t PTXFSIZ : 16; // bit 16 Host periodic TxFIFO depth
  } BITS;
} OTG_FS_GLOBAL_FS_HPTXFSIZ_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTXSA : 16; // bit 0 IN endpoint FIFO2 transmit RAM start address
    uint32_t INEPTXFD : 16; // bit 16 IN endpoint TxFIFO depth
  } BITS;
} OTG_FS_GLOBAL_FS_DIEPTXF1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTXSA : 16; // bit 0 IN endpoint FIFO3 transmit RAM start address
    uint32_t INEPTXFD : 16; // bit 16 IN endpoint TxFIFO depth
  } BITS;
} OTG_FS_GLOBAL_FS_DIEPTXF2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t INEPTXSA : 16; // bit 0 IN endpoint FIFO4 transmit RAM start address
    uint32_t INEPTXFD : 16; // bit 16 IN endpoint TxFIFO depth
  } BITS;
} OTG_FS_GLOBAL_FS_DIEPTXF3_t;

typedef struct {
  OTG_FS_GLOBAL_FS_GOTGCTL_t FS_GOTGCTL;
  OTG_FS_GLOBAL_FS_GOTGINT_t FS_GOTGINT;
  OTG_FS_GLOBAL_FS_GAHBCFG_t FS_GAHBCFG;
  OTG_FS_GLOBAL_FS_GUSBCFG_t FS_GUSBCFG;
  OTG_FS_GLOBAL_FS_GRSTCTL_t FS_GRSTCTL;
  OTG_FS_GLOBAL_FS_GINTSTS_t FS_GINTSTS;
  OTG_FS_GLOBAL_FS_GINTMSK_t FS_GINTMSK;
  OTG_FS_GLOBAL_FS_GRXSTSR_Device_t FS_GRXSTSR_Device;
  OTG_FS_GLOBAL_FS_GRXSTSR_Host_t FS_GRXSTSR_Host;
  OTG_FS_GLOBAL_FS_GRXFSIZ_t FS_GRXFSIZ;
  OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_t FS_GNPTXFSIZ_Device;
  OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_t FS_GNPTXFSIZ_Host;
  OTG_FS_GLOBAL_FS_GNPTXSTS_t FS_GNPTXSTS;
  OTG_FS_GLOBAL_FS_GCCFG_t FS_GCCFG;
  OTG_FS_GLOBAL_FS_CID_t FS_CID;
  OTG_FS_GLOBAL_FS_HPTXFSIZ_t FS_HPTXFSIZ;
  OTG_FS_GLOBAL_FS_DIEPTXF1_t FS_DIEPTXF1;
  OTG_FS_GLOBAL_FS_DIEPTXF2_t FS_DIEPTXF2;
  OTG_FS_GLOBAL_FS_DIEPTXF3_t FS_DIEPTXF3;
} OTG_FS_GLOBAL_t;

#define OTG_FS_GLOBAL_BASE (0x50000000UL)
#define OTG_FS_GLOBAL ((OTG_FS_GLOBAL_t *)OTG_FS_GLOBAL_BASE)

#define OTG_FS_GLOBAL_FS_GOTGCTLbits (OTG_FS_GLOBAL->FS_GOTGCTL.BITS)
#define OTG_FS_GLOBAL_FS_GOTGINTbits (OTG_FS_GLOBAL->FS_GOTGINT.BITS)
#define OTG_FS_GLOBAL_FS_GAHBCFGbits (OTG_FS_GLOBAL->FS_GAHBCFG.BITS)
#define OTG_FS_GLOBAL_FS_GUSBCFGbits (OTG_FS_GLOBAL->FS_GUSBCFG.BITS)
#define OTG_FS_GLOBAL_FS_GRSTCTLbits (OTG_FS_GLOBAL->FS_GRSTCTL.BITS)
#define OTG_FS_GLOBAL_FS_GINTSTSbits (OTG_FS_GLOBAL->FS_GINTSTS.BITS)
#define OTG_FS_GLOBAL_FS_GINTMSKbits (OTG_FS_GLOBAL->FS_GINTMSK.BITS)
#define OTG_FS_GLOBAL_FS_GRXSTSR_Devicebits (OTG_FS_GLOBAL->FS_GRXSTSR_Device.BITS)
#define OTG_FS_GLOBAL_FS_GRXSTSR_Hostbits (OTG_FS_GLOBAL->FS_GRXSTSR_Host.BITS)
#define OTG_FS_GLOBAL_FS_GRXFSIZbits (OTG_FS_GLOBAL->FS_GRXFSIZ.BITS)
#define OTG_FS_GLOBAL_FS_GNPTXFSIZ_Devicebits (OTG_FS_GLOBAL->FS_GNPTXFSIZ_Device.BITS)
#define OTG_FS_GLOBAL_FS_GNPTXFSIZ_Hostbits (OTG_FS_GLOBAL->FS_GNPTXFSIZ_Host.BITS)
#define OTG_FS_GLOBAL_FS_GNPTXSTSbits (OTG_FS_GLOBAL->FS_GNPTXSTS.BITS)
#define OTG_FS_GLOBAL_FS_GCCFGbits (OTG_FS_GLOBAL->FS_GCCFG.BITS)
#define OTG_FS_GLOBAL_FS_CIDbits (OTG_FS_GLOBAL->FS_CID.BITS)
#define OTG_FS_GLOBAL_FS_HPTXFSIZbits (OTG_FS_GLOBAL->FS_HPTXFSIZ.BITS)
#define OTG_FS_GLOBAL_FS_DIEPTXF1bits (OTG_FS_GLOBAL->FS_DIEPTXF1.BITS)
#define OTG_FS_GLOBAL_FS_DIEPTXF2bits (OTG_FS_GLOBAL->FS_DIEPTXF2.BITS)
#define OTG_FS_GLOBAL_FS_DIEPTXF3bits (OTG_FS_GLOBAL->FS_DIEPTXF3.BITS)

#endif // _OTG_FS_GLOBAL_H