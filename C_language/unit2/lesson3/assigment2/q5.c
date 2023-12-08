/*

 *
main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Farha
 */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    fflush (stdin);
    fflush (stdout);
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet.", ch);
    else
        printf("%c is not an alphabet.", ch);


}
