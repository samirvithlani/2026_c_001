#include<stdio.h>

void main()
{
 
    char x ='A';
    char *p = &x;

    printf("\n value of x = %c",x);
    printf("\n address of x = %u",&x);

    printf("\n value of p = %c",*p);
    printf("\n address of p = %u",p);
   
}