# STM32 Bare Metal Blink – Bitfields vs CMSIS

This example illustrates the difference between two approaches to controlling GPIO on STM32 (e.g. STM32F103) by implementing a simple LED blink:

- Using SVD-based bitfield headers (generated via svd_parser.py)  
- Using standard CMSIS headers from ST  

The goal is to show how bitfield-style programming can improve code clarity and reduce errors compared to traditional CMSIS usage.

## Example 1 – Using CMSIS headers.


```c
#include "stm32f10x.h"

void delay(volatile unsigned int time)
{
    while (time--)
        for (volatile unsigned int i = 0; i < 1000; i++);
}

int main(void)
{
    // Enable GPIOA clock
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;

    // Set PA5 as output push-pull (2 MHz)
    GPIOA->CRL &= ~(GPIO_CRH_MODE13);     // Clear MODE5[1:0] and CNF5[1:0]
    GPIOA->CRL |=  (GPIO_CRH_MODE13_1);     // MODE5 = 10 (Output 2 MHz)
                                         // CNF5  = 00 (Push-pull)

    while (1)
    {
        GPIOA->ODR |= (GPIO_ODR_ODR5);         // Set PA5 high
        delay(500);

        GPIOA->ODR &= ~(GPIO_ODR_ODR5);         // Set PA5 low
        delay(500);
    }
}
```

---

## Example 2 – Using bitfield-based header files.



```c
#include "RCC.h"
#include "GPIOA.h"

void delay(volatile unsigned int time)
{
    while (time--)
        for (volatile unsigned int i = 0; i < 1000; i++);
}

void GPIOA_Init_PA5_Output(void)
{
    RCC_APB2ENRbits.IOPAEN = 1;         // Enable GPIOA clock

    GPIOA_CRLbits.MODE5 = 0b10;         // Output mode, 2 MHz
    GPIOA_CRLbits.CNF5  = 0b00;         // Push-pull
}

int main(void)
{
    GPIOA_Init_PA5_Output();

    while (1)
    {
        GPIOA_ODRbits.ODR5 = 1;         // Set PA5 high
        delay(500);

        GPIOA_ODRbits.ODR5 = 0;         // Set PA5 low
        delay(500);
    }
}
```

---


## 🔍 Why Bitfields?

### Readability & clarity

```c
RCC_APB2ENRbits.IOPAEN = 1;
```

is **much more intuitive** than:

```c
RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
```

You access the **named bit field** directly, without dealing with shifts or hex masks.

---

### Easier to debug

Using bitfields makes debugging easier — you see **individual named bits** in the debugger.

With manual `|=`, `&=~`, it's easy to make mistakes:
- Misplaced shift
- Wrong mask
- Unintended overwrite of neighboring bits

Bitfields help avoid these common issues.
