#include<stdio.h>

void main()
{
 
    int i=1;
    //i=1
    do{
        printf("\n i =%d",i); //1,2,9 ,10
        i++; //++2 ++3 //10 ,11
    }while(i<=10); //2<=10 True //3<=10 True,,9 10<=10 True 11<=10 False 12<=10 False
   
}