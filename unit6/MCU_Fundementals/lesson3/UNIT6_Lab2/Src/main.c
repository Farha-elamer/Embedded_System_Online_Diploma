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
//Learn-in-depth
//Keroles Shenouda
//Mastering_Embedded System online diploma
typedef volatile unsigned int vuint32_t ;
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#define RCC_BASE 0x40021000
#define RCC_CFGR *(volatile uint32_t *) (RCC_BASE + 0x04)
void clock_init() {
// Bits 10:8 PPRE1: APB low-speed prescaler (APB1)
// Set and cleared by software to control the division factor of the APB low-speed clock
// (PCLK1).
// Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain.
// 0xx: HCLK not divided
// 100: HCLK divided by 2
// 101: HCLK divided by 4
// 110: HCLK divided by 8
// 111: HCLK divided by 16 RCC_CFGR = (0b100 << 8);
// Bits 13:11 PPRE2: APB high-speed prescaler (AP82)
// Set and cleared by software to control the division factor of the APB high-speed clock
// (PCLK2).
// exx: HCLK not divided
// 100: HCLK divided by 2
// 101: HCLK divided by 4
// 116: HCLK divided by s
// 111: HCLK divided by 16
RCC_CFGR = (0b101 << 11);
}
int main(void)
{
clock_init();
while(1)
	{

	}
}
