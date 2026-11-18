#include<stdio.h>

void add(int a,int b){
    printf("\n a = %d",a);
    printf("\n b = %d",b);
}

void main()
{

    int x=100,y=200;
    add(10,20); //call function by value
    add(x,y);
   
}