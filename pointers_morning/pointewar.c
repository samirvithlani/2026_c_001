#include<stdio.h>

void main()
{
 
    int a=10;
    int *p;

    p = &a;

    printf("\n address of a = %u",&a);
    printf("\n address of p = %u",p);

    printf("\n value of a = %d",a);
    printf("\n value of p = %d",*p);

    *p++; //4 bytes plus

    printf("\n address of a = %u",&a);
    printf("\n address of p = %u",p);

    printf("\n value of a = %d",a);
    printf("\n value of p = %d",*p);


    



   
}