/*


 * Q4.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Farha
 */

#include <stdio.h>

int main() {
    int n, i, search, flag = 0;
    int arr[100];

    // Collecting the number of elements in the array
    printf("Enter the number of elements in array: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &n);

    // Obtaining the elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
    	fflush(stdin);
    	 fflush(stdout);
        scanf("%d", &arr[i]);
    }

    // Getting the element to search
    printf("Enter the element to search: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &search);

    // Searching the element
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at position: %d\n", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
