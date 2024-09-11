/*

 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Farha
 */
#include "mem-map.h"
#include "utils.h"


void wait(unsigned int milliseconds) {
	for (unsigned int i = 0; i < milliseconds; i++) {
		for (unsigned int j = 0; j < 1000; j++) {

		}
	}
}

int main(void)
{
	DDRA = 0xff;
    /* Replace with your application code */
    while (1)
    {
		SetBit(PORTA,5);
		wait(1000);
		SetBit(PORTA,6);
		wait(1000);
		SetBit(PORTA,7);
		wait(1000);
		ClrBit(PORTA,7);
		wait(1000);
		ClrBit(PORTA,6);
		wait(1000);
		ClrBit(PORTA,5);
		wait(1000);
    }
}
