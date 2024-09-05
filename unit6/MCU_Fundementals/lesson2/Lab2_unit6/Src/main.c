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


  ;


// Registers addresses

// RCC
#define RCC_BASE     0x40021000
#define RCC_APB2ENR    *(volatile unsigned int *)(RCC_BASE + 0x18)

// GPIO
#define GPIOA_BASE   0x40010800
#define GPIOA_CRH    *(volatile unsigned int *)(GPIOA_BASE + 0x04)
#define GPIOA_CRL    *(volatile unsigned int *)(GPIOA_BASE + 0x00)
#define GPIOA_ODR    *(volatile unsigned int *)(GPIOA_BASE + 0x0C)

// EXTI
#define EXTI_BASE     0x40010400
#define EXTI_IMR      *(volatile unsigned int *)(EXTI_BASE + 0x00)
#define EXTI_RTSR    *(volatile unsigned int *)(EXTI_BASE + 0x08)
#define EXTI_PR      *(volatile unsigned int *)(EXTI_BASE + 0x14)

// AFIO
#define AFIO_BASE 		0x40010000
#define AFIO_EXTICR1    *(volatile unsigned int *)(AFIO_BASE + 0x08)
#define NVIC_EXTIE0    *(volatile unsigned int *)(0xE000E100)



void clock_init()
{
	// Enable clock for GPIOA
	RCC_APB2ENR |= (1<<2);
	// Enable clock for AFIOA
	RCC_APB2ENR |= (1<<0);
	// Enable Rising trigger
	EXTI_RTSR |= (1<<0);
}

void GPIO_init()
{
	// Pin 13 in portA  output
	GPIOA_CRH &= 0xff0fffff;   // To keep the status of other bytes
	GPIOA_CRH |= 0x00200000;


	// PinA0 input floating
	GPIOA_CRL |= (1<<2);
}


int main(void)
{
	clock_init();
	GPIO_init();


	// EXTI0 Configuration for PORTA0
	AFIO_EXTICR1 = 0x00;

	// Enable EXTI Line0 (Mask 1)
	EXTI_IMR |= (1<<0);

	// Enable NVIC Irq6 <<>> EXTI0
	NVIC_EXTIE0 |= (1<<6);

	while(1)
	{

	}

}


void EXTI0_IRQHandler(void)
{
	// IRQ has happened EXTI0 >> PORTA0 ( Rising edge )
	// Toggle LED Pin A 13
	GPIOA_ODR ^= (1<<13);

	// Clear pending request for line 0
	EXTI_PR |= (1<<0);
}
