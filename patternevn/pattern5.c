
/*

* * * * *
* * * *
* * *
* *
*

*/



#include<stdio.h>

void main()
{
 
    int i,j;
    //i=5
    //i=4
    //i=3
    for(i=5;i>=1;i--){
        //j=1
        //j=1;j<=i;j++ = j=1,j<=4 -> 1 2 3 4
        //j=1;j<=3;j++ --> 1,2,3
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
   
}