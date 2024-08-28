/*

 * main.c
 *
 *  Created on: Aug 28, 2024
 *      Author: Farha
 */


#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"
unsigned int buffer1 [5];

int main ()
{
	int i , temp =0;
	LIFO_Buf_t Uart_lifo , I2c_lifo;
	//static allocation
	LIFO_init(&Uart_lifo ,buffer1,5);
	//dynamic allocation
	unsigned int *buffer2 =(unsigned int*)malloc (5*sizeof(unsigned int));
	LIFO_init(&I2c_lifo ,buffer2,5);
	for (i = 0; i<5 ;i++)
	{
		if (LIFO_Add_Item(&Uart_lifo, i) == LIFO_no_error)
				printf("LIFO ADD : %d\n",i);
	}
	for (i = 0; i<5 ;i++)
	{
		if (LIFO_Get_Item(&Uart_lifo, &temp) == LIFO_no_error)
				printf("LIFO GET : %d\n",temp);
	}

	return 0;
}
