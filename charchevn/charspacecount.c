#include<stdio.h>

void main()
{
 
    char name[100];
    int i,count=0;

    printf("\n enter name ::");
    //scanf("%s",&name);
    gets(name);

    for(i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            count++;
        }
    }
   
    printf("\n space = %d",count);
    printf("\n words = %d",count+1);
}