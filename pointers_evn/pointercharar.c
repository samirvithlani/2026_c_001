#include<stdio.h>

void main()
{
 
    char name[]="royal";
    char *p = &name[0];
    //name own address ??? yes
    printf("\n value of name = %s",name);
    printf("\n address of name = %u",&name);

    printf("\n address of 0th elemnt  = %u",&name[0]);
    *p++; // 1 byte +
    printf("\n after p++ value of char = %c",*p);



   
}