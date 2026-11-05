#include<stdio.h>

void main()
{
 
    char name[]="Royal";
    char *p = &name[0];
    int i;


    for(i=0;i<5;i++){
        printf("\n char = %c",*p++);
    }
   
}