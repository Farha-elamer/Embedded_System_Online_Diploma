/*

 * stringq3.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Farha
 */


#include<stdio.h>
#include<string.h>
int main() {
char str[100], temp;
int i, j = 0;
printf("\nEnter the string");
//fflush(stdin);
//fflush(stdout);
gets(str);
i = 0;
j = strlen(str) - 1;
while (i < j) {
temp = str[i];
str[i] = str[j];
str[j] = temp;
i++;
j--;
}
printf("\nReverse string is:%s", str);
return (0);
}
