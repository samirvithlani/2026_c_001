#include<stdio.h>

//n=10
//n=9
//n=8
///..... n=1 ,n=0
void count(int n){

    if(n==0){
        return;
    }
    printf("\n before n = %d",n); //10 //9 //8... //1
    count(n-1); //count(9) count(8) count(1) count(0)
    printf("\n after n = %d",n);

}

void main()
{
   
    printf("\n main before count");
    count(10);
    printf("\n main after count");
    
}