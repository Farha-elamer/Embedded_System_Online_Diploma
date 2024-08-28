/*

 * struct_q3.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Farha
 */
#include "stdio.h"

struct complex
{
	float real ;
	float imaginary;
}n1 ,n2 ,sum;


int main ()
{
	printf(" for 1st complex number\n");

	printf(" Enter real and imaginary respectively\n");
	fflush (stdin);
	fflush (stdout);
	scanf("%f%f",& n1.real , &n1.imaginary);

	printf(" for 2nd complex number\n");

	printf(" Enter real and imaginary respectively\n");
	fflush (stdin);
	fflush (stdout);
	scanf("%f%f",& n2.real ,& n2.imaginary);

	sum.real = n1.real+n2.real;
	sum.imaginary= n1.imaginary+n2.imaginary;

	printf ("sum=%f+%fi", sum.real,sum.imaginary);

	return 0 ;
}

