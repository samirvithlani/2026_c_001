#include<stdio.h>

void main()
{
 
    int a=10;
    int *b;

    printf("\n before copy a = %d",a);
    printf("\n before copy addressof  a = %u",&a);

    b = &a;
    *b= 200;

    printf("\n after copy a = %d",a);
    printf("\n aftter copy addressof  a = %u",&a);
    printf("\n after copy b = %d",*b);
    

   
}