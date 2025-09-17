/**
 * @file    DMA2.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   DMA controller
 *
 * This header file provides register definitions and bitfield access
 * for the DMA2 peripheral of the STM32F103.
 */

#ifndef _DMA2_H
#define _DMA2_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t GIF1 : 1; // bit 0 Channel 1 Global interrupt flag
    uint32_t TCIF1 : 1; // bit 1 Channel 1 Transfer Complete flag
    uint32_t HTIF1 : 1; // bit 2 Channel 1 Half Transfer Complete flag
    uint32_t TEIF1 : 1; // bit 3 Channel 1 Transfer Error flag
    uint32_t GIF2 : 1; // bit 4 Channel 2 Global interrupt flag
    uint32_t TCIF2 : 1; // bit 5 Channel 2 Transfer Complete flag
    uint32_t HTIF2 : 1; // bit 6 Channel 2 Half Transfer Complete flag
    uint32_t TEIF2 : 1; // bit 7 Channel 2 Transfer Error flag
    uint32_t GIF3 : 1; // bit 8 Channel 3 Global interrupt flag
    uint32_t TCIF3 : 1; // bit 9 Channel 3 Transfer Complete flag
    uint32_t HTIF3 : 1; // bit 10 Channel 3 Half Transfer Complete flag
    uint32_t TEIF3 : 1; // bit 11 Channel 3 Transfer Error flag
    uint32_t GIF4 : 1; // bit 12 Channel 4 Global interrupt flag
    uint32_t TCIF4 : 1; // bit 13 Channel 4 Transfer Complete flag
    uint32_t HTIF4 : 1; // bit 14 Channel 4 Half Transfer Complete flag
    uint32_t TEIF4 : 1; // bit 15 Channel 4 Transfer Error flag
    uint32_t GIF5 : 1; // bit 16 Channel 5 Global interrupt flag
    uint32_t TCIF5 : 1; // bit 17 Channel 5 Transfer Complete flag
    uint32_t HTIF5 : 1; // bit 18 Channel 5 Half Transfer Complete flag
    uint32_t TEIF5 : 1; // bit 19 Channel 5 Transfer Error flag
    uint32_t GIF6 : 1; // bit 20 Channel 6 Global interrupt flag
    uint32_t TCIF6 : 1; // bit 21 Channel 6 Transfer Complete flag
    uint32_t HTIF6 : 1; // bit 22 Channel 6 Half Transfer Complete flag
    uint32_t TEIF6 : 1; // bit 23 Channel 6 Transfer Error flag
    uint32_t GIF7 : 1; // bit 24 Channel 7 Global interrupt flag
    uint32_t TCIF7 : 1; // bit 25 Channel 7 Transfer Complete flag
    uint32_t HTIF7 : 1; // bit 26 Channel 7 Half Transfer Complete flag
    uint32_t TEIF7 : 1; // bit 27 Channel 7 Transfer Error flag
    uint32_t RESERVED0 : 1; // bit 28
    uint32_t RESERVED1 : 1; // bit 29
    uint32_t RESERVED2 : 1; // bit 30
    uint32_t RESERVED3 : 1; // bit 31
  } BITS;
} DMA2_ISR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CGIF1 : 1; // bit 0 Channel 1 Global interrupt clear
    uint32_t CTCIF1 : 1; // bit 1 Channel 1 Transfer Complete clear
    uint32_t CHTIF1 : 1; // bit 2 Channel 1 Half Transfer clear
    uint32_t CTEIF1 : 1; // bit 3 Channel 1 Transfer Error clear
    uint32_t CGIF2 : 1; // bit 4 Channel 2 Global interrupt clear
    uint32_t CTCIF2 : 1; // bit 5 Channel 2 Transfer Complete clear
    uint32_t CHTIF2 : 1; // bit 6 Channel 2 Half Transfer clear
    uint32_t CTEIF2 : 1; // bit 7 Channel 2 Transfer Error clear
    uint32_t CGIF3 : 1; // bit 8 Channel 3 Global interrupt clear
    uint32_t CTCIF3 : 1; // bit 9 Channel 3 Transfer Complete clear
    uint32_t CHTIF3 : 1; // bit 10 Channel 3 Half Transfer clear
    uint32_t CTEIF3 : 1; // bit 11 Channel 3 Transfer Error clear
    uint32_t CGIF4 : 1; // bit 12 Channel 4 Global interrupt clear
    uint32_t CTCIF4 : 1; // bit 13 Channel 4 Transfer Complete clear
    uint32_t CHTIF4 : 1; // bit 14 Channel 4 Half Transfer clear
    uint32_t CTEIF4 : 1; // bit 15 Channel 4 Transfer Error clear
    uint32_t CGIF5 : 1; // bit 16 Channel 5 Global interrupt clear
    uint32_t CTCIF5 : 1; // bit 17 Channel 5 Transfer Complete clear
    uint32_t CHTIF5 : 1; // bit 18 Channel 5 Half Transfer clear
    uint32_t CTEIF5 : 1; // bit 19 Channel 5 Transfer Error clear
    uint32_t CGIF6 : 1; // bit 20 Channel 6 Global interrupt clear
    uint32_t CTCIF6 : 1; // bit 21 Channel 6 Transfer Complete clear
    uint32_t CHTIF6 : 1; // bit 22 Channel 6 Half Transfer clear
    uint32_t CTEIF6 : 1; // bit 23 Channel 6 Transfer Error clear
    uint32_t CGIF7 : 1; // bit 24 Channel 7 Global interrupt clear
    uint32_t CTCIF7 : 1; // bit 25 Channel 7 Transfer Complete clear
    uint32_t CHTIF7 : 1; // bit 26 Channel 7 Half Transfer clear
    uint32_t CTEIF7 : 1; // bit 27 Channel 7 Transfer Error clear
    uint32_t RESERVED0 : 1; // bit 28
    uint32_t RESERVED1 : 1; // bit 29
    uint32_t RESERVED2 : 1; // bit 30
    uint32_t RESERVED3 : 1; // bit 31
  } BITS;
} DMA2_IFCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t EN : 1; // bit 0 Channel enable
    uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    uint32_t DIR : 1; // bit 4 Data transfer direction
    uint32_t CIRC : 1; // bit 5 Circular mode
    uint32_t PINC : 1; // bit 6 Peripheral increment mode
    uint32_t MINC : 1; // bit 7 Memory increment mode
    uint32_t PSIZE : 2; // bit 8 Peripheral size
    uint32_t MSIZE : 2; // bit 10 Memory size
    uint32_t PL : 2; // bit 12 Channel Priority level
    uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    uint32_t RESERVED0 : 1; // bit 15
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
} DMA2_CCR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA2_CNDTR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA2_CPAR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA2_CMAR7_t;

typedef struct {
  DMA2_ISR_t ISR;
  DMA2_IFCR_t IFCR;
  DMA2_CCR1_t CCR1;
  DMA2_CNDTR1_t CNDTR1;
  DMA2_CPAR1_t CPAR1;
  DMA2_CMAR1_t CMAR1;
  DMA2_CCR2_t CCR2;
  DMA2_CNDTR2_t CNDTR2;
  DMA2_CPAR2_t CPAR2;
  DMA2_CMAR2_t CMAR2;
  DMA2_CCR3_t CCR3;
  DMA2_CNDTR3_t CNDTR3;
  DMA2_CPAR3_t CPAR3;
  DMA2_CMAR3_t CMAR3;
  DMA2_CCR4_t CCR4;
  DMA2_CNDTR4_t CNDTR4;
  DMA2_CPAR4_t CPAR4;
  DMA2_CMAR4_t CMAR4;
  DMA2_CCR5_t CCR5;
  DMA2_CNDTR5_t CNDTR5;
  DMA2_CPAR5_t CPAR5;
  DMA2_CMAR5_t CMAR5;
  DMA2_CCR6_t CCR6;
  DMA2_CNDTR6_t CNDTR6;
  DMA2_CPAR6_t CPAR6;
  DMA2_CMAR6_t CMAR6;
  DMA2_CCR7_t CCR7;
  DMA2_CNDTR7_t CNDTR7;
  DMA2_CPAR7_t CPAR7;
  DMA2_CMAR7_t CMAR7;
} DMA2_t;

#define DMA2_BASE (0x40020400UL)
#define DMA2 ((DMA2_t *)DMA2_BASE)

#define DMA2_ISRbits (DMA2->ISR.BITS)
#define DMA2_IFCRbits (DMA2->IFCR.BITS)
#define DMA2_CCR1bits (DMA2->CCR1.BITS)
#define DMA2_CNDTR1bits (DMA2->CNDTR1.BITS)
#define DMA2_CPAR1bits (DMA2->CPAR1.BITS)
#define DMA2_CMAR1bits (DMA2->CMAR1.BITS)
#define DMA2_CCR2bits (DMA2->CCR2.BITS)
#define DMA2_CNDTR2bits (DMA2->CNDTR2.BITS)
#define DMA2_CPAR2bits (DMA2->CPAR2.BITS)
#define DMA2_CMAR2bits (DMA2->CMAR2.BITS)
#define DMA2_CCR3bits (DMA2->CCR3.BITS)
#define DMA2_CNDTR3bits (DMA2->CNDTR3.BITS)
#define DMA2_CPAR3bits (DMA2->CPAR3.BITS)
#define DMA2_CMAR3bits (DMA2->CMAR3.BITS)
#define DMA2_CCR4bits (DMA2->CCR4.BITS)
#define DMA2_CNDTR4bits (DMA2->CNDTR4.BITS)
#define DMA2_CPAR4bits (DMA2->CPAR4.BITS)
#define DMA2_CMAR4bits (DMA2->CMAR4.BITS)
#define DMA2_CCR5bits (DMA2->CCR5.BITS)
#define DMA2_CNDTR5bits (DMA2->CNDTR5.BITS)
#define DMA2_CPAR5bits (DMA2->CPAR5.BITS)
#define DMA2_CMAR5bits (DMA2->CMAR5.BITS)
#define DMA2_CCR6bits (DMA2->CCR6.BITS)
#define DMA2_CNDTR6bits (DMA2->CNDTR6.BITS)
#define DMA2_CPAR6bits (DMA2->CPAR6.BITS)
#define DMA2_CMAR6bits (DMA2->CMAR6.BITS)
#define DMA2_CCR7bits (DMA2->CCR7.BITS)
#define DMA2_CNDTR7bits (DMA2->CNDTR7.BITS)
#define DMA2_CPAR7bits (DMA2->CPAR7.BITS)
#define DMA2_CMAR7bits (DMA2->CMAR7.BITS)

#endif // _DMA2_H