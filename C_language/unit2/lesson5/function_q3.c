/*

 * function_q3.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Farha
 */
#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence:\n ");
    reverseSentence();


    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("reversed sentence is %c", c);
    }
}

