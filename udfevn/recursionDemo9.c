#include<stdio.h>

//n=5,n=4,n=3,n=2,n=1,n=0
int mul(int n){


    if(n==0){
        return 1;
    }

    
    //return 5 * mul(5-1); 5 * 24 = 120
    //return 4 * mul(4-1) 4 * 6 = 24
    //return 3 * mul(3-1) 3 *2 = 6
    //return 2* mul(2-1) //2 * 1 = 2
    //retrun 1 * mul(0) //1 *1 = 1
    return n * mul(n-1);
}

void main()
{
    int x;
    x = mul(5);
    printf("\n x = %d",x);
   
}