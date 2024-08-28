/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include "stdio.h"
void main()
{

	int x,y;
	printf("please enter first number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&x);

	printf("please enter second number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&y);
	// x=15 , y=10
	 x = x-y ;           //  x=5
     y = x+y ;          //  y=15
     x = y-x ;        // x=10
	printf(" after swaping the first number is %i\n",x);
	printf(" after swaping the second number is %i\n",y);
}
