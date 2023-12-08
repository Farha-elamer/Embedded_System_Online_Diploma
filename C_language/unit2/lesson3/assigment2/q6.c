/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include "stdio.h"
void main ()
{
	int N , sum = 0 ;
	printf("enter a number :");
	fflush (stdin);
	fflush (stdout);
	scanf("%i",&N);
	for(int i =1 ; i <= 100 ;i++)
	{
		sum +=i;
	}
	printf("sum = %i",sum);
}
