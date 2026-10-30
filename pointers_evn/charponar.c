#include<stdio.h>

void main()
{

    
    char name[10]="amit";
    char *p;

    p = name; //a -->address p -->

    printf("\n value of name = %s",name);
    printf("\n address of name =%u",&name);

    printf("\n value of p = %c",*p);
    printf("\n address of p = %u",p);
   
}