/*

 * finction_q4.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Farha
 */
#include "stdio.h"
int power (int x, int y);
int main ()
{
	int base ,exp;
	printf("Enter base number :");
	fflush (stdin);
	fflush (stdout);
	scanf("%d",&base);
	printf("Enter power number :");
	fflush (stdin);
	fflush (stdout);
	scanf("%d",&exp);
	printf("%d ^%d =% d",base , exp, power(base,exp));
}
int power (int base, int exp)
{
	if (exp != 0)
		return (base *power(base, exp-1));
	else
		return 1;
}
