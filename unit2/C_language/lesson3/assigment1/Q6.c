/*

* main.c
*
*  Created on: Dec 8, 2023
*      Author: Farha
*/
#include "stdio.h"
void main()
{
	float x,y,temp;
	printf("please enter first number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);

	printf("please enter second number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&y);

	temp =x;
	x=y;
	y=temp;
	printf(" after swaping the first number is %f\n",x);
	printf(" after swaping the second number is %f\n",y);
}
