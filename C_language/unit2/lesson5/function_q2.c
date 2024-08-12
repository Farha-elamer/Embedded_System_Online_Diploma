/*

 * function_q2.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Farha
 */
#include<stdio.h>
long int factorial(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    fflush (stdin);
    fflush (stdin);
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}


