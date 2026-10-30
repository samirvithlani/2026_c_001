#include<stdio.h>

void main()
{
 
    int a[]={11,22,32,44,55};
    int *p;
    
    p = &a[0];

    printf("\n address of an array =%u",&a);
    printf("\n address of an 0 =%u",&a[0]);
    printf("\n address of an 1 =%u",&a[1]);
    printf("\n address of an 2 =%u",&a[2]);
    printf("\n address of an 3 =%u",&a[3]);
    printf("\n address of an 4 =%u",&a[4]);

    printf("\n value of ptr = %d",*p);
    *p++; //4 bytes increse
    printf("\n value of ptr = %d",*p);
    *p++; //4 bytes increse
    printf("\n value of ptr = %d",*p);
    *p++; //4 bytes increse
    printf("\n value of ptr = %d",*p);
    *p++; //4 bytes increse
    printf("\n value of ptr = %d",*p);

   
}