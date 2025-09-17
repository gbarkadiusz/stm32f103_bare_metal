/**
 * @file    ADC2.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Analog to digital converter
 *
 * This header file provides register definitions and bitfield access
 * for the ADC2 peripheral of the STM32F103.
 */

#ifndef _ADC2_H
#define _ADC2_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t AWD : 1; // bit 0 Analog watchdog flag
    uint32_t EOC : 1; // bit 1 Regular channel end of conversion
    uint32_t JEOC : 1; // bit 2 Injected channel end of conversion
    uint32_t JSTRT : 1; // bit 3 Injected channel start flag
    uint32_t STRT : 1; // bit 4 Regular channel start flag
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t RESERVED1 : 1; // bit 6
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
} ADC2_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t AWDCH : 5; // bit 0 Analog watchdog channel select bits
    uint32_t EOCIE : 1; // bit 5 Interrupt enable for EOC
    uint32_t AWDIE : 1; // bit 6 Analog watchdog interrupt enable
    uint32_t JEOCIE : 1; // bit 7 Interrupt enable for injected channels
    uint32_t SCAN : 1; // bit 8 Scan mode
    uint32_t AWDSGL : 1; // bit 9 Enable the watchdog on a single channel in scan mode
    uint32_t JAUTO : 1; // bit 10 Automatic injected group conversion
    uint32_t DISCEN : 1; // bit 11 Discontinuous mode on regular channels
    uint32_t JDISCEN : 1; // bit 12 Discontinuous mode on injected channels
    uint32_t DISCNUM : 3; // bit 13 Discontinuous mode channel count
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t JAWDEN : 1; // bit 22 Analog watchdog enable on injected channels
    uint32_t AWDEN : 1; // bit 23 Analog watchdog enable on regular channels
    uint32_t RESERVED6 : 1; // bit 24
    uint32_t RESERVED7 : 1; // bit 25
    uint32_t RESERVED8 : 1; // bit 26
    uint32_t RESERVED9 : 1; // bit 27
    uint32_t RESERVED10 : 1; // bit 28
    uint32_t RESERVED11 : 1; // bit 29
    uint32_t RESERVED12 : 1; // bit 30
    uint32_t RESERVED13 : 1; // bit 31
  } BITS;
} ADC2_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADON : 1; // bit 0 A/D converter ON / OFF
    uint32_t CONT : 1; // bit 1 Continuous conversion
    uint32_t CAL : 1; // bit 2 A/D calibration
    uint32_t RSTCAL : 1; // bit 3 Reset calibration
    uint32_t RESERVED0 : 1; // bit 4
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t RESERVED2 : 1; // bit 6
    uint32_t RESERVED3 : 1; // bit 7
    uint32_t DMA : 1; // bit 8 Direct memory access mode
    uint32_t RESERVED4 : 1; // bit 9
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t ALIGN : 1; // bit 11 Data alignment
    uint32_t JEXTSEL : 3; // bit 12 External event select for injected group
    uint32_t JEXTTRIG : 1; // bit 15 External trigger conversion mode for injected channels
    uint32_t RESERVED6 : 1; // bit 16
    uint32_t EXTSEL : 3; // bit 17 External event select for regular group
    uint32_t EXTTRIG : 1; // bit 20 External trigger conversion mode for regular channels
    uint32_t JSWSTART : 1; // bit 21 Start conversion of injected channels
    uint32_t SWSTART : 1; // bit 22 Start conversion of regular channels
    uint32_t TSVREFE : 1; // bit 23 Temperature sensor and VREFINT enable
    uint32_t RESERVED7 : 1; // bit 24
    uint32_t RESERVED8 : 1; // bit 25
    uint32_t RESERVED9 : 1; // bit 26
    uint32_t RESERVED10 : 1; // bit 27
    uint32_t RESERVED11 : 1; // bit 28
    uint32_t RESERVED12 : 1; // bit 29
    uint32_t RESERVED13 : 1; // bit 30
    uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} ADC2_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SMP10 : 3; // bit 0 Channel 10 sample time selection
    uint32_t SMP11 : 3; // bit 3 Channel 11 sample time selection
    uint32_t SMP12 : 3; // bit 6 Channel 12 sample time selection
    uint32_t SMP13 : 3; // bit 9 Channel 13 sample time selection
    uint32_t SMP14 : 3; // bit 12 Channel 14 sample time selection
    uint32_t SMP15 : 3; // bit 15 Channel 15 sample time selection
    uint32_t SMP16 : 3; // bit 18 Channel 16 sample time selection
    uint32_t SMP17 : 3; // bit 21 Channel 17 sample time selection
    uint32_t RESERVED0 : 1; // bit 24
    uint32_t RESERVED1 : 1; // bit 25
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t RESERVED3 : 1; // bit 27
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} ADC2_SMPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SMP0 : 3; // bit 0 Channel 0 sample time selection
    uint32_t SMP1 : 3; // bit 3 Channel 1 sample time selection
    uint32_t SMP2 : 3; // bit 6 Channel 2 sample time selection
    uint32_t SMP3 : 3; // bit 9 Channel 3 sample time selection
    uint32_t SMP4 : 3; // bit 12 Channel 4 sample time selection
    uint32_t SMP5 : 3; // bit 15 Channel 5 sample time selection
    uint32_t SMP6 : 3; // bit 18 Channel 6 sample time selection
    uint32_t SMP7 : 3; // bit 21 Channel 7 sample time selection
    uint32_t SMP8 : 3; // bit 24 Channel 8 sample time selection
    uint32_t SMP9 : 3; // bit 27 Channel 9 sample time selection
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} ADC2_SMPR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JOFFSET1 : 12; // bit 0 Data offset for injected channel x
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
} ADC2_JOFR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JOFFSET2 : 12; // bit 0 Data offset for injected channel x
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
} ADC2_JOFR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JOFFSET3 : 12; // bit 0 Data offset for injected channel x
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
} ADC2_JOFR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JOFFSET4 : 12; // bit 0 Data offset for injected channel x
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
} ADC2_JOFR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t HT : 12; // bit 0 Analog watchdog higher threshold
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
} ADC2_HTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t LT : 12; // bit 0 Analog watchdog lower threshold
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
} ADC2_LTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SQ13 : 5; // bit 0 13th conversion in regular sequence
    uint32_t SQ14 : 5; // bit 5 14th conversion in regular sequence
    uint32_t SQ15 : 5; // bit 10 15th conversion in regular sequence
    uint32_t SQ16 : 5; // bit 15 16th conversion in regular sequence
    uint32_t L : 4; // bit 20 Regular channel sequence length
    uint32_t RESERVED0 : 1; // bit 24
    uint32_t RESERVED1 : 1; // bit 25
    uint32_t RESERVED2 : 1; // bit 26
    uint32_t RESERVED3 : 1; // bit 27
    uint32_t RESERVED4 : 1; // bit 28
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} ADC2_SQR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SQ7 : 5; // bit 0 7th conversion in regular sequence
    uint32_t SQ8 : 5; // bit 5 8th conversion in regular sequence
    uint32_t SQ9 : 5; // bit 10 9th conversion in regular sequence
    uint32_t SQ10 : 5; // bit 15 10th conversion in regular sequence
    uint32_t SQ11 : 5; // bit 20 11th conversion in regular sequence
    uint32_t SQ12 : 5; // bit 25 12th conversion in regular sequence
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} ADC2_SQR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SQ1 : 5; // bit 0 1st conversion in regular sequence
    uint32_t SQ2 : 5; // bit 5 2nd conversion in regular sequence
    uint32_t SQ3 : 5; // bit 10 3rd conversion in regular sequence
    uint32_t SQ4 : 5; // bit 15 4th conversion in regular sequence
    uint32_t SQ5 : 5; // bit 20 5th conversion in regular sequence
    uint32_t SQ6 : 5; // bit 25 6th conversion in regular sequence
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} ADC2_SQR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JSQ1 : 5; // bit 0 1st conversion in injected sequence
    uint32_t JSQ2 : 5; // bit 5 2nd conversion in injected sequence
    uint32_t JSQ3 : 5; // bit 10 3rd conversion in injected sequence
    uint32_t JSQ4 : 5; // bit 15 4th conversion in injected sequence
    uint32_t JL : 2; // bit 20 Injected sequence length
    uint32_t RESERVED0 : 1; // bit 22
    uint32_t RESERVED1 : 1; // bit 23
    uint32_t RESERVED2 : 1; // bit 24
    uint32_t RESERVED3 : 1; // bit 25
    uint32_t RESERVED4 : 1; // bit 26
    uint32_t RESERVED5 : 1; // bit 27
    uint32_t RESERVED6 : 1; // bit 28
    uint32_t RESERVED7 : 1; // bit 29
    uint32_t RESERVED8 : 1; // bit 30
    uint32_t RESERVED9 : 1; // bit 31
  } BITS;
} ADC2_JSQR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC2_JDR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC2_JDR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC2_JDR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC2_JDR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DATA : 16; // bit 0 Regular data
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
} ADC2_DR_t;

typedef struct {
  ADC2_SR_t SR;
  ADC2_CR1_t CR1;
  ADC2_CR2_t CR2;
  ADC2_SMPR1_t SMPR1;
  ADC2_SMPR2_t SMPR2;
  ADC2_JOFR1_t JOFR1;
  ADC2_JOFR2_t JOFR2;
  ADC2_JOFR3_t JOFR3;
  ADC2_JOFR4_t JOFR4;
  ADC2_HTR_t HTR;
  ADC2_LTR_t LTR;
  ADC2_SQR1_t SQR1;
  ADC2_SQR2_t SQR2;
  ADC2_SQR3_t SQR3;
  ADC2_JSQR_t JSQR;
  ADC2_JDR1_t JDR1;
  ADC2_JDR2_t JDR2;
  ADC2_JDR3_t JDR3;
  ADC2_JDR4_t JDR4;
  ADC2_DR_t DR;
} ADC2_t;

#define ADC2_BASE (0x40012800UL)
#define ADC2 ((ADC2_t *)ADC2_BASE)

#define ADC2_SRbits (ADC2->SR.BITS)
#define ADC2_CR1bits (ADC2->CR1.BITS)
#define ADC2_CR2bits (ADC2->CR2.BITS)
#define ADC2_SMPR1bits (ADC2->SMPR1.BITS)
#define ADC2_SMPR2bits (ADC2->SMPR2.BITS)
#define ADC2_JOFR1bits (ADC2->JOFR1.BITS)
#define ADC2_JOFR2bits (ADC2->JOFR2.BITS)
#define ADC2_JOFR3bits (ADC2->JOFR3.BITS)
#define ADC2_JOFR4bits (ADC2->JOFR4.BITS)
#define ADC2_HTRbits (ADC2->HTR.BITS)
#define ADC2_LTRbits (ADC2->LTR.BITS)
#define ADC2_SQR1bits (ADC2->SQR1.BITS)
#define ADC2_SQR2bits (ADC2->SQR2.BITS)
#define ADC2_SQR3bits (ADC2->SQR3.BITS)
#define ADC2_JSQRbits (ADC2->JSQR.BITS)
#define ADC2_JDR1bits (ADC2->JDR1.BITS)
#define ADC2_JDR2bits (ADC2->JDR2.BITS)
#define ADC2_JDR3bits (ADC2->JDR3.BITS)
#define ADC2_JDR4bits (ADC2->JDR4.BITS)
#define ADC2_DRbits (ADC2->DR.BITS)

#endif // _ADC2_H