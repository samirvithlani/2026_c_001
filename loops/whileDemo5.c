#include<stdio.h>

void main()
{
    
    int no=12;
    int sum=0,rem,mul=1;
    while(no!=0){
        rem = no % 10;
        sum = sum + rem;
        mul = mul * rem;
        no = no / 10;
    }

    printf("\n sum =%d",sum);
    if(sum==mul){
        printf("\n this no is twin no:");
    }
    else{
        printf("\n this no is not twin no:");
    }
   
}