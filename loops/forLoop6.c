#include<stdio.h>

//1 to 10 ->1+2

void main()
{
   
    int i,sum=0;
    //i =1
    for(i=1;i<=10;i++){
        printf("\n i =%d",i); //1 2 3
        //0 = 0 + 1 = 1
        //1 = 1 + 2 = 3
        //3 = 3 + 3 = 6
        //6 = 6 + 4 =10
        //...
        sum = sum +i;
    }
    printf("\n sum = %d",sum);
    
}