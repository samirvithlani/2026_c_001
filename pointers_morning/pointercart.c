#include<stdio.h>

void addProduct(int *total,int price){

    *total = *total+price;
}

void main()
{
   
    int cartTotal=0;
    addProduct(&cartTotal,1000);
    addProduct(&cartTotal,100);
    addProduct(&cartTotal,200);

    printf("\n cart total = %d",cartTotal);
   
}