#include<stdio.h>
#include<string.h>


void main()
{
    char name[100];
    
    printf("\n enter name ::");
    gets(name);


    strrev(name);

    printf("\n revname = %s",name);

   
}