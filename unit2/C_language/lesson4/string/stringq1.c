/*

 * stringq1.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Farha
 */
#include "stdio.h"
int main()
 {
     char  s [1000] ,ch;
     int freq = 0;
     printf("enter a sentence : \n");
     fflush(stdin);
     fflush(stdout);
     scanf("%[^\n]", s);
     printf("enter the charcter to find its frequncy : \n");
     fflush(stdin);
     fflush(stdout);
     scanf("%c",&ch);
     for (int i=0 ; i <strlen(s); i++)
     {
         if (ch == s[i])
          {
            freq++;
          }
     }

        printf("Frequncy of %c = %d ", ch, freq);




    return 0;
}
