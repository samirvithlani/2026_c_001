#include<stdio.h>

void main()
{
   
    int i=1,sum=0;
    while(i<=10){

        //i++; ///2 3 .9 /10 //11
        printf("\n i =%d",i); //2 .../9 //10
        sum = sum + i;
        i++;
    }
    printf("\n sum = %d",sum);

   
} 