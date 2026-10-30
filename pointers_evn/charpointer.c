#include<stdio.h>

void main()
{
   
    char c='A';
    char *p;
    
    p = &c;

    printf("\n value of c = %c",c); //A
    printf("\n address of c = %u",&c);

    printf("\n value of p = %c",*p); 
    printf("\n address of p = %u",p);

    *p ='a';

    printf("\n value of c = %c",c); 
    printf("\n address of c = %u",&c);
    

    
}