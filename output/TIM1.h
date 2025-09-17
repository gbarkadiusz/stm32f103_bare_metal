/**
 * @file    TIM1.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Advanced timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM1 peripheral of the STM32F103.
 */

#ifndef _TIM1_H
#define _TIM1_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CEN : 1; // bit 0 Counter enable
    volatile uint32_t UDIS : 1; // bit 1 Update disable
    volatile uint32_t URS : 1; // bit 2 Update request source
    volatile uint32_t OPM : 1; // bit 3 One-pulse mode
    volatile uint32_t DIR : 1; // bit 4 Direction
    volatile uint32_t CMS : 2; // bit 5 Center-aligned mode selection
    volatile uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    volatile uint32_t CKD : 2; // bit 8 Clock division
    volatile uint32_t RESERVED0 : 1; // bit 10
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
    volatile uint32_t RESERVED7 : 1; // bit 17
    volatile uint32_t RESERVED8 : 1; // bit 18
    volatile uint32_t RESERVED9 : 1; // bit 19
    volatile uint32_t RESERVED10 : 1; // bit 20
    volatile uint32_t RESERVED11 : 1; // bit 21
    volatile uint32_t RESERVED12 : 1; // bit 22
    volatile uint32_t RESERVED13 : 1; // bit 23
    volatile uint32_t RESERVED14 : 1; // bit 24
    volatile uint32_t RESERVED15 : 1; // bit 25
    volatile uint32_t RESERVED16 : 1; // bit 26
    volatile uint32_t RESERVED17 : 1; // bit 27
    volatile uint32_t RESERVED18 : 1; // bit 28
    volatile uint32_t RESERVED19 : 1; // bit 29
    volatile uint32_t RESERVED20 : 1; // bit 30
    volatile uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} TIM1_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCPC : 1; // bit 0 Capture/compare preloaded control
    volatile uint32_t RESERVED0 : 1; // bit 1
    volatile uint32_t CCUS : 1; // bit 2 Capture/compare control update selection
    volatile uint32_t CCDS : 1; // bit 3 Capture/compare DMA selection
    volatile uint32_t MMS : 3; // bit 4 Master mode selection
    volatile uint32_t TI1S : 1; // bit 7 TI1 selection
    volatile uint32_t OIS1 : 1; // bit 8 Output Idle state 1
    volatile uint32_t OIS1N : 1; // bit 9 Output Idle state 1
    volatile uint32_t OIS2 : 1; // bit 10 Output Idle state 2
    volatile uint32_t OIS2N : 1; // bit 11 Output Idle state 2
    volatile uint32_t OIS3 : 1; // bit 12 Output Idle state 3
    volatile uint32_t OIS3N : 1; // bit 13 Output Idle state 3
    volatile uint32_t OIS4 : 1; // bit 14 Output Idle state 4
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
} TIM1_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SMS : 3; // bit 0 Slave mode selection
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t TS : 3; // bit 4 Trigger selection
    volatile uint32_t MSM : 1; // bit 7 Master/Slave mode
    volatile uint32_t ETF : 4; // bit 8 External trigger filter
    volatile uint32_t ETPS : 2; // bit 12 External trigger prescaler
    volatile uint32_t ECE : 1; // bit 14 External clock enable
    volatile uint32_t ETP : 1; // bit 15 External trigger polarity
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
} TIM1_SMCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIE : 1; // bit 0 Update interrupt enable
    volatile uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    volatile uint32_t CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
    volatile uint32_t CC3IE : 1; // bit 3 Capture/Compare 3 interrupt enable
    volatile uint32_t CC4IE : 1; // bit 4 Capture/Compare 4 interrupt enable
    volatile uint32_t COMIE : 1; // bit 5 COM interrupt enable
    volatile uint32_t TIE : 1; // bit 6 Trigger interrupt enable
    volatile uint32_t BIE : 1; // bit 7 Break interrupt enable
    volatile uint32_t UDE : 1; // bit 8 Update DMA request enable
    volatile uint32_t CC1DE : 1; // bit 9 Capture/Compare 1 DMA request enable
    volatile uint32_t CC2DE : 1; // bit 10 Capture/Compare 2 DMA request enable
    volatile uint32_t CC3DE : 1; // bit 11 Capture/Compare 3 DMA request enable
    volatile uint32_t CC4DE : 1; // bit 12 Capture/Compare 4 DMA request enable
    volatile uint32_t COMDE : 1; // bit 13 COM DMA request enable
    volatile uint32_t TDE : 1; // bit 14 Trigger DMA request enable
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} TIM1_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIF : 1; // bit 0 Update interrupt flag
    volatile uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    volatile uint32_t CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
    volatile uint32_t CC3IF : 1; // bit 3 Capture/Compare 3 interrupt flag
    volatile uint32_t CC4IF : 1; // bit 4 Capture/Compare 4 interrupt flag
    volatile uint32_t COMIF : 1; // bit 5 COM interrupt flag
    volatile uint32_t TIF : 1; // bit 6 Trigger interrupt flag
    volatile uint32_t BIF : 1; // bit 7 Break interrupt flag
    volatile uint32_t RESERVED0 : 1; // bit 8
    volatile uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
    volatile uint32_t CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
    volatile uint32_t CC3OF : 1; // bit 11 Capture/Compare 3 overcapture flag
    volatile uint32_t CC4OF : 1; // bit 12 Capture/Compare 4 overcapture flag
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
    volatile uint32_t RESERVED3 : 1; // bit 15
    volatile uint32_t RESERVED4 : 1; // bit 16
    volatile uint32_t RESERVED5 : 1; // bit 17
    volatile uint32_t RESERVED6 : 1; // bit 18
    volatile uint32_t RESERVED7 : 1; // bit 19
    volatile uint32_t RESERVED8 : 1; // bit 20
    volatile uint32_t RESERVED9 : 1; // bit 21
    volatile uint32_t RESERVED10 : 1; // bit 22
    volatile uint32_t RESERVED11 : 1; // bit 23
    volatile uint32_t RESERVED12 : 1; // bit 24
    volatile uint32_t RESERVED13 : 1; // bit 25
    volatile uint32_t RESERVED14 : 1; // bit 26
    volatile uint32_t RESERVED15 : 1; // bit 27
    volatile uint32_t RESERVED16 : 1; // bit 28
    volatile uint32_t RESERVED17 : 1; // bit 29
    volatile uint32_t RESERVED18 : 1; // bit 30
    volatile uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} TIM1_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UG : 1; // bit 0 Update generation
    volatile uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    volatile uint32_t CC2G : 1; // bit 2 Capture/compare 2 generation
    volatile uint32_t CC3G : 1; // bit 3 Capture/compare 3 generation
    volatile uint32_t CC4G : 1; // bit 4 Capture/compare 4 generation
    volatile uint32_t COMG : 1; // bit 5 Capture/Compare control update generation
    volatile uint32_t TG : 1; // bit 6 Trigger generation
    volatile uint32_t BG : 1; // bit 7 Break generation
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
} TIM1_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t OC1FE : 1; // bit 2 Output Compare 1 fast enable
    volatile uint32_t OC1PE : 1; // bit 3 Output Compare 1 preload enable
    volatile uint32_t OC1M : 3; // bit 4 Output Compare 1 mode
    volatile uint32_t OC1CE : 1; // bit 7 Output Compare 1 clear enable
    volatile uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    volatile uint32_t OC2FE : 1; // bit 10 Output Compare 2 fast enable
    volatile uint32_t OC2PE : 1; // bit 11 Output Compare 2 preload enable
    volatile uint32_t OC2M : 3; // bit 12 Output Compare 2 mode
    volatile uint32_t OC2CE : 1; // bit 15 Output Compare 2 clear enable
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
} TIM1_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t ICPCS : 2; // bit 2 Input capture 1 prescaler
    volatile uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    volatile uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    volatile uint32_t IC2PCS : 2; // bit 10 Input capture 2 prescaler
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
} TIM1_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC3S : 2; // bit 0 Capture/Compare 3 selection
    volatile uint32_t OC3FE : 1; // bit 2 Output compare 3 fast enable
    volatile uint32_t OC3PE : 1; // bit 3 Output compare 3 preload enable
    volatile uint32_t OC3M : 3; // bit 4 Output compare 3 mode
    volatile uint32_t OC3CE : 1; // bit 7 Output compare 3 clear enable
    volatile uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    volatile uint32_t OC4FE : 1; // bit 10 Output compare 4 fast enable
    volatile uint32_t OC4PE : 1; // bit 11 Output compare 4 preload enable
    volatile uint32_t OC4M : 3; // bit 12 Output compare 4 mode
    volatile uint32_t OC4CE : 1; // bit 15 Output compare 4 clear enable
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
} TIM1_CCMR2_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC3S : 2; // bit 0 Capture/compare 3 selection
    volatile uint32_t IC3PSC : 2; // bit 2 Input capture 3 prescaler
    volatile uint32_t IC3F : 4; // bit 4 Input capture 3 filter
    volatile uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    volatile uint32_t IC4PSC : 2; // bit 10 Input capture 4 prescaler
    volatile uint32_t IC4F : 4; // bit 12 Input capture 4 filter
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
} TIM1_CCMR2_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    volatile uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    volatile uint32_t CC1NE : 1; // bit 2 Capture/Compare 1 complementary output enable
    volatile uint32_t CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
    volatile uint32_t CC2E : 1; // bit 4 Capture/Compare 2 output enable
    volatile uint32_t CC2P : 1; // bit 5 Capture/Compare 2 output Polarity
    volatile uint32_t CC2NE : 1; // bit 6 Capture/Compare 2 complementary output enable
    volatile uint32_t CC2NP : 1; // bit 7 Capture/Compare 2 output Polarity
    volatile uint32_t CC3E : 1; // bit 8 Capture/Compare 3 output enable
    volatile uint32_t CC3P : 1; // bit 9 Capture/Compare 3 output Polarity
    volatile uint32_t CC3NE : 1; // bit 10 Capture/Compare 3 complementary output enable
    volatile uint32_t CC3NP : 1; // bit 11 Capture/Compare 3 output Polarity
    volatile uint32_t CC4E : 1; // bit 12 Capture/Compare 4 output enable
    volatile uint32_t CC4P : 1; // bit 13 Capture/Compare 3 output Polarity
    volatile uint32_t RESERVED0 : 1; // bit 14
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
} TIM1_CCER_t;

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
} TIM1_CNT_t;

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
} TIM1_PSC_t;

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
} TIM1_ARR_t;

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
} TIM1_CCR1_t;

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
} TIM1_CCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR3 : 16; // bit 0 Capture/Compare value
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
} TIM1_CCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR4 : 16; // bit 0 Capture/Compare value
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
} TIM1_CCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DBA : 5; // bit 0 DMA base address
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t DBL : 5; // bit 8 DMA burst length
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
    volatile uint32_t RESERVED7 : 1; // bit 17
    volatile uint32_t RESERVED8 : 1; // bit 18
    volatile uint32_t RESERVED9 : 1; // bit 19
    volatile uint32_t RESERVED10 : 1; // bit 20
    volatile uint32_t RESERVED11 : 1; // bit 21
    volatile uint32_t RESERVED12 : 1; // bit 22
    volatile uint32_t RESERVED13 : 1; // bit 23
    volatile uint32_t RESERVED14 : 1; // bit 24
    volatile uint32_t RESERVED15 : 1; // bit 25
    volatile uint32_t RESERVED16 : 1; // bit 26
    volatile uint32_t RESERVED17 : 1; // bit 27
    volatile uint32_t RESERVED18 : 1; // bit 28
    volatile uint32_t RESERVED19 : 1; // bit 29
    volatile uint32_t RESERVED20 : 1; // bit 30
    volatile uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} TIM1_DCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DMAB : 16; // bit 0 DMA register for burst accesses
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
} TIM1_DMAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t REP : 8; // bit 0 Repetition counter value
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
} TIM1_RCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DTG : 8; // bit 0 Dead-time generator setup
    volatile uint32_t LOCK : 2; // bit 8 Lock configuration
    volatile uint32_t OSSI : 1; // bit 10 Off-state selection for Idle mode
    volatile uint32_t OSSR : 1; // bit 11 Off-state selection for Run mode
    volatile uint32_t BKE : 1; // bit 12 Break enable
    volatile uint32_t BKP : 1; // bit 13 Break polarity
    volatile uint32_t AOE : 1; // bit 14 Automatic output enable
    volatile uint32_t MOE : 1; // bit 15 Main output enable
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
} TIM1_BDTR_t;

typedef struct {
  TIM1_CR1_t CR1;
  TIM1_CR2_t CR2;
  TIM1_SMCR_t SMCR;
  TIM1_DIER_t DIER;
  TIM1_SR_t SR;
  TIM1_EGR_t EGR;
  TIM1_CCMR1_Output_t CCMR1_Output;
  TIM1_CCMR1_Input_t CCMR1_Input;
  TIM1_CCMR2_Output_t CCMR2_Output;
  TIM1_CCMR2_Input_t CCMR2_Input;
  TIM1_CCER_t CCER;
  TIM1_CNT_t CNT;
  TIM1_PSC_t PSC;
  TIM1_ARR_t ARR;
  TIM1_CCR1_t CCR1;
  TIM1_CCR2_t CCR2;
  TIM1_CCR3_t CCR3;
  TIM1_CCR4_t CCR4;
  TIM1_DCR_t DCR;
  TIM1_DMAR_t DMAR;
  TIM1_RCR_t RCR;
  TIM1_BDTR_t BDTR;
} TIM1_t;

#define TIM1_BASE (0x40012C00UL)
#define TIM1 ((TIM1_t *)TIM1_BASE)

#define TIM1_CR1bits (TIM1->CR1.BITS)
#define TIM1_CR2bits (TIM1->CR2.BITS)
#define TIM1_SMCRbits (TIM1->SMCR.BITS)
#define TIM1_DIERbits (TIM1->DIER.BITS)
#define TIM1_SRbits (TIM1->SR.BITS)
#define TIM1_EGRbits (TIM1->EGR.BITS)
#define TIM1_CCMR1_Outputbits (TIM1->CCMR1_Output.BITS)
#define TIM1_CCMR1_Inputbits (TIM1->CCMR1_Input.BITS)
#define TIM1_CCMR2_Outputbits (TIM1->CCMR2_Output.BITS)
#define TIM1_CCMR2_Inputbits (TIM1->CCMR2_Input.BITS)
#define TIM1_CCERbits (TIM1->CCER.BITS)
#define TIM1_CNTbits (TIM1->CNT.BITS)
#define TIM1_PSCbits (TIM1->PSC.BITS)
#define TIM1_ARRbits (TIM1->ARR.BITS)
#define TIM1_CCR1bits (TIM1->CCR1.BITS)
#define TIM1_CCR2bits (TIM1->CCR2.BITS)
#define TIM1_CCR3bits (TIM1->CCR3.BITS)
#define TIM1_CCR4bits (TIM1->CCR4.BITS)
#define TIM1_DCRbits (TIM1->DCR.BITS)
#define TIM1_DMARbits (TIM1->DMAR.BITS)
#define TIM1_RCRbits (TIM1->RCR.BITS)
#define TIM1_BDTRbits (TIM1->BDTR.BITS)

#endif // _TIM1_H