#include<stdio.h>

//12 = 1 2 3 4 6 12
//15 = 1 3 5 15 
void factors(int n,int i){

    //basecase
    if(i>n){
        return;
    }
    if(n%i==0){
        printf(" %d ",i);
    }

    //logic

    factors(n,i+1);


}
void main()
{
   
    factors(15,1);
   
}