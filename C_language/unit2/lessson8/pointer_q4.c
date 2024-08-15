/*

 * pointer_q4.c
 *
 *  Created on: Aug 15, 2024
 *      Author: Farha
 */

#include <stdio.h>

int main() {

    int n, i, arr1[15];
    int *pt;


    printf("\n\n Pointer : Print the elements of an array in reverse order :\n");



    printf(" enter elements to store in the array  : ");
    fflush (stdin);
    fflush (stdout);
    scanf("%d", &n);

    pt = &arr1[0];


    printf(" Input %d number of elements in the array : \n", n);
    for (i = 0; i < n; i++) {
        printf(" element - %d : ", i + 1);
        fflush (stdin);
        fflush(stdout);
        scanf("%d", pt);
        pt++;
    }

    pt = &arr1[n - 1];


    printf("\n The elements of array in reverse order are :");
    for (i = n; i > 0; i--) {
        printf("\n element - %d : %d  ", i, *pt);

    }

    printf("\n\n");
    return 0;
}
