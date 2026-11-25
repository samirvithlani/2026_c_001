#include<stdio.h>

void main()
{
 
    int a=10;
    int *ptr,**x;
    ptr = &a;
    x = &ptr;


    printf("\n value of a = %d",a);
    printf("\n value of ptr= %d",*ptr);
    printf("\n x = %d",**x);
   
}