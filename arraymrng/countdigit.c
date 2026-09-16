#include<stdio.h>

void main()
{
    char name[100];
    int i,count=0;

    printf("\n enter username::");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        if(name[i]>='0' && name[i]<='9'){
            count++;
        }
    }
    printf("\n digit count = %d",count);
   
}