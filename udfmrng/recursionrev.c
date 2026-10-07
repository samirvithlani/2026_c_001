#include<stdio.h>

//n=10
void count(int n){

    if(n==0){
        return;
    }
    //printf("\n n = %d",n);
    count(n-1); 
    printf("\n n = %d",n);


}

void main()
{
   
   count(10);
}