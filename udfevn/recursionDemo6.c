#include<stdio.h>

int x=0;

void sum(int n){
    //n=5

    if(n==0){
        return;
    }

    sum(n-1); //sum(4),sum(3),sum(2),sum(1),sum(0)
    x = x+n; //15
    printf("\n n = %d",n);
    //printf("\n x =%d",x);


}

void main()
{
   
    sum(5);
    printf("\n x = %d",x);
   
}