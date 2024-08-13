/*

 * struct_q2.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Farha
 */

#include "stdio.h"
struct distance
{
	 int feet;
	 float inch ;
};
int main()
{
	struct distance d1 ,d2 ,sum;
	printf ("enter information for 1st distance: \n");

	printf ("enter  feet : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",& d1.feet);

	printf ("enter  inch  : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f",& d1.inch);

	printf ("enter information for 2nd distance: \n");

	printf ("enter  feet : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",& d2.feet);

	printf ("enter  inch : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f",& d2.inch);

	sum.feet = d1.feet+d2.feet;
	sum.inch = d1.inch+d2.inch;

	while (sum.inch >= 12.0)
		{
	      sum.inch = sum.inch - 12.0;
	      ++sum.feet;
	   }
	   printf("\nSum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
	   return 0;
	return 0;
}


