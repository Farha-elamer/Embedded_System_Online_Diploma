/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include "stdio.h"
void main ()
{
	int x ;
	printf("enter a number to check :");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&x);
	if (x%2 == 0)
		printf("%i is even",x);
	else
		printf("%i is odd",x);

}
