#include<stdio.h>

void main()
{
 
    char name[100];
    int i,count=0;
    printf("\n enter your name ::");
    scanf("%s",&name);

    printf("\n name = %s",name);

    //india'\0'
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    printf("\n count = %d",count);

   
}