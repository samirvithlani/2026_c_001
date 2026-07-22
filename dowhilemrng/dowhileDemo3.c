#include<stdio.h>

// ask amount from user
// amount must be grt 1000

void main()
{
    
    int amount;
    do{
        printf("\n enter amount >= 1000* :");
        scanf("%d",&amount);
    }while(amount<1000);

    printf("\n amount = %d",amount);
   
}