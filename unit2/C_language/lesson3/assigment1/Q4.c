/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include "stdio.h"
void main()
{
	float x ,y , product;
	printf(" Enter two numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	product = x*y ;
	printf("the product of those two numbers is :%f " , product);

}
