#include<stdio.h>

void main()
{
    char name[100],i,count=0;
    printf("\n enter name :");
    gets(name);
    printf("nae =%s",name);
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    printf("\n count = %d",count);
   
}