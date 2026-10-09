#include<stdio.h>

int findHCF(int a, int b){
    //a=4,b=8
    //a=8,b=4
    //a =4,b=0
    if(b==0){
        return a;  
    }

    //   findHCF(8,4) //4
    //findhcf(4,4%4) //0

    return findHCF(b,a%b);
}


void main()
{
   
    int x;
    x = findHCF(4,8);
    printf("\n x = %d",x);
   
}