/*

 * struct_q1.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Farha
 */
#include "stdio.h"
struct student
{
	 char names [50];
	 int roll ;
	 float marks ;
};
int main()
{
	struct student s ;
	printf ("enter information of students: \n");

	printf ("enter  name : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%s",& s.names);

	printf ("enter  roll  : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",& s.roll);

	printf ("enter  marks : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f",& s.marks);

	printf ("Displaying  information of students: \n");
	printf ("Name is:%s\n ", s.names);
	printf ("roll is:%d\n", s.roll);
	printf ("Marks:.2%f\n ", s.marks);
	return 0;
}

