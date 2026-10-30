#include<stdio.h>

void main()
{
 
    int a=10,b=20,c=30;
    int *ptr;

    printf("\n value of a = %d",a);
    printf("\n value of b = %d",b);
    printf("\n value of c = %d",c);

    printf("\n address of a = %u",&a);
    printf("\n address of b = %u",&b);
    printf("\n address of c = %u",&c);

    ptr = &c;

    printf("\n value of ptr = %d",*ptr);
    printf("\n address of ptr = %u",ptr);

    ptr++; //4 bytes  6422288 + 4  = 6422292

    printf("\n value of ptr = %d",*ptr); 
    printf("\n address of ptr = %u",ptr);


   
}