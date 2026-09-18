#include<stdio.h>
#include<string.h>


void main()
{
 
    char name[100];
    int len=0,i;

    printf("\n enter name ::");
    gets(name);

    len = strlen(name);

    // for(i=0;name[i]!='\0';i++){
    //     len++;
    // }
   
    printf("\n len = %d",len);
}