/**
 * @file    TIM12.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   General purpose timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM12 peripheral of the STM32F103.
 */

#ifndef _TIM12_H
#define _TIM12_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CEN : 1; // bit 0 Counter enable
    volatile uint32_t UDIS : 1; // bit 1 Update disable
    volatile uint32_t URS : 1; // bit 2 Update request source
    volatile uint32_t OPM : 1; // bit 3 One-pulse mode
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    volatile uint32_t CKD : 2; // bit 8 Clock division
    volatile uint32_t RESERVED3 : 1; // bit 10
    volatile uint32_t RESERVED4 : 1; // bit 11
    volatile uint32_t RESERVED5 : 1; // bit 12
    volatile uint32_t RESERVED6 : 1; // bit 13
    volatile uint32_t RESERVED7 : 1; // bit 14
    volatile uint32_t RESERVED8 : 1; // bit 15
    volatile uint32_t RESERVED9 : 1; // bit 16
    volatile uint32_t RESERVED10 : 1; // bit 17
    volatile uint32_t RESERVED11 : 1; // bit 18
    volatile uint32_t RESERVED12 : 1; // bit 19
    volatile uint32_t RESERVED13 : 1; // bit 20
    volatile uint32_t RESERVED14 : 1; // bit 21
    volatile uint32_t RESERVED15 : 1; // bit 22
    volatile uint32_t RESERVED16 : 1; // bit 23
    volatile uint32_t RESERVED17 : 1; // bit 24
    volatile uint32_t RESERVED18 : 1; // bit 25
    volatile uint32_t RESERVED19 : 1; // bit 26
    volatile uint32_t RESERVED20 : 1; // bit 27
    volatile uint32_t RESERVED21 : 1; // bit 28
    volatile uint32_t RESERVED22 : 1; // bit 29
    volatile uint32_t RESERVED23 : 1; // bit 30
    volatile uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} TIM12_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t MMS : 3; // bit 4 Master mode selection
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
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} TIM12_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SMS : 3; // bit 0 Slave mode selection
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t TS : 3; // bit 4 Trigger selection
    volatile uint32_t MSM : 1; // bit 7 Master/Slave mode
    volatile uint32_t RESERVED1 : 1; // bit 8
    volatile uint32_t RESERVED2 : 1; // bit 9
    volatile uint32_t RESERVED3 : 1; // bit 10
    volatile uint32_t RESERVED4 : 1; // bit 11
    volatile uint32_t RESERVED5 : 1; // bit 12
    volatile uint32_t RESERVED6 : 1; // bit 13
    volatile uint32_t RESERVED7 : 1; // bit 14
    volatile uint32_t RESERVED8 : 1; // bit 15
    volatile uint32_t RESERVED9 : 1; // bit 16
    volatile uint32_t RESERVED10 : 1; // bit 17
    volatile uint32_t RESERVED11 : 1; // bit 18
    volatile uint32_t RESERVED12 : 1; // bit 19
    volatile uint32_t RESERVED13 : 1; // bit 20
    volatile uint32_t RESERVED14 : 1; // bit 21
    volatile uint32_t RESERVED15 : 1; // bit 22
    volatile uint32_t RESERVED16 : 1; // bit 23
    volatile uint32_t RESERVED17 : 1; // bit 24
    volatile uint32_t RESERVED18 : 1; // bit 25
    volatile uint32_t RESERVED19 : 1; // bit 26
    volatile uint32_t RESERVED20 : 1; // bit 27
    volatile uint32_t RESERVED21 : 1; // bit 28
    volatile uint32_t RESERVED22 : 1; // bit 29
    volatile uint32_t RESERVED23 : 1; // bit 30
    volatile uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} TIM12_SMCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIE : 1; // bit 0 Update interrupt enable
    volatile uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    volatile uint32_t CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t TIE : 1; // bit 6 Trigger interrupt enable
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t RESERVED4 : 1; // bit 8
    volatile uint32_t RESERVED5 : 1; // bit 9
    volatile uint32_t RESERVED6 : 1; // bit 10
    volatile uint32_t RESERVED7 : 1; // bit 11
    volatile uint32_t RESERVED8 : 1; // bit 12
    volatile uint32_t RESERVED9 : 1; // bit 13
    volatile uint32_t RESERVED10 : 1; // bit 14
    volatile uint32_t RESERVED11 : 1; // bit 15
    volatile uint32_t RESERVED12 : 1; // bit 16
    volatile uint32_t RESERVED13 : 1; // bit 17
    volatile uint32_t RESERVED14 : 1; // bit 18
    volatile uint32_t RESERVED15 : 1; // bit 19
    volatile uint32_t RESERVED16 : 1; // bit 20
    volatile uint32_t RESERVED17 : 1; // bit 21
    volatile uint32_t RESERVED18 : 1; // bit 22
    volatile uint32_t RESERVED19 : 1; // bit 23
    volatile uint32_t RESERVED20 : 1; // bit 24
    volatile uint32_t RESERVED21 : 1; // bit 25
    volatile uint32_t RESERVED22 : 1; // bit 26
    volatile uint32_t RESERVED23 : 1; // bit 27
    volatile uint32_t RESERVED24 : 1; // bit 28
    volatile uint32_t RESERVED25 : 1; // bit 29
    volatile uint32_t RESERVED26 : 1; // bit 30
    volatile uint32_t RESERVED27 : 1; // bit 31
  } BITS;
} TIM12_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIF : 1; // bit 0 Update interrupt flag
    volatile uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    volatile uint32_t CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t TIF : 1; // bit 6 Trigger interrupt flag
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t RESERVED4 : 1; // bit 8
    volatile uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
    volatile uint32_t CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
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
    volatile uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} TIM12_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UG : 1; // bit 0 Update generation
    volatile uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    volatile uint32_t CC2G : 1; // bit 2 Capture/compare 2 generation
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t TG : 1; // bit 6 Trigger generation
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t RESERVED4 : 1; // bit 8
    volatile uint32_t RESERVED5 : 1; // bit 9
    volatile uint32_t RESERVED6 : 1; // bit 10
    volatile uint32_t RESERVED7 : 1; // bit 11
    volatile uint32_t RESERVED8 : 1; // bit 12
    volatile uint32_t RESERVED9 : 1; // bit 13
    volatile uint32_t RESERVED10 : 1; // bit 14
    volatile uint32_t RESERVED11 : 1; // bit 15
    volatile uint32_t RESERVED12 : 1; // bit 16
    volatile uint32_t RESERVED13 : 1; // bit 17
    volatile uint32_t RESERVED14 : 1; // bit 18
    volatile uint32_t RESERVED15 : 1; // bit 19
    volatile uint32_t RESERVED16 : 1; // bit 20
    volatile uint32_t RESERVED17 : 1; // bit 21
    volatile uint32_t RESERVED18 : 1; // bit 22
    volatile uint32_t RESERVED19 : 1; // bit 23
    volatile uint32_t RESERVED20 : 1; // bit 24
    volatile uint32_t RESERVED21 : 1; // bit 25
    volatile uint32_t RESERVED22 : 1; // bit 26
    volatile uint32_t RESERVED23 : 1; // bit 27
    volatile uint32_t RESERVED24 : 1; // bit 28
    volatile uint32_t RESERVED25 : 1; // bit 29
    volatile uint32_t RESERVED26 : 1; // bit 30
    volatile uint32_t RESERVED27 : 1; // bit 31
  } BITS;
} TIM12_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t OC1FE : 1; // bit 2 Output Compare 1 fast enable
    volatile uint32_t OC1PE : 1; // bit 3 Output Compare 1 preload enable
    volatile uint32_t OC1M : 3; // bit 4 Output Compare 1 mode
    volatile uint32_t RESERVED0 : 1; // bit 7
    volatile uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    volatile uint32_t OC2FE : 1; // bit 10 Output Compare 2 fast enable
    volatile uint32_t OC2PE : 1; // bit 11 Output Compare 2 preload enable
    volatile uint32_t OC2M : 3; // bit 12 Output Compare 2 mode
    volatile uint32_t RESERVED1 : 1; // bit 15
    volatile uint32_t RESERVED2 : 1; // bit 16
    volatile uint32_t RESERVED3 : 1; // bit 17
    volatile uint32_t RESERVED4 : 1; // bit 18
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} TIM12_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t IC1PSC : 2; // bit 2 Input capture 1 prescaler
    volatile uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    volatile uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    volatile uint32_t IC2PSC : 2; // bit 10 Input capture 2 prescaler
    volatile uint32_t IC2F : 4; // bit 12 Input capture 2 filter
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
} TIM12_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    volatile uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
    volatile uint32_t CC2E : 1; // bit 4 Capture/Compare 2 output enable
    volatile uint32_t CC2P : 1; // bit 5 Capture/Compare 2 output Polarity
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t CC2NP : 1; // bit 7 Capture/Compare 2 output Polarity
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t RESERVED3 : 1; // bit 9
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
    volatile uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} TIM12_CCER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CNT : 16; // bit 0 counter value
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
} TIM12_CNT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PSC : 16; // bit 0 Prescaler value
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
} TIM12_PSC_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ARR : 16; // bit 0 Auto-reload value
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
} TIM12_ARR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR1 : 16; // bit 0 Capture/Compare 1 value
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
} TIM12_CCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR2 : 16; // bit 0 Capture/Compare 2 value
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
} TIM12_CCR2_t;

typedef struct {
  TIM12_CR1_t CR1;
  TIM12_CR2_t CR2;
  TIM12_SMCR_t SMCR;
  TIM12_DIER_t DIER;
  TIM12_SR_t SR;
  TIM12_EGR_t EGR;
  TIM12_CCMR1_Output_t CCMR1_Output;
  TIM12_CCMR1_Input_t CCMR1_Input;
  TIM12_CCER_t CCER;
  TIM12_CNT_t CNT;
  TIM12_PSC_t PSC;
  TIM12_ARR_t ARR;
  TIM12_CCR1_t CCR1;
  TIM12_CCR2_t CCR2;
} TIM12_t;

#define TIM12_BASE (0x40001800UL)
#define TIM12 ((TIM12_t *)TIM12_BASE)

#define TIM12_CR1bits (TIM12->CR1.BITS)
#define TIM12_CR2bits (TIM12->CR2.BITS)
#define TIM12_SMCRbits (TIM12->SMCR.BITS)
#define TIM12_DIERbits (TIM12->DIER.BITS)
#define TIM12_SRbits (TIM12->SR.BITS)
#define TIM12_EGRbits (TIM12->EGR.BITS)
#define TIM12_CCMR1_Outputbits (TIM12->CCMR1_Output.BITS)
#define TIM12_CCMR1_Inputbits (TIM12->CCMR1_Input.BITS)
#define TIM12_CCERbits (TIM12->CCER.BITS)
#define TIM12_CNTbits (TIM12->CNT.BITS)
#define TIM12_PSCbits (TIM12->PSC.BITS)
#define TIM12_ARRbits (TIM12->ARR.BITS)
#define TIM12_CCR1bits (TIM12->CCR1.BITS)
#define TIM12_CCR2bits (TIM12->CCR2.BITS)

#endif // _TIM12_H