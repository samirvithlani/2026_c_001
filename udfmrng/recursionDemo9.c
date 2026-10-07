#include<stdio.h>

//5
int fact(int n){

    if(n==0){
        return 1;
    }

    // 5*fact(4)
    // 5*4 *fact(3)
    //5*4*3*fact(2)
    //5*4*3*2*fact(1)
    //5*4*3*2*1fact(0)
    return n*fact(n-1);
}

void main()
{
   
    int ans;
    ans = fact(5);
    printf("\n ans = %d",ans);
   
}