/**
 * @file    TIM9.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   General purpose timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM9 peripheral of the STM32F103.
 */

#ifndef _TIM9_H
#define _TIM9_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CEN : 1; // bit 0 Counter enable
    uint32_t UDIS : 1; // bit 1 Update disable
    uint32_t URS : 1; // bit 2 Update request source
    uint32_t OPM : 1; // bit 3 One-pulse mode
    uint32_t RESERVED0 : 1; // bit 4
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    uint32_t CKD : 2; // bit 8 Clock division
    uint32_t RESERVED3 : 1; // bit 10
    uint32_t RESERVED4 : 1; // bit 11
    uint32_t RESERVED5 : 1; // bit 12
    uint32_t RESERVED6 : 1; // bit 13
    uint32_t RESERVED7 : 1; // bit 14
    uint32_t RESERVED8 : 1; // bit 15
    uint32_t RESERVED9 : 1; // bit 16
    uint32_t RESERVED10 : 1; // bit 17
    uint32_t RESERVED11 : 1; // bit 18
    uint32_t RESERVED12 : 1; // bit 19
    uint32_t RESERVED13 : 1; // bit 20
    uint32_t RESERVED14 : 1; // bit 21
    uint32_t RESERVED15 : 1; // bit 22
    uint32_t RESERVED16 : 1; // bit 23
    uint32_t RESERVED17 : 1; // bit 24
    uint32_t RESERVED18 : 1; // bit 25
    uint32_t RESERVED19 : 1; // bit 26
    uint32_t RESERVED20 : 1; // bit 27
    uint32_t RESERVED21 : 1; // bit 28
    uint32_t RESERVED22 : 1; // bit 29
    uint32_t RESERVED23 : 1; // bit 30
    uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} TIM9_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t RESERVED3 : 1; // bit 3
    uint32_t MMS : 3; // bit 4 Master mode selection
    uint32_t RESERVED4 : 1; // bit 7
    uint32_t RESERVED5 : 1; // bit 8
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
} TIM9_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SMS : 3; // bit 0 Slave mode selection
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t TS : 3; // bit 4 Trigger selection
    uint32_t MSM : 1; // bit 7 Master/Slave mode
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
    uint32_t RESERVED12 : 1; // bit 19
    uint32_t RESERVED13 : 1; // bit 20
    uint32_t RESERVED14 : 1; // bit 21
    uint32_t RESERVED15 : 1; // bit 22
    uint32_t RESERVED16 : 1; // bit 23
    uint32_t RESERVED17 : 1; // bit 24
    uint32_t RESERVED18 : 1; // bit 25
    uint32_t RESERVED19 : 1; // bit 26
    uint32_t RESERVED20 : 1; // bit 27
    uint32_t RESERVED21 : 1; // bit 28
    uint32_t RESERVED22 : 1; // bit 29
    uint32_t RESERVED23 : 1; // bit 30
    uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} TIM9_SMCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UIE : 1; // bit 0 Update interrupt enable
    uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    uint32_t CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t TIE : 1; // bit 6 Trigger interrupt enable
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
} TIM9_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UIF : 1; // bit 0 Update interrupt flag
    uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    uint32_t CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t TIF : 1; // bit 6 Trigger interrupt flag
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t RESERVED4 : 1; // bit 8
    uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
    uint32_t CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
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
} TIM9_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UG : 1; // bit 0 Update generation
    uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    uint32_t CC2G : 1; // bit 2 Capture/compare 2 generation
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t TG : 1; // bit 6 Trigger generation
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
} TIM9_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    uint32_t OC1FE : 1; // bit 2 Output Compare 1 fast enable
    uint32_t OC1PE : 1; // bit 3 Output Compare 1 preload enable
    uint32_t OC1M : 3; // bit 4 Output Compare 1 mode
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    uint32_t OC2FE : 1; // bit 10 Output Compare 2 fast enable
    uint32_t OC2PE : 1; // bit 11 Output Compare 2 preload enable
    uint32_t OC2M : 3; // bit 12 Output Compare 2 mode
    uint32_t RESERVED1 : 1; // bit 15
    uint32_t RESERVED2 : 1; // bit 16
    uint32_t RESERVED3 : 1; // bit 17
    uint32_t RESERVED4 : 1; // bit 18
    uint32_t RESERVED5 : 1; // bit 19
    uint32_t RESERVED6 : 1; // bit 20
    uint32_t RESERVED7 : 1; // bit 21
    uint32_t RESERVED8 : 1; // bit 22
    uint32_t RESERVED9 : 1; // bit 23
    uint32_t RESERVED10 : 1; // bit 24
    uint32_t RESERVED11 : 1; // bit 25
    uint32_t RESERVED12 : 1; // bit 26
    uint32_t RESERVED13 : 1; // bit 27
    uint32_t RESERVED14 : 1; // bit 28
    uint32_t RESERVED15 : 1; // bit 29
    uint32_t RESERVED16 : 1; // bit 30
    uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} TIM9_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    uint32_t IC1PSC : 2; // bit 2 Input capture 1 prescaler
    uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    uint32_t IC2PSC : 2; // bit 10 Input capture 2 prescaler
    uint32_t IC2F : 4; // bit 12 Input capture 2 filter
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
} TIM9_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
    uint32_t CC2E : 1; // bit 4 Capture/Compare 2 output enable
    uint32_t CC2P : 1; // bit 5 Capture/Compare 2 output Polarity
    uint32_t RESERVED1 : 1; // bit 6
    uint32_t CC2NP : 1; // bit 7 Capture/Compare 2 output Polarity
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
} TIM9_CCER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CNT : 16; // bit 0 counter value
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
} TIM9_CNT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PSC : 16; // bit 0 Prescaler value
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
} TIM9_PSC_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ARR : 16; // bit 0 Auto-reload value
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
} TIM9_ARR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR1 : 16; // bit 0 Capture/Compare 1 value
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
} TIM9_CCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR2 : 16; // bit 0 Capture/Compare 2 value
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
} TIM9_CCR2_t;

typedef struct {
  TIM9_CR1_t CR1;
  TIM9_CR2_t CR2;
  TIM9_SMCR_t SMCR;
  TIM9_DIER_t DIER;
  TIM9_SR_t SR;
  TIM9_EGR_t EGR;
  TIM9_CCMR1_Output_t CCMR1_Output;
  TIM9_CCMR1_Input_t CCMR1_Input;
  TIM9_CCER_t CCER;
  TIM9_CNT_t CNT;
  TIM9_PSC_t PSC;
  TIM9_ARR_t ARR;
  TIM9_CCR1_t CCR1;
  TIM9_CCR2_t CCR2;
} TIM9_t;

#define TIM9_BASE (0x40014C00UL)
#define TIM9 ((TIM9_t *)TIM9_BASE)

#define TIM9_CR1bits (TIM9->CR1.BITS)
#define TIM9_CR2bits (TIM9->CR2.BITS)
#define TIM9_SMCRbits (TIM9->SMCR.BITS)
#define TIM9_DIERbits (TIM9->DIER.BITS)
#define TIM9_SRbits (TIM9->SR.BITS)
#define TIM9_EGRbits (TIM9->EGR.BITS)
#define TIM9_CCMR1_Outputbits (TIM9->CCMR1_Output.BITS)
#define TIM9_CCMR1_Inputbits (TIM9->CCMR1_Input.BITS)
#define TIM9_CCERbits (TIM9->CCER.BITS)
#define TIM9_CNTbits (TIM9->CNT.BITS)
#define TIM9_PSCbits (TIM9->PSC.BITS)
#define TIM9_ARRbits (TIM9->ARR.BITS)
#define TIM9_CCR1bits (TIM9->CCR1.BITS)
#define TIM9_CCR2bits (TIM9->CCR2.BITS)

#endif // _TIM9_H