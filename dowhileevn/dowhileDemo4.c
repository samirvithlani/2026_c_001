#include<stdio.h>

void main()
{
 
    int i=1,sum=0;
    do{
        printf("\n i =%d",i);
        // sum = 0 + 1 =1
        //1 = 1 + 2 = 3
        //3 = 3 + 3 = 6
        sum = sum +i;
        i++;
        

    }while(i<=10);
    printf("\n sum = %d",sum);
   
}