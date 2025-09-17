/**
 * @file    USB.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Universal serial bus full-speed device
      interface
 *
 * This header file provides register definitions and bitfield access
 * for the USB peripheral of the STM32F103.
 */

#ifndef _USB_H
#define _USB_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP2R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP3R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP4R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP5R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP6R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EA : 4; // bit 0 Endpoint address
    volatile uint32_t STAT_TX : 2; // bit 4 Status bits, for transmission transfers
    volatile uint32_t DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
    volatile uint32_t CTR_TX : 1; // bit 7 Correct Transfer for transmission
    volatile uint32_t EP_KIND : 1; // bit 8 Endpoint kind
    volatile uint32_t EP_TYPE : 2; // bit 9 Endpoint type
    volatile uint32_t SETUP : 1; // bit 11 Setup transaction completed
    volatile uint32_t STAT_RX : 2; // bit 12 Status bits, for reception transfers
    volatile uint32_t DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
    volatile uint32_t CTR_RX : 1; // bit 15 Correct transfer for reception
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
} USB_EP7R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FRES : 1; // bit 0 Force USB Reset
    volatile uint32_t PDWN : 1; // bit 1 Power down
    volatile uint32_t LPMODE : 1; // bit 2 Low-power mode
    volatile uint32_t FSUSP : 1; // bit 3 Force suspend
    volatile uint32_t RESUME : 1; // bit 4 Resume request
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t ESOFM : 1; // bit 8 Expected start of frame interrupt mask
    volatile uint32_t SOFM : 1; // bit 9 Start of frame interrupt mask
    volatile uint32_t RESETM : 1; // bit 10 USB reset interrupt mask
    volatile uint32_t SUSPM : 1; // bit 11 Suspend mode interrupt mask
    volatile uint32_t WKUPM : 1; // bit 12 Wakeup interrupt mask
    volatile uint32_t ERRM : 1; // bit 13 Error interrupt mask
    volatile uint32_t PMAOVRM : 1; // bit 14 Packet memory area over / underrun interrupt mask
    volatile uint32_t CTRM : 1; // bit 15 Correct transfer interrupt mask
    volatile uint32_t RESERVED3 : 1; // bit 16
    volatile uint32_t RESERVED4 : 1; // bit 17
    volatile uint32_t RESERVED5 : 1; // bit 18
    volatile uint32_t RESERVED6 : 1; // bit 19
    volatile uint32_t RESERVED7 : 1; // bit 20
    volatile uint32_t RESERVED8 : 1; // bit 21
    volatile uint32_t RESERVED9 : 1; // bit 22
    volatile uint32_t RESERVED10 : 1; // bit 23
    volatile uint32_t RESERVED11 : 1; // bit 24
    volatile uint32_t RESERVED12 : 1; // bit 25
    volatile uint32_t RESERVED13 : 1; // bit 26
    volatile uint32_t RESERVED14 : 1; // bit 27
    volatile uint32_t RESERVED15 : 1; // bit 28
    volatile uint32_t RESERVED16 : 1; // bit 29
    volatile uint32_t RESERVED17 : 1; // bit 30
    volatile uint32_t RESERVED18 : 1; // bit 31
  } BITS;
} USB_CNTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EP_ID : 4; // bit 0 Endpoint Identifier
    volatile uint32_t DIR : 1; // bit 4 Direction of transaction
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t ESOF : 1; // bit 8 Expected start frame
    volatile uint32_t SOF : 1; // bit 9 start of frame
    volatile uint32_t RESET : 1; // bit 10 reset request
    volatile uint32_t SUSP : 1; // bit 11 Suspend mode request
    volatile uint32_t WKUP : 1; // bit 12 Wakeup
    volatile uint32_t ERR : 1; // bit 13 Error
    volatile uint32_t PMAOVR : 1; // bit 14 Packet memory area over / underrun
    volatile uint32_t CTR : 1; // bit 15 Correct transfer
    volatile uint32_t RESERVED3 : 1; // bit 16
    volatile uint32_t RESERVED4 : 1; // bit 17
    volatile uint32_t RESERVED5 : 1; // bit 18
    volatile uint32_t RESERVED6 : 1; // bit 19
    volatile uint32_t RESERVED7 : 1; // bit 20
    volatile uint32_t RESERVED8 : 1; // bit 21
    volatile uint32_t RESERVED9 : 1; // bit 22
    volatile uint32_t RESERVED10 : 1; // bit 23
    volatile uint32_t RESERVED11 : 1; // bit 24
    volatile uint32_t RESERVED12 : 1; // bit 25
    volatile uint32_t RESERVED13 : 1; // bit 26
    volatile uint32_t RESERVED14 : 1; // bit 27
    volatile uint32_t RESERVED15 : 1; // bit 28
    volatile uint32_t RESERVED16 : 1; // bit 29
    volatile uint32_t RESERVED17 : 1; // bit 30
    volatile uint32_t RESERVED18 : 1; // bit 31
  } BITS;
} USB_ISTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FN : 11; // bit 0 Frame number
    volatile uint32_t LSOF : 2; // bit 11 Lost SOF
    volatile uint32_t LCK : 1; // bit 13 Locked
    volatile uint32_t RXDM : 1; // bit 14 Receive data - line status
    volatile uint32_t RXDP : 1; // bit 15 Receive data + line status
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
} USB_FNR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ADD : 7; // bit 0 Device address
    volatile uint32_t EF : 1; // bit 7 Enable function
    volatile uint32_t RESERVED0 : 1; // bit 8
    volatile uint32_t RESERVED1 : 1; // bit 9
    volatile uint32_t RESERVED2 : 1; // bit 10
    volatile uint32_t RESERVED3 : 1; // bit 11
    volatile uint32_t RESERVED4 : 1; // bit 12
    volatile uint32_t RESERVED5 : 1; // bit 13
    volatile uint32_t RESERVED6 : 1; // bit 14
    volatile uint32_t RESERVED7 : 1; // bit 15
    volatile uint32_t RESERVED8 : 1; // bit 16
    volatile uint32_t RESERVED9 : 1; // bit 17
    volatile uint32_t RESERVED10 : 1; // bit 18
    volatile uint32_t RESERVED11 : 1; // bit 19
    volatile uint32_t RESERVED12 : 1; // bit 20
    volatile uint32_t RESERVED13 : 1; // bit 21
    volatile uint32_t RESERVED14 : 1; // bit 22
    volatile uint32_t RESERVED15 : 1; // bit 23
    volatile uint32_t RESERVED16 : 1; // bit 24
    volatile uint32_t RESERVED17 : 1; // bit 25
    volatile uint32_t RESERVED18 : 1; // bit 26
    volatile uint32_t RESERVED19 : 1; // bit 27
    volatile uint32_t RESERVED20 : 1; // bit 28
    volatile uint32_t RESERVED21 : 1; // bit 29
    volatile uint32_t RESERVED22 : 1; // bit 30
    volatile uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} USB_DADDR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t BTABLE : 13; // bit 3 Buffer table
    volatile uint32_t RESERVED3 : 1; // bit 16
    volatile uint32_t RESERVED4 : 1; // bit 17
    volatile uint32_t RESERVED5 : 1; // bit 18
    volatile uint32_t RESERVED6 : 1; // bit 19
    volatile uint32_t RESERVED7 : 1; // bit 20
    volatile uint32_t RESERVED8 : 1; // bit 21
    volatile uint32_t RESERVED9 : 1; // bit 22
    volatile uint32_t RESERVED10 : 1; // bit 23
    volatile uint32_t RESERVED11 : 1; // bit 24
    volatile uint32_t RESERVED12 : 1; // bit 25
    volatile uint32_t RESERVED13 : 1; // bit 26
    volatile uint32_t RESERVED14 : 1; // bit 27
    volatile uint32_t RESERVED15 : 1; // bit 28
    volatile uint32_t RESERVED16 : 1; // bit 29
    volatile uint32_t RESERVED17 : 1; // bit 30
    volatile uint32_t RESERVED18 : 1; // bit 31
  } BITS;
} USB_BTABLE_t;

typedef struct {
  USB_EP0R_t EP0R;
  USB_EP1R_t EP1R;
  USB_EP2R_t EP2R;
  USB_EP3R_t EP3R;
  USB_EP4R_t EP4R;
  USB_EP5R_t EP5R;
  USB_EP6R_t EP6R;
  USB_EP7R_t EP7R;
  USB_CNTR_t CNTR;
  USB_ISTR_t ISTR;
  USB_FNR_t FNR;
  USB_DADDR_t DADDR;
  USB_BTABLE_t BTABLE;
} USB_t;

#define USB_BASE (0x40005C00UL)
#define USB ((USB_t *)USB_BASE)

#define USB_EP0Rbits (USB->EP0R.BITS)
#define USB_EP1Rbits (USB->EP1R.BITS)
#define USB_EP2Rbits (USB->EP2R.BITS)
#define USB_EP3Rbits (USB->EP3R.BITS)
#define USB_EP4Rbits (USB->EP4R.BITS)
#define USB_EP5Rbits (USB->EP5R.BITS)
#define USB_EP6Rbits (USB->EP6R.BITS)
#define USB_EP7Rbits (USB->EP7R.BITS)
#define USB_CNTRbits (USB->CNTR.BITS)
#define USB_ISTRbits (USB->ISTR.BITS)
#define USB_FNRbits (USB->FNR.BITS)
#define USB_DADDRbits (USB->DADDR.BITS)
#define USB_BTABLEbits (USB->BTABLE.BITS)

#endif // _USB_H