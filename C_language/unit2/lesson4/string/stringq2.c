/*

 * stringq2.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Farha
 */

#include "stdio.h"
#include <string.h>
int main ()
{
	char string[1000] ;
    char i;// sum =0;
	printf("Enter a string \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",&string);
	for( i=0; string[i] != '/0'; ++i);
	printf("Length of string = %d",i);

return 0 ;
}
