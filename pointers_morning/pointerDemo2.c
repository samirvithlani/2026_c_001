#include<stdio.h>

void main()
{
 
    int a=10;
    int *b; //pointer variable..
    //pointer variable does have cap to store address of any variable...

    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);

    b = &a;
    printf("\n value of b = %d",*b); //to access copied address value use *b
    printf("\n copied address of b from a variable = %u",b);
    printf("\n b's own address =%u",&b);


   
}