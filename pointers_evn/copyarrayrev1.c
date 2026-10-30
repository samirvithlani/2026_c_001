#include<stdio.h>

void main()
{
    int a[]={11,22,32,44,55},i;
    int *p;
    
    p = &a[0];  

    for(i=0;i<5;i++){
        printf("\n value = %d",*p++);
    }
   
}