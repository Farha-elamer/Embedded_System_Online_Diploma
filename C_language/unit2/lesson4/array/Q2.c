/*

 * Q2.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Farha
 */


#include "stdio.h"
void main ()
{
	int n;
	printf("Enter the numbers of data: %d",n);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(int i = 0; i<n ;i++)
	{
		printf("%d.Enter Number: %d ", i ,a[i] );
		fflush(stdin);
		fflush(stdout);
		scanf("%d  ",&a[i]);
		sum += a[i];

	}
	int average =0;
	average = sum/2;
	printf( "Average = %d ", average);
return 0;
}
