/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */
#include "stdio.h"
void main ()
{
	float x,y,z;
	printf ("enter 3 numbers to check :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if (x > y)
	{
		if (x>z)
		{
			printf("the largest number is %f",x);
		}
		else
			{
				printf("the largest number is %f",z);
			}
	}

	else
	{
		printf("the largest number is %f",y);
	}


}

