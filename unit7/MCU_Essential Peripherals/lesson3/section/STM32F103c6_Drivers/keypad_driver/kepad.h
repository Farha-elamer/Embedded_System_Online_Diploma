/*
 * kepad.h
 *
 *  Created on: Sep 20, 2024
 *      Author: Farha
 */

#ifndef KEYPAD_DRIVER_KEPAD_H_
#define KEYPAD_DRIVER_KEPAD_H_

#include "stm32f103x6.h"
#include "STM32F103C6_GPIO_DRIVER.h"

#define KEYPAD_PORT GPIOB


#define R0 GPIO_PIN_0
#define R1 GPIO_PIN_1
#define R2 GPIO_PIN_3
#define R3 GPIO_PIN_4
#define C0 GPIO_PIN_5
#define C1 GPIO_PIN_6
#define C2 GPIO_PIN_7
#define C3 GPIO_PIN_8


void Keypad_init();
char Keypad_getkey();


#endif /* KEYPAD_DRIVER_KEPAD_H_ */
