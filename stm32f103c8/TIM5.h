/**
 * @file    TIM5.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   General purpose timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM5 peripheral of the STM32F103.
 */

#ifndef _TIM5_H
#define _TIM5_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CEN : 1; // bit 0 Counter enable
    uint32_t UDIS : 1; // bit 1 Update disable
    uint32_t URS : 1; // bit 2 Update request source
    uint32_t OPM : 1; // bit 3 One-pulse mode
    uint32_t DIR : 1; // bit 4 Direction
    uint32_t CMS : 2; // bit 5 Center-aligned mode selection
    uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    uint32_t CKD : 2; // bit 8 Clock division
    uint32_t RESERVED0 : 1; // bit 10
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
    uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} TIM5_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t RESERVED1 : 1; // bit 1
    uint32_t RESERVED2 : 1; // bit 2
    uint32_t CCDS : 1; // bit 3 Capture/compare DMA selection
    uint32_t MMS : 3; // bit 4 Master mode selection
    uint32_t TI1S : 1; // bit 7 TI1 selection
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
} TIM5_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SMS : 3; // bit 0 Slave mode selection
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t TS : 3; // bit 4 Trigger selection
    uint32_t MSM : 1; // bit 7 Master/Slave mode
    uint32_t ETF : 4; // bit 8 External trigger filter
    uint32_t ETPS : 2; // bit 12 External trigger prescaler
    uint32_t ECE : 1; // bit 14 External clock enable
    uint32_t ETP : 1; // bit 15 External trigger polarity
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
} TIM5_SMCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UIE : 1; // bit 0 Update interrupt enable
    uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    uint32_t CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
    uint32_t CC3IE : 1; // bit 3 Capture/Compare 3 interrupt enable
    uint32_t CC4IE : 1; // bit 4 Capture/Compare 4 interrupt enable
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t TIE : 1; // bit 6 Trigger interrupt enable
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t UDE : 1; // bit 8 Update DMA request enable
    uint32_t CC1DE : 1; // bit 9 Capture/Compare 1 DMA request enable
    uint32_t CC2DE : 1; // bit 10 Capture/Compare 2 DMA request enable
    uint32_t CC3DE : 1; // bit 11 Capture/Compare 3 DMA request enable
    uint32_t CC4DE : 1; // bit 12 Capture/Compare 4 DMA request enable
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t TDE : 1; // bit 14 Trigger DMA request enable
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
} TIM5_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UIF : 1; // bit 0 Update interrupt flag
    uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    uint32_t CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
    uint32_t CC3IF : 1; // bit 3 Capture/Compare 3 interrupt flag
    uint32_t CC4IF : 1; // bit 4 Capture/Compare 4 interrupt flag
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t TIF : 1; // bit 6 Trigger interrupt flag
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
    uint32_t CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
    uint32_t CC3OF : 1; // bit 11 Capture/Compare 3 overcapture flag
    uint32_t CC4OF : 1; // bit 12 Capture/Compare 4 overcapture flag
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
} TIM5_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UG : 1; // bit 0 Update generation
    uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    uint32_t CC2G : 1; // bit 2 Capture/compare 2 generation
    uint32_t CC3G : 1; // bit 3 Capture/compare 3 generation
    uint32_t CC4G : 1; // bit 4 Capture/compare 4 generation
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t TG : 1; // bit 6 Trigger generation
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
} TIM5_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    uint32_t OC1FE : 1; // bit 2 Output compare 1 fast enable
    uint32_t OC1PE : 1; // bit 3 Output compare 1 preload enable
    uint32_t OC1M : 3; // bit 4 Output compare 1 mode
    uint32_t OC1CE : 1; // bit 7 Output compare 1 clear enable
    uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    uint32_t OC2FE : 1; // bit 10 Output compare 2 fast enable
    uint32_t OC2PE : 1; // bit 11 Output compare 2 preload enable
    uint32_t OC2M : 3; // bit 12 Output compare 2 mode
    uint32_t OC2CE : 1; // bit 15 Output compare 2 clear enable
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
} TIM5_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    uint32_t IC1PSC : 2; // bit 2 Input capture 1 prescaler
    uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    uint32_t CC2S : 2; // bit 8 Capture/compare 2 selection
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
} TIM5_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC3S : 2; // bit 0 Capture/Compare 3 selection
    uint32_t OC3FE : 1; // bit 2 Output compare 3 fast enable
    uint32_t OC3PE : 1; // bit 3 Output compare 3 preload enable
    uint32_t OC3M : 3; // bit 4 Output compare 3 mode
    uint32_t OC3CE : 1; // bit 7 Output compare 3 clear enable
    uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    uint32_t OC4FE : 1; // bit 10 Output compare 4 fast enable
    uint32_t OC4PE : 1; // bit 11 Output compare 4 preload enable
    uint32_t OC4M : 3; // bit 12 Output compare 4 mode
    uint32_t O24CE : 1; // bit 15 Output compare 4 clear enable
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
} TIM5_CCMR2_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC3S : 2; // bit 0 Capture/Compare 3 selection
    uint32_t IC3PSC : 2; // bit 2 Input capture 3 prescaler
    uint32_t IC3F : 4; // bit 4 Input capture 3 filter
    uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    uint32_t IC4PSC : 2; // bit 10 Input capture 4 prescaler
    uint32_t IC4F : 4; // bit 12 Input capture 4 filter
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
} TIM5_CCMR2_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t RESERVED1 : 1; // bit 3
    uint32_t CC2E : 1; // bit 4 Capture/Compare 2 output enable
    uint32_t CC2P : 1; // bit 5 Capture/Compare 2 output Polarity
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t CC3E : 1; // bit 8 Capture/Compare 3 output enable
    uint32_t CC3P : 1; // bit 9 Capture/Compare 3 output Polarity
    uint32_t RESERVED4 : 1; // bit 10
    uint32_t RESERVED5 : 1; // bit 11
    uint32_t CC4E : 1; // bit 12 Capture/Compare 4 output enable
    uint32_t CC4P : 1; // bit 13 Capture/Compare 3 output Polarity
    uint32_t RESERVED6 : 1; // bit 14
    uint32_t RESERVED7 : 1; // bit 15
    uint32_t RESERVED8 : 1; // bit 16
    uint32_t RESERVED9 : 1; // bit 17
    uint32_t RESERVED10 : 1; // bit 18
    uint32_t RESERVED11 : 1; // bit 19
    uint32_t RESERVED12 : 1; // bit 20
    uint32_t RESERVED13 : 1; // bit 21
    uint32_t RESERVED14 : 1; // bit 22
    uint32_t RESERVED15 : 1; // bit 23
    uint32_t RESERVED16 : 1; // bit 24
    uint32_t RESERVED17 : 1; // bit 25
    uint32_t RESERVED18 : 1; // bit 26
    uint32_t RESERVED19 : 1; // bit 27
    uint32_t RESERVED20 : 1; // bit 28
    uint32_t RESERVED21 : 1; // bit 29
    uint32_t RESERVED22 : 1; // bit 30
    uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} TIM5_CCER_t;

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
} TIM5_CNT_t;

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
} TIM5_PSC_t;

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
} TIM5_ARR_t;

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
} TIM5_CCR1_t;

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
} TIM5_CCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR3 : 16; // bit 0 Capture/Compare value
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
} TIM5_CCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR4 : 16; // bit 0 Capture/Compare value
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
} TIM5_CCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DBA : 5; // bit 0 DMA base address
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t RESERVED1 : 1; // bit 6
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t DBL : 5; // bit 8 DMA burst length
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
} TIM5_DCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DMAB : 16; // bit 0 DMA register for burst accesses
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
} TIM5_DMAR_t;

typedef struct {
  TIM5_CR1_t CR1;
  TIM5_CR2_t CR2;
  TIM5_SMCR_t SMCR;
  TIM5_DIER_t DIER;
  TIM5_SR_t SR;
  TIM5_EGR_t EGR;
  TIM5_CCMR1_Output_t CCMR1_Output;
  TIM5_CCMR1_Input_t CCMR1_Input;
  TIM5_CCMR2_Output_t CCMR2_Output;
  TIM5_CCMR2_Input_t CCMR2_Input;
  TIM5_CCER_t CCER;
  TIM5_CNT_t CNT;
  TIM5_PSC_t PSC;
  TIM5_ARR_t ARR;
  TIM5_CCR1_t CCR1;
  TIM5_CCR2_t CCR2;
  TIM5_CCR3_t CCR3;
  TIM5_CCR4_t CCR4;
  TIM5_DCR_t DCR;
  TIM5_DMAR_t DMAR;
} TIM5_t;

#define TIM5_BASE (0x40000C00UL)
#define TIM5 ((TIM5_t *)TIM5_BASE)

#define TIM5_CR1bits (TIM5->CR1.BITS)
#define TIM5_CR2bits (TIM5->CR2.BITS)
#define TIM5_SMCRbits (TIM5->SMCR.BITS)
#define TIM5_DIERbits (TIM5->DIER.BITS)
#define TIM5_SRbits (TIM5->SR.BITS)
#define TIM5_EGRbits (TIM5->EGR.BITS)
#define TIM5_CCMR1_Outputbits (TIM5->CCMR1_Output.BITS)
#define TIM5_CCMR1_Inputbits (TIM5->CCMR1_Input.BITS)
#define TIM5_CCMR2_Outputbits (TIM5->CCMR2_Output.BITS)
#define TIM5_CCMR2_Inputbits (TIM5->CCMR2_Input.BITS)
#define TIM5_CCERbits (TIM5->CCER.BITS)
#define TIM5_CNTbits (TIM5->CNT.BITS)
#define TIM5_PSCbits (TIM5->PSC.BITS)
#define TIM5_ARRbits (TIM5->ARR.BITS)
#define TIM5_CCR1bits (TIM5->CCR1.BITS)
#define TIM5_CCR2bits (TIM5->CCR2.BITS)
#define TIM5_CCR3bits (TIM5->CCR3.BITS)
#define TIM5_CCR4bits (TIM5->CCR4.BITS)
#define TIM5_DCRbits (TIM5->DCR.BITS)
#define TIM5_DMARbits (TIM5->DMAR.BITS)

#endif // _TIM5_H