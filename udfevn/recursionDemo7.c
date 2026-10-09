#include<stdio.h>

int demo(int n){

    if(n==1){
        return 1;
    }
    demo(n-1);
}



void main()
{
 
    int x;
    x = demo(10);
    printf("\n x = %d",x);
   
}