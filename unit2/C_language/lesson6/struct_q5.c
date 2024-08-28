/*

 * struct_q5.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Farha
 */
#include "stdio.h"
#define pi 3.14
#define area(r)((pi*r*r))
int main ()
{
	int radius;
	float  area;
	printf("Enter radius :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &radius);
	area =  area (radius);
	printf("Area=%f",area);

	return 0;
}
