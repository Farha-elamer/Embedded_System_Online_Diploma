/*

 * struct_q4.c
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
	struct student s [10] ;
	printf ("enter information of students: \n");

	for (int i =0 ; i <10 ; i++)
	{
		s[i].roll=i+1;
		printf("\n For roll number %d \n", s[i].roll);
		printf ("enter  name : ");
		fflush (stdin);
		fflush (stdout);
		scanf ("%s",& s[i].names);

		printf ("enter  marks : ");
		fflush (stdin);
		fflush (stdout);
		scanf ("%f",& s[i].marks);
		printf("\n");

	}



	printf ("Displaying  information of students: \n");

	for (int i =0 ; i <10 ; i++)
		{
			s[i].roll=i+1;
			printf("\n  information For roll number %d \n", i+1);
			printf (" name  : %s ", s[i].names);
			printf (" marks : %f ",s[i].marks);


		}
	return 0;
}



