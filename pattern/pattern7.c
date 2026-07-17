/*

    *
   **
  ***
 ****
*****          


*/



#include<stdio.h>

void main()
{
   
    int i,j;
    for(i=1;i<=5;i++){

        //i=1,i=2
        //space...

        //j=1,5-i=1
        //j=1,i=3
        //1 2 3 4
        //1 2 3
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        //j=1;j<=1;j++
        //j=1;j<=2
        for(j=1;j<=i;j++){
            printf("*");
        }

        //    *
        //  * *
        printf("\n");
    }
   
}