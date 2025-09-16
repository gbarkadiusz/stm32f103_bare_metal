/**
 * @file    rcc.h
 * @author  Adam Cholewinski
 * @date    2025-09-16
 * @brief   RCC register library for STM32F103C8
 *
 * This header file provides register definitions and utilities
 * for configuring and controlling the Reset and Clock Control (RCC)
 * peripheral of the STM32F103C8 microcontroller.
 */

#ifndef _RCC_H
#define _RCC_H

#include "def.h"

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t HSION : 1;
        uint32_t HSIRDY : 1;
        uint32_t RESERVED0 : 1;
        uint32_t HSITRIM : 5;
        uint32_t HSICAL : 7;
        uint32_t HSEON : 1;
        uint32_t HSERD : 1;
        uint32_t HSEBYP : 1;
        uint32_t CSSON : 1;
        uint32_t RESERVED1 : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t RESERVED4 : 1;
        uint32_t PLLON : 1;
        uint32_t PLLRDY : 1;
        uint32_t RESERVED5 : 1;
        uint32_t RESERVED6 : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
        uint32_t RESERVED9 : 1;
        uint32_t RESERVED10 : 1;
        uint32_t RESERVED11 : 1;
    } BITS;
} RCC_CR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t SW : 2;
        uint32_t SWS : 2;
        uint32_t HPRE : 4;
        uint32_t PPRE : 3;
        uint32_t PPRE2 : 3;
        uint32_t ADCPRE : 2;
        uint32_t PLLSRC : 1;
        uint32_t PLLXTPRE : 1;
        uint32_t PLLMUL : 4;
        uint32_t USBPRE : 1;
        uint32_t RESERVED0 : 1;
        uint32_t MCO : 3;
        uint32_t RESERVED1 : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t RESERVED4 : 1;
        uint32_t RESERVED5 : 1;
    } BITS;
} RCC_CFGR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t LSIRDYF : 1;
        uint32_t LSERDYF : 1;
        uint32_t HSIRDYF : 1;
        uint32_t HSERDYF : 1;
        uint32_t PLLRDYF : 1;
        uint32_t RESEREVED0 : 1;
        uint32_t RESEREVED1 : 1;
        uint32_t CCSF : 1;
        uint32_t LSIRDYIE : 1;
        uint32_t LSERDYIE : 1;
        uint32_t HSIRDYIE : 1;
        uint32_t HSERDYIE : 1;
        uint32_t PLLRDYIE : 1;
        uint32_t RESEREVED2 : 1;
        uint32_t RESEREVED3 : 1;
        uint32_t RESEREVED4 : 1;
        uint32_t LSIRDYC : 1;
        uint32_t LSERDYC : 1;
        uint32_t HSIRDYC : 1;
        uint32_t HSERDYC : 1;
        uint32_t PLLRDYC : 1;
        uint32_t RESEREVED5 : 1;
        uint32_t RESEREVED6 : 1;
        uint32_t CSSC : 1;
        uint32_t RESEREVED7 : 1;
        uint32_t RESEREVED8 : 1;
        uint32_t RESEREVED9 : 1;
        uint32_t RESEREVED10 : 1;
        uint32_t RESEREVED11 : 1;
        uint32_t RESEREVED12 : 1;
        uint32_t RESEREVED13 : 1;
        uint32_t RESEREVED14 : 1;
    } BITS;
} RCC_CIR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t AFIO_RST : 1;
        uint32_t RESERVED0 : 1;
        uint32_t IOPA_RST : 1;
        uint32_t IOPB_RST : 1;
        uint32_t IOPC_RST : 1;
        uint32_t IOPD_RST : 1;
        uint32_t IOPE_RST : 1;
        uint32_t IOPF_RST : 1;
        uint32_t IOPG_RST : 1;
        uint32_t ADC1_RST : 1;
        uint32_t ADC2_RST : 1;
        uint32_t TIM1_RST : 1;
        uint32_t SPI1_RST : 1;
        uint32_t TIM8_RST : 1;
        uint32_t USART1_RST : 1;
        uint32_t ADC3_RST : 1;
        uint32_t RESERVED1 : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t TIM9_RST : 1;
        uint32_t TIM10_RST : 1;
        uint32_t TIM11_RST : 1;
        uint32_t RESERVED4 : 1;
        uint32_t RESERVED5 : 1;
        uint32_t RESERVED6 : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
        uint32_t RESERVED9 : 1;
        uint32_t RESERVED10 : 1;
        uint32_t RESERVED11 : 1;
        uint32_t RESERVED12 : 1;
        uint32_t RESERVED13 : 1;
    } BITS;

} RCC_APB2RSTR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t TIM2_RST : 1;
        uint32_t TIM3_RST : 1;
        uint32_t TIM4_RST : 1;
        uint32_t TIM5_RST : 1;
        uint32_t TIM6_RST : 1;
        uint32_t TIM7_RST : 1;
        uint32_t TIM12_RST : 1;
        uint32_t TIM13_RST : 1;
        uint32_t TIM14_RST : 1;
        uint32_t RESERVED0 : 1;
        uint32_t RESERVED1 : 1;
        uint32_t WWDG_RST : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t SPI2_RST : 1;
        uint32_t SPI3_RST : 1;
        uint32_t RESERVED4 : 1;
        uint32_t USART2_RST : 1;
        uint32_t USART3_RST : 1;
        uint32_t USART4_RST : 1;
        uint32_t USART5_RST : 1;
        uint32_t I2C1_RST : 1;
        uint32_t I2C2_RST : 1;
        uint32_t USB_RST : 1;
        uint32_t RESERVED5 : 1;
        uint32_t CAN_RST : 1;
        uint32_t RESERVED6 : 1;
        uint32_t BKP_RST : 1;
        uint32_t PWR_RST : 1;
        uint32_t DAC_RST : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
    } BITS;
} RCC_APB1RSTR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t DMA1EN : 1;
        uint32_t DMA2EN : 1;
        uint32_t SRAMEN : 1;
        uint32_t RESERVED0 : 1;
        uint32_t FLITFEN : 1;
        uint32_t RESERVED1 : 1;
        uint32_t CRCEN : 1;
        uint32_t RESERVED2 : 1;
        uint32_t FSMCEN : 1;
        uint32_t RESERVED3 : 1;
        uint32_t SDIOEN : 1;
        uint32_t RESERVED4 : 1;
        uint32_t RESERVED5 : 1;
        uint32_t RESERVED6 : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
        uint32_t RESERVED9 : 1;
        uint32_t RESERVED10 : 1;
        uint32_t RESERVED11 : 1;
        uint32_t RESERVED12 : 1;
        uint32_t RESERVED13 : 1;
        uint32_t RESERVED14 : 1;
        uint32_t RESERVED15 : 1;
        uint32_t RESERVED16 : 1;
        uint32_t RESERVED17 : 1;
        uint32_t RESERVED18 : 1;
        uint32_t RESERVED19 : 1;
        uint32_t RESERVED20 : 1;
        uint32_t RESERVED21 : 1;
        uint32_t RESERVED22 : 1;
        uint32_t RESERVED23 : 1;
        uint32_t RESERVED24 : 1;
    } BITS;
} RCC_AHBENR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t AFIOEN : 1;
        uint32_t RESERVED0 : 1;
        uint32_t IOPAEN : 1;
        uint32_t IOPBEN : 1;
        uint32_t IOPCEN : 1;
        uint32_t IOPDEN : 1;
        uint32_t IOPEEN : 1;
        uint32_t IOPFEN : 1;
        uint32_t IOPGEN : 1;
        uint32_t ADC1EN : 1;
        uint32_t ADC2EN : 1;
        uint32_t TIM1EN : 1;
        uint32_t SPI1EN : 1;
        uint32_t TIM8EN : 1;
        uint32_t USART1EN : 1;
        uint32_t ADC3EN : 1;
        uint32_t RESERVED1 : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t TIM9EN : 1;
        uint32_t TIM10EN : 1;
        uint32_t TIM11EN : 1;
        uint32_t RESERVED4 : 1;
        uint32_t RESERVED5 : 1;
        uint32_t RESERVED6 : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
        uint32_t RESERVED9 : 1;
        uint32_t RESERVED10 : 1;
        uint32_t RESERVED11 : 1;
        uint32_t RESERVED12 : 1;
        uint32_t RESERVED13 : 1;
    } BITS;
} RCC_APB2ENR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t TIM2EN : 1;
        uint32_t TIM3EN : 1;
        uint32_t TIM4EN : 1;
        uint32_t TIM5EN : 1;
        uint32_t TIM6EN : 1;
        uint32_t TIM7EN : 1;
        uint32_t TIM12EN : 1;
        uint32_t TIM13EN : 1;
        uint32_t TIM14EN : 1;
        uint32_t RESERVED0 : 1;
        uint32_t RESERVED1 : 1;
        uint32_t WWDGEN : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t SPI2EN : 1;
        uint32_t SPI3EN : 1;
        uint32_t RESERVED4 : 1;
        uint32_t USART2EN : 1;
        uint32_t USART3EN : 1;
        uint32_t USART4EN : 1;
        uint32_t USART5EN : 1;
        uint32_t I2C1EN : 1;
        uint32_t I2C2EN : 1;
        uint32_t USBEN : 1;
        uint32_t RESERVED5 : 1;
        uint32_t CANEN : 1;
        uint32_t RESERVED6 : 1;
        uint32_t BKPEN : 1;
        uint32_t PWREN : 1;
        uint32_t DACEN : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;

    } BITS;
} RCC_APB1ENR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t LSEON : 1;
        uint32_t LSERDY : 1;
        uint32_t LSEBYP : 1;
        uint32_t RESERVED0 : 1;
        uint32_t RESERVED1 : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t RESERVED4 : 1;
        uint32_t RTCSEL : 2;
        uint32_t RESERVED5 : 1;
        uint32_t RESERVED6 : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
        uint32_t RESERVED9 : 1;
        uint32_t RTCEN : 1;
        uint32_t BDRST : 1;
        uint32_t RESERVED10 : 1;
        uint32_t RESERVED11 : 1;
        uint32_t RESERVED12 : 1;
        uint32_t RESERVED13 : 1;
        uint32_t RESERVED14 : 1;
        uint32_t RESERVED15 : 1;
        uint32_t RESERVED16 : 1;
        uint32_t RESERVED17 : 1;
        uint32_t RESERVED18 : 1;
        uint32_t RESERVED19 : 1;
        uint32_t RESERVED20 : 1;
        uint32_t RESERVED21 : 1;
        uint32_t RESERVED22 : 1;
        uint32_t RESERVED23 : 1;
        uint32_t RESERVED24 : 1;
    } BITS;
} RCC_BDCR_t;

typedef union
{
    volatile uint32_t REG;
    struct
    {
        uint32_t LSION : 1;
        uint32_t LSIRDY : 1;
        uint32_t RESERVED0 : 1;
        uint32_t RESERVED1 : 1;
        uint32_t RESERVED2 : 1;
        uint32_t RESERVED3 : 1;
        uint32_t RESERVED4 : 1;
        uint32_t RESERVED5 : 1;
        uint32_t RESERVED6 : 1;
        uint32_t RESERVED7 : 1;
        uint32_t RESERVED8 : 1;
        uint32_t RESERVED9 : 1;
        uint32_t RESERVED10 : 1;
        uint32_t RESERVED11 : 1;
        uint32_t RESERVED12 : 1;
        uint32_t RESERVED13 : 1;
        uint32_t RESERVED14 : 1;
        uint32_t RESERVED15 : 1;
        uint32_t RESERVED16 : 1;
        uint32_t RESERVED17 : 1;
        uint32_t RESERVED18 : 1;
        uint32_t RESERVED19 : 1;
        uint32_t RESERVED20 : 1;
        uint32_t RESERVED21 : 1;
        uint32_t RMVF : 1;
        uint32_t RESERVED : 1;
        uint32_t PINRSTF : 1;
        uint32_t PORRSTF : 1;
        uint32_t SFTRSTF : 1;
        uint32_t IWDGRSTF : 1;
        uint32_t WWDGRSTF : 1;
        uint32_t LPWRRSTF : 1;

    } BITS;
} RCC_CSR_t;

typedef struct
{
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
#define RCC_APB2ENbits (RCC->APB2ENR.BITS)
#define RCC_APB1ENbits (RCC->APB1ENR.BITS)
#define RCC_BDCRbits (RCC->BDCR.BITS)
#define RCC_CSRbits (RCC->CSR.BITS)

#endif