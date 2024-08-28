/*

 * Q3.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Farha
 */
#include "stdio.h"
int  main ()
{
	/* entering the elements from the user*/
	int rows , column;
	int i ,j ;
	int matrix[10][10];
	printf("Enter rows and column of matrix:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d ", &rows ,&column);


	//
	for(i=0 ; i<rows ;i++)
		for (j=0; j <column ;j++ )
	{
		printf(" Enter elements of matrix \n :");
        printf(" Enter elements of matrix a%d%d :",i+1,j+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d %d ", matrix [i][j]);

	}
	//display the matrix/
	printf("the entersd matrix is \n: ");
	for(i=0 ; i<rows ;i++)
		for(j=0; j<column ;j++)
		{
			printf("%d ", matrix[i][j]);
			if (j == column-1)
				printf("\n");
		}
	/*the transpose matrix*/
	int transpose[10][10];
	for(i=0 ; i<rows ;i++)
			for(j=0; j<column ;j++)
			{
				transpose[j][i]=matrix[i][j];
			}
	printf("the transposed matrix is \n: ");
		for(i=0 ; i<column ;i++)
			for(j=0; j<rows ;j++)
			{
				printf("%d ", transpose[i][j]);
				if (j == rows-1)
					printf("\n");
			}
		 return 0;

}
