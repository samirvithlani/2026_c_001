#include<stdio.h>

void count(int n){

    if(n==11){
        return;
    }
    
    count(n+1);
    printf("\n n = %d",n);
}

void main()
{
   
    count(1);
   
}