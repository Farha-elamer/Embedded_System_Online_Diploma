/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */
#include "stdio.h"
void main()
{
	int x , fact = 1;
	printf(" enter number:");
	fflush (stdin);
	fflush (stdout);
	scanf("%i",&x);
	if (x < 0)
	{
		printf("ERROR!!!factorial of negative number does not exist");
	}
	else
	{
	for (int i =1 ; i<= x ; i++)
	{
		fact *= i;
	}
	printf("factorial of %i is equal %i",x,fact);
	}
}
