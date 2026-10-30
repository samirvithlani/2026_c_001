#include<stdio.h>

void main()
{

    int a=10,b=20;
    int *c; //pointer variable..

    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);

    printf("\n value of b = %d",b);
    printf("\n address of b = %u",&b);
    
    c = &a;

    printf("\n value of c = %d",*c); //copied address's value
    printf("\n copied address of c = %u",c); //to access copied address.
    printf("\n c's own address = %u",&c);

    *c = 100;

    printf("\n value of a after change.. = %d",a);
   
   
}