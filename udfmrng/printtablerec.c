#include<stdio.h>

void printtable(int n,int i){

    //basecse.
    if(i>10){
        return;
    }
    
    printf("\n %d * %d = %d",n,i,n*i);
    printtable(n,i+1);

}

void main()
{
   
    printtable(5,1);

   
}