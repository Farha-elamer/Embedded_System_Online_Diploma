/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


typedef volatile unsigned int vuint32_t;


// Registers addresses

// RCC
#define RCC_BASE       0x40021000
#define RCC_APB2ENR    *(vuint32_t *)(RCC_BASE + 0x18)

// GPIO
#define GPIOA_BASE   0x40010800
#define GPIOA_CRH    *(vuint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_CRL    *(vuint32_t *)(GPIOA_BASE + 0x00)
#define GPIOA_ODR    *(vuint32_t *)(GPIOA_BASE + 0x0C)
#define GPIOA_IDR    *(vuint32_t *)(GPIOA_BASE + 0x08)


#define GPIOB_BASE   0x40010C00
#define GPIOB_CRH    *(vuint32_t *)(GPIOB_BASE + 0x04)
#define GPIOB_CRL    *(vuint32_t *)(GPIOB_BASE + 0x00)
#define GPIOB_ODR    *(vuint32_t *)(GPIOB_BASE + 0x0C)
#define GPIOB_IDR    *(vuint32_t *)(GPIOB_BASE + 0x08)


void clock_init()
{
	// Enable clock for GPIOA (bit 2)
	RCC_APB2ENR |= (1<<2);
	// Enable clock for GPIOB (bit 3)
	RCC_APB2ENR |= (1<<3);

}

void GPIO_init()
{
	// To just make it by mySelf
	GPIOA_CRL = 0x00;
	GPIOB_CRL = 0x00;
	GPIOA_CRH = 0x00;
	GPIOB_CRH = 0x00;
	// PA1 input High Z (Floating)
	GPIOA_CRL |= (1<<6);
	GPIOA_CRL &= ~(1<<7);

	// PB1 output push pull mode
	// CNF:00
	GPIOB_CRL &= ~(0b11 << 6);
	// 01: Max speed 10 MHZ
	GPIOB_CRL |= (0b01 << 4);

	// PA13 input High Z (Floating)
	GPIOA_CRH &= ~(0b11 << 20);
	GPIOA_CRH |= (0b01 << 22);

	// PB13 output push pull mode
	GPIOB_CRH |= (0b01 << 20);
	GPIOB_CRH &= ~(0b11 << 22);

}


void my_wait(int x){
	unsigned int i,j;
	for(i=0;i<=x;i++)
		for(j=0;j<=255;j++);

}


int main(void)
{
	clock_init();
	GPIO_init();

	while(1)
	{
		// PA1 >> Connected to external pull up resistance
		if(((GPIOA_IDR & 1<<1) >> 1) == 0){  // Press
			GPIOB_ODR ^= 1<<1;
			while(((GPIOA_IDR & 1<<1) >> 1) == 0);   // Single Press
		}

		// PA13 >> Connected to external pull down resistance
		if(((GPIOA_IDR & 1<<13) >> 13) == 1){  // Multiple Pressing
			GPIOB_ODR ^= 1<<13;
			my_wait(1);
		}




	}

}
