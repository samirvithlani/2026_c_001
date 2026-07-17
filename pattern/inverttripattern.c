#include<stdio.h>
/*

    *
   **
  ***
 ****
*****          

*/



void main()
{
 
    int i,j;
    //i=1
    //i=2
    //i=3
    //i=4
    //i=5
    for(i=1;i<=5;i++){

        //space
        //j=1;j<5-1;j++ -->4 -->space
        //j=1;j<5-2;j++ -->1,2,3 -> 3 space
        //j=1;j<5-3;j++ --> 1,2 -->2 space
        //j=1;j<5-4;j++ -->1->1 -->1 space
        //j=1;j<5-5;j++ --> no iteration
        
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        //j=1;j<=1;j++ -->1 *
        //j=1;j<=2;j++ -->1,2 **
        //j=1;j<=3;j++ -->***
        //j=1;j<=4;j++ -->****
        //j<1;j<=5;j++-->*****
        for(j=1;j<=i;j++){

            printf("*");
        }
        printf("\n");

    }
   
}