/*

 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include<stdio.h>

int main()

{
	float a,b,res;
	char c;
	printf ("Enter an operator ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	printf (" Enter two numbers :");
	fflush(stdin);
	fflush(stdout);
	scanf ("%f %f",&a, &b);
	switch(c)
	{
	case '+':
		res=a+b;
		printf(" %f+%f= %f",a,b,res);
		break;

	case '-':
		res=a-b;
		printf(" %f-%f= %f",a,b,res);
		break;

	case '*': res=a*b;
	printf(" %f*%f= %f",a,b,res);
	break;

	case '/': res=a/b;
	printf(" %f/%f= %f",a,b,res);
	break;

	default: printf (" Invalid operator");
	}


}
