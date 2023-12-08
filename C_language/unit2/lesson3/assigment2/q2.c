/*

 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */
#include "stdio.h"
void main ()
{
	char ch;
	printf("enter an alphapet to check:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	switch (ch)
	{
	case 'a' :
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' :
		printf ("%c is vowel",ch);
	break;
	default:
		printf("%c is constant",ch);

	}

}

