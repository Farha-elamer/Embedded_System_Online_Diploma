/*

 * pointer_q2.c
 *
 *  Created on: Aug 15, 2024
 *      Author: Farha
 */
#include "stdio.h"
int main()
{
	char c[27];
	char *ptr;
	ptr =c;
	for (int i=0;i<26;i++)
	{
		*ptr = i+'A';
		ptr++;
	}
	ptr =c;
	printf("The Alphabets are :\n");
	for (int i =0;i<26;i++)
	{
		printf("%c ",*ptr);
		ptr++;
	}

	return 0;
}

