#include<stdio.h>

void main()
{
    
    int data[5],i,sum=0;
    for(i=0;i<5;i++){
        printf("\n enter %d data",i);
        scanf("%d",&data[i]);
    }

    for(i=0;i<5;i++){
        //sum = 0 + 10 = 10
        //sum = 10 + 20 = 30
        //sum = 30 + 15 = 45
        //sum = 45 + 15 = 60
        //sum = 60 + 10 = 70
        sum =sum + data[i];
        printf("\n data =%d",data[i]);
        
    }
   
    printf("\n sum of elements =%d",sum);
}