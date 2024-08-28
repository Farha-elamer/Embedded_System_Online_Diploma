/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include "stdio.h"
void main()
{
	int x ,y , sum;
	printf(" Enter two numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&x);
	scanf("%i",&y);
	sum = x + y ;
	printf("the product of those two numbers is :%i" , sum);

}
