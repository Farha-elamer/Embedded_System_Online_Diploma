/*

 * pointer_q1.c
 *
 *  Created on: Aug 15, 2024
 *      Author: Farha
 */
#include "stdio.h"
int main ()
{
int *ptr;
int m=29;



printf(" Address of m %p\n", &m);
printf(" Value of m %d\n",m);

ptr = &m;
printf(" Address of pointer ab %p\n", ptr);
printf(" the content of %d\n", *ptr);

m=34;
printf(" Address of pointer : %p\n", ptr);
printf(" Content of pointer : %d\n",*ptr);

*ptr =7;
printf(" Address of m %p\n", &m);
printf(" Value of m %d\n\n",m);
return 0;
}
