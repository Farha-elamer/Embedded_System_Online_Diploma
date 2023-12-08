/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include "stdio.h"
void main ()
{
	int num;

		printf("enter a number: ");
		fflush (stdin);
		fflush (stdout);
	    scanf("%i",&num);
	    if(num == 0)
	        printf("number is zero");
	    else if(num < 0)
	        printf(" %i is Negative",num);
	    else
	        printf(" %i is Positive", num);
}
