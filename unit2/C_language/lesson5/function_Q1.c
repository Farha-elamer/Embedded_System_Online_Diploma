/*
 * function_Q1.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Farha
 */

#include "stdio.h"
int checkPrimeNumber(int number);
int main()
{
	int x ,y ,j  ,f ;
	printf (" Enter two numbers(intrvals)");
	fflush (stdin);
	fflush (stdout);
	scanf("%d %d " ,&x,&y);
	printf ("prime numbers between %d and %d are :  ", x , y  );
	for (j = x; j < y; ++j)
	    {
	       f = checkPrimeNumber(j);

	        if (f == 1)
	        {
	            printf("%d ", j);
	        }
	    }

	    return 0;
	}
int checkPrimeNumber(int number)
{
    int i, f = 1;
    for (i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
        {
            f = 0;
            break;
        }
    }

    return f;
}
