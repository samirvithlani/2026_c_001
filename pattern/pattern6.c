#include<stdio.h>
/*

* * * * *
* * * *
* * *
* *
*


*/

void main()
{
   
    int i,j;
    //i = 5
    //i = 4
    for(i=5;i>=1;i--){
        //j=1 -->i =5
        //j=1 -->i =4 
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
   
}