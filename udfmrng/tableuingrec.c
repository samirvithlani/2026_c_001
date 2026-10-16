#include<stdio.h>

void table(int n,int i){

    if(i==11){
        return;
    }

    printf("\n %d * %d = %d ",n,i,n*i);
    table(n,i+1);

}

void main()
{
   
    table(5,1);
   
}