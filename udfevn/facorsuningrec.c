#include<stdio.h>

//12,1
//12,2
//12,3
//12,13
void factors(int n,int i){

    //1>12
    //2>12
    //3>12
    //13>12
    if(i>n){
        return;
    }
    //12%1 ==0 
    //12%2==0
    //12%3==0
    if(n%i==0){
        printf(" %d ",i); //1 ,2 ,3 ,4 ,6,12
    }
    //factors(12,2)
    //factors(12,3)
    //factors(12,13)
    factors(n,i+1);

}

void main()
{
   
    factors(15,1);
   
}