#include<stdio.h>

void main()
{
 
    int a[]={11,22,33,44,55};
    int *p;

    printf("\n array's own address = %u",&a);
    printf("\n 1st elment address = %u",&a[0]);
    printf("\n 2nd elment address = %u",&a[1]);
    printf("\n 3rd elment address = %u",&a[2]);
    printf("\n 4th elment address = %u",&a[3]);
    printf("\n 5th elment address = %u",&a[4]);


    p = &a[0]; //0th elm address = p //.... 80
    printf("\n 0th elment address value = %d",*p);
    p++; //.... 84
     //4 byte increment
     printf("\n 0th elment address value = %d",*p);
     p++; //4 byte inc  ....88
     printf("\n 0th elment address value = %d",*p);
   
}