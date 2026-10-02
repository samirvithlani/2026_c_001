#include<stdio.h>

int count(int n){

    if(n==0){
        return ;
    }

    
    return count(n-1);
    

}

void main()
{
   
    int x;
    printf("\n main 1 call");
    x = count(10);
    printf("\n x = %d",x);
    printf("\n main 2 call");
   
}