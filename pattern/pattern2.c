#include<stdio.h>

void main()
{
    int i,j;
    //i =1
    //i =2,i=3
    for(i=1;i<=5;i++){  
        //j=1;j<=1;j++
        //j=1;j<=2;j++ -->1,2
        //j=1;j<=3;j++ -->1,2,3
        for(j=1;j<=i;j++){

            printf("* ");
        }
        printf("\n");
    }
   
}