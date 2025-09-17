/**
 * @file    RCC.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Reset and clock control
 *
 * This header file provides register definitions and bitfield access
 * for the RCC peripheral of the STM32F103.
 */

#ifndef _RCC_H
#define _RCC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t HSION : 1; // bit 0 Internal High Speed clock enable
    uint32_t HSIRDY : 1; // bit 1 Internal High Speed clock ready flag
    uint32_t RESERVED0 : 1; // bit 2
    uint32_t HSITRIM : 5; // bit 3 Internal High Speed clock trimming
    uint32_t HSICAL : 8; // bit 8 Internal High Speed clock Calibration
    uint32_t HSEON : 1; // bit 16 External High Speed clock enable
    uint32_t HSERDY : 1; // bit 17 External High Speed clock ready flag
    uint32_t HSEBYP : 1; // bit 18 External High Speed clock Bypass
    uint32_t CSSON : 1; // bit 19 Clock Security System enable
    uint32_t RESERVED1 : 1; // bit 20
    uint32_t RESERVED2 : 1; // bit 21
    uint32_t RESERVED3 : 1; // bit 22
    uint32_t RESERVED4 : 1; // bit 23
    uint32_t PLLON : 1; // bit 24 PLL enable
    uint32_t PLLRDY : 1; // bit 25 PLL clock ready flag
    uint32_t RESERVED5 : 1; // bit 26
    uint32_t RESERVED6 : 1; // bit 27
    uint32_t RESERVED7 : 1; // bit 28
    uint32_t RESERVED8 : 1; // bit 29
    uint32_t RESERVED9 : 1; // bit 30
    uint32_t RESERVED10 : 1; // bit 31
  } BITS;
} RCC_CR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SW : 2; // bit 0 System clock Switch
    uint32_t SWS : 2; // bit 2 System Clock Switch Status
    uint32_t HPRE : 4; // bit 4 AHB prescaler
    uint32_t PPRE1 : 3; // bit 8 APB Low speed prescaler (APB1)
    uint32_t PPRE2 : 3; // bit 11 APB High speed prescaler (APB2)
    uint32_t ADCPRE : 2; // bit 14 ADC prescaler
    uint32_t PLLSRC : 1; // bit 16 PLL entry clock source
    uint32_t PLLXTPRE : 1; // bit 17 HSE divider for PLL entry
    uint32_t PLLMUL : 4; // bit 18 PLL Multiplication Factor
    uint32_t OTGFSPRE : 1; // bit 22 USB OTG FS prescaler
    uint32_t RESERVED0 : 1; // bit 23
    uint32_t MCO : 3; // bit 24 Microcontroller clock output
    uint32_t RESERVED1 : 1; // bit 27
    uint32_t RESERVED2 : 1; // bit 28
    uint32_t RESERVED3 : 1; // bit 29
    uint32_t RESERVED4 : 1; // bit 30
    uint32_t RESERVED5 : 1; // bit 31
  } BITS;
} RCC_CFGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t LSIRDYF : 1; // bit 0 LSI Ready Interrupt flag
    uint32_t LSERDYF : 1; // bit 1 LSE Ready Interrupt flag
    uint32_t HSIRDYF : 1; // bit 2 HSI Ready Interrupt flag
    uint32_t HSERDYF : 1; // bit 3 HSE Ready Interrupt flag
    uint32_t PLLRDYF : 1; // bit 4 PLL Ready Interrupt flag
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t RESERVED1 : 1; // bit 6
    uint32_t CSSF : 1; // bit 7 Clock Security System Interrupt flag
    uint32_t LSIRDYIE : 1; // bit 8 LSI Ready Interrupt Enable
    uint32_t LSERDYIE : 1; // bit 9 LSE Ready Interrupt Enable
    uint32_t HSIRDYIE : 1; // bit 10 HSI Ready Interrupt Enable
    uint32_t HSERDYIE : 1; // bit 11 HSE Ready Interrupt Enable
    uint32_t PLLRDYIE : 1; // bit 12 PLL Ready Interrupt Enable
    uint32_t RESERVED2 : 1; // bit 13
    uint32_t RESERVED3 : 1; // bit 14
    uint32_t RESERVED4 : 1; // bit 15
    uint32_t LSIRDYC : 1; // bit 16 LSI Ready Interrupt Clear
    uint32_t LSERDYC : 1; // bit 17 LSE Ready Interrupt Clear
    uint32_t HSIRDYC : 1; // bit 18 HSI Ready Interrupt Clear
    uint32_t HSERDYC : 1; // bit 19 HSE Ready Interrupt Clear
    uint32_t PLLRDYC : 1; // bit 20 PLL Ready Interrupt Clear
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t CSSC : 1; // bit 23 Clock security system interrupt clear
    uint32_t RESERVED7 : 1; // bit 24
    uint32_t RESERVED8 : 1; // bit 25
    uint32_t RESERVED9 : 1; // bit 26
    uint32_t RESERVED10 : 1; // bit 27
    uint32_t RESERVED11 : 1; // bit 28
    uint32_t RESERVED12 : 1; // bit 29
    uint32_t RESERVED13 : 1; // bit 30
    uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} RCC_CIR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t AFIORST : 1; // bit 0 Alternate function I/O reset
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t IOPARST : 1; // bit 2 IO port A reset
    uint32_t IOPBRST : 1; // bit 3 IO port B reset
    uint32_t IOPCRST : 1; // bit 4 IO port C reset
    uint32_t IOPDRST : 1; // bit 5 IO port D reset
    uint32_t IOPERST : 1; // bit 6 IO port E reset
    uint32_t IOPFRST : 1; // bit 7 IO port F reset
    uint32_t IOPGRST : 1; // bit 8 IO port G reset
    uint32_t ADC1RST : 1; // bit 9 ADC 1 interface reset
    uint32_t ADC2RST : 1; // bit 10 ADC 2 interface reset
    uint32_t TIM1RST : 1; // bit 11 TIM1 timer reset
    uint32_t SPI1RST : 1; // bit 12 SPI 1 reset
    uint32_t TIM8RST : 1; // bit 13 TIM8 timer reset
    uint32_t USART1RST : 1; // bit 14 USART1 reset
    uint32_t ADC3RST : 1; // bit 15 ADC 3 interface reset
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t TIM9RST : 1; // bit 19 TIM9 timer reset
    uint32_t TIM10RST : 1; // bit 20 TIM10 timer reset
    uint32_t TIM11RST : 1; // bit 21 TIM11 timer reset
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
} RCC_APB2RSTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TIM2RST : 1; // bit 0 Timer 2 reset
    uint32_t TIM3RST : 1; // bit 1 Timer 3 reset
    uint32_t TIM4RST : 1; // bit 2 Timer 4 reset
    uint32_t TIM5RST : 1; // bit 3 Timer 5 reset
    uint32_t TIM6RST : 1; // bit 4 Timer 6 reset
    uint32_t TIM7RST : 1; // bit 5 Timer 7 reset
    uint32_t TIM12RST : 1; // bit 6 Timer 12 reset
    uint32_t TIM13RST : 1; // bit 7 Timer 13 reset
    uint32_t TIM14RST : 1; // bit 8 Timer 14 reset
    uint32_t RESERVED0 : 1; // bit 9
    uint32_t RESERVED1 : 1; // bit 10
    uint32_t WWDGRST : 1; // bit 11 Window watchdog reset
    uint32_t RESERVED2 : 1; // bit 12
    uint32_t RESERVED3 : 1; // bit 13
    uint32_t SPI2RST : 1; // bit 14 SPI2 reset
    uint32_t SPI3RST : 1; // bit 15 SPI3 reset
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t USART2RST : 1; // bit 17 USART 2 reset
    uint32_t USART3RST : 1; // bit 18 USART 3 reset
    uint32_t UART4RST : 1; // bit 19 UART 4 reset
    uint32_t UART5RST : 1; // bit 20 UART 5 reset
    uint32_t I2C1RST : 1; // bit 21 I2C1 reset
    uint32_t I2C2RST : 1; // bit 22 I2C2 reset
    uint32_t USBRST : 1; // bit 23 USB reset
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t CANRST : 1; // bit 25 CAN reset
    uint32_t RESERVED6 : 1; // bit 26
    uint32_t BKPRST : 1; // bit 27 Backup interface reset
    uint32_t PWRRST : 1; // bit 28 Power interface reset
    uint32_t DACRST : 1; // bit 29 DAC interface reset
    uint32_t RESERVED7 : 1; // bit 30
    uint32_t RESERVED8 : 1; // bit 31
  } BITS;
} RCC_APB1RSTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DMA1EN : 1; // bit 0 DMA1 clock enable
    uint32_t DMA2EN : 1; // bit 1 DMA2 clock enable
    uint32_t SRAMEN : 1; // bit 2 SRAM interface clock enable
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t FLITFEN : 1; // bit 4 FLITF clock enable
    uint32_t RESERVED1 : 1; // bit 5
    uint32_t CRCEN : 1; // bit 6 CRC clock enable
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t FSMCEN : 1; // bit 8 FSMC clock enable
    uint32_t RESERVED3 : 1; // bit 9
    uint32_t SDIOEN : 1; // bit 10 SDIO clock enable
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
} RCC_AHBENR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t AFIOEN : 1; // bit 0 Alternate function I/O clock enable
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t IOPAEN : 1; // bit 2 I/O port A clock enable
    uint32_t IOPBEN : 1; // bit 3 I/O port B clock enable
    uint32_t IOPCEN : 1; // bit 4 I/O port C clock enable
    uint32_t IOPDEN : 1; // bit 5 I/O port D clock enable
    uint32_t IOPEEN : 1; // bit 6 I/O port E clock enable
    uint32_t IOPFEN : 1; // bit 7 I/O port F clock enable
    uint32_t IOPGEN : 1; // bit 8 I/O port G clock enable
    uint32_t ADC1EN : 1; // bit 9 ADC 1 interface clock enable
    uint32_t ADC2EN : 1; // bit 10 ADC 2 interface clock enable
    uint32_t TIM1EN : 1; // bit 11 TIM1 Timer clock enable
    uint32_t SPI1EN : 1; // bit 12 SPI 1 clock enable
    uint32_t TIM8EN : 1; // bit 13 TIM8 Timer clock enable
    uint32_t USART1EN : 1; // bit 14 USART1 clock enable
    uint32_t ADC3EN : 1; // bit 15 ADC3 interface clock enable
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t TIM9EN : 1; // bit 19 TIM9 Timer clock enable
    uint32_t TIM10EN : 1; // bit 20 TIM10 Timer clock enable
    uint32_t TIM11EN : 1; // bit 21 TIM11 Timer clock enable
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
} RCC_APB2ENR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t TIM2EN : 1; // bit 0 Timer 2 clock enable
    uint32_t TIM3EN : 1; // bit 1 Timer 3 clock enable
    uint32_t TIM4EN : 1; // bit 2 Timer 4 clock enable
    uint32_t TIM5EN : 1; // bit 3 Timer 5 clock enable
    uint32_t TIM6EN : 1; // bit 4 Timer 6 clock enable
    uint32_t TIM7EN : 1; // bit 5 Timer 7 clock enable
    uint32_t TIM12EN : 1; // bit 6 Timer 12 clock enable
    uint32_t TIM13EN : 1; // bit 7 Timer 13 clock enable
    uint32_t TIM14EN : 1; // bit 8 Timer 14 clock enable
    uint32_t RESERVED0 : 1; // bit 9
    uint32_t RESERVED1 : 1; // bit 10
    uint32_t WWDGEN : 1; // bit 11 Window watchdog clock enable
    uint32_t RESERVED2 : 1; // bit 12
    uint32_t RESERVED3 : 1; // bit 13
    uint32_t SPI2EN : 1; // bit 14 SPI 2 clock enable
    uint32_t SPI3EN : 1; // bit 15 SPI 3 clock enable
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t USART2EN : 1; // bit 17 USART 2 clock enable
    uint32_t USART3EN : 1; // bit 18 USART 3 clock enable
    uint32_t UART4EN : 1; // bit 19 UART 4 clock enable
    uint32_t UART5EN : 1; // bit 20 UART 5 clock enable
    uint32_t I2C1EN : 1; // bit 21 I2C 1 clock enable
    uint32_t I2C2EN : 1; // bit 22 I2C 2 clock enable
    uint32_t USBEN : 1; // bit 23 USB clock enable
    uint32_t RESERVED5 : 1; // bit 24
    uint32_t CANEN : 1; // bit 25 CAN clock enable
    uint32_t RESERVED6 : 1; // bit 26
    uint32_t BKPEN : 1; // bit 27 Backup interface clock enable
    uint32_t PWREN : 1; // bit 28 Power interface clock enable
    uint32_t DACEN : 1; // bit 29 DAC interface clock enable
    uint32_t RESERVED7 : 1; // bit 30
    uint32_t RESERVED8 : 1; // bit 31
  } BITS;
} RCC_APB1ENR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t LSEON : 1; // bit 0 External Low Speed oscillator enable
    uint32_t LSERDY : 1; // bit 1 External Low Speed oscillator ready
    uint32_t LSEBYP : 1; // bit 2 External Low Speed oscillator bypass
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t RESERVED3 : 1; // bit 6
    uint32_t RESERVED4 : 1; // bit 7
    uint32_t RTCSEL : 2; // bit 8 RTC clock source selection
    uint32_t RESERVED5 : 1; // bit 10
    uint32_t RESERVED6 : 1; // bit 11
    uint32_t RESERVED7 : 1; // bit 12
    uint32_t RESERVED8 : 1; // bit 13
    uint32_t RESERVED9 : 1; // bit 14
    uint32_t RTCEN : 1; // bit 15 RTC clock enable
    uint32_t BDRST : 1; // bit 16 Backup domain software reset
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
} RCC_BDCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t LSION : 1; // bit 0 Internal low speed oscillator enable
    uint32_t LSIRDY : 1; // bit 1 Internal low speed oscillator ready
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
    uint32_t RESERVED13 : 1; // bit 15
    uint32_t RESERVED14 : 1; // bit 16
    uint32_t RESERVED15 : 1; // bit 17
    uint32_t RESERVED16 : 1; // bit 18
    uint32_t RESERVED17 : 1; // bit 19
    uint32_t RESERVED18 : 1; // bit 20
    uint32_t RESERVED19 : 1; // bit 21
    uint32_t RESERVED20 : 1; // bit 22
    uint32_t RESERVED21 : 1; // bit 23
    uint32_t RMVF : 1; // bit 24 Remove reset flag
    uint32_t RESERVED22 : 1; // bit 25
    uint32_t PINRSTF : 1; // bit 26 PIN reset flag
    uint32_t PORRSTF : 1; // bit 27 POR/PDR reset flag
    uint32_t SFTRSTF : 1; // bit 28 Software reset flag
    uint32_t IWDGRSTF : 1; // bit 29 Independent watchdog reset flag
    uint32_t WWDGRSTF : 1; // bit 30 Window watchdog reset flag
    uint32_t LPWRRSTF : 1; // bit 31 Low-power reset flag
  } BITS;
} RCC_CSR_t;

typedef struct {
  RCC_CR_t CR;
  RCC_CFGR_t CFGR;
  RCC_CIR_t CIR;
  RCC_APB2RSTR_t APB2RSTR;
  RCC_APB1RSTR_t APB1RSTR;
  RCC_AHBENR_t AHBENR;
  RCC_APB2ENR_t APB2ENR;
  RCC_APB1ENR_t APB1ENR;
  RCC_BDCR_t BDCR;
  RCC_CSR_t CSR;
} RCC_t;

#define RCC_BASE (0x40021000UL)
#define RCC ((RCC_t *)RCC_BASE)

#define RCC_CRbits (RCC->CR.BITS)
#define RCC_CFGRbits (RCC->CFGR.BITS)
#define RCC_CIRbits (RCC->CIR.BITS)
#define RCC_APB2RSTRbits (RCC->APB2RSTR.BITS)
#define RCC_APB1RSTRbits (RCC->APB1RSTR.BITS)
#define RCC_AHBENRbits (RCC->AHBENR.BITS)
#define RCC_APB2ENRbits (RCC->APB2ENR.BITS)
#define RCC_APB1ENRbits (RCC->APB1ENR.BITS)
#define RCC_BDCRbits (RCC->BDCR.BITS)
#define RCC_CSRbits (RCC->CSR.BITS)

#endif // _RCC_H