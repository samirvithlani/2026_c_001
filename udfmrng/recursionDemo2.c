#include<stdio.h>

//n=10
//n=9
//n=8
///..... n=1 ,n=0
void count(int n){

    if(n==0){
        return;
    }
    printf("\n n = %d",n); //10 //9 //8... //1
    count(n-1); //count(9) count(8) count(1) count(0)

}

void main()
{
   
    count(10);
}