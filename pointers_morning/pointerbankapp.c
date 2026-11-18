#include<stdio.h>

void withdraw(int *balance,int amount){

    printf("\n withdraw called..");
    *balance = *balance-amount;
    printf("\n withdraw successfull");
}

void main()
{
 
    int balance=10000;
    withdraw(&balance,3000);
    printf("\n after withdraw balance = %d",balance);
   
}