#include<stdio.h>

void main()
{
 
    char name[100];
    int i,count=0;

    printf("\n enter name ::");
    gets(name);
    printf("\n name = %s",name);
    //hi this'\0'
    for(i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            count++;
        }
    }

    printf("\n no space = %d",count);
    printf("\n no word = %d",count+1);

   

}