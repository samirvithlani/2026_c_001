#include<stdio.h>

void main()
{
 
    int a=10; //4 bytes memory address
    int b=20,c;

    c = b; //value copy

    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);

    printf("\n value of b = %d",b);
    printf("\n address of b = %u",&b);

    printf("\n value of c = %d",c);
    printf("\n address of c = %u",&c);

   
}