/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Farha
 */


#include "mem-map.h"
#include "utils.h"


void wait(unsigned int milliseconds) {
	for (unsigned int i = 0; i < milliseconds; i++)
	{
		for (unsigned int j = 0; j < 1000; j++);
	}
}

int main(void)
{
	// set PORTD IS INPUT  AND A output
	volatile unsigned char Button ;
	DDRA =0b11111111;
	ClrBit(DDRA,0);
	SetBit(PORTA,0);

    while (1)
    {
    	if ((ReadBit(PINA,0)== 0)
		{
			for(Button=0;Button<8;Button++)
			{
				SetBit(PORTA,Button);
				wait(500);
			}
		}

		while(Button)
		{
			Button--;
			ClrBit(PORTA,Button) ;
			wait(500);
		}


    }
	return 0 ;
}
