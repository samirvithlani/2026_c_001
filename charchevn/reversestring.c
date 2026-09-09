#include<stdio.h>

//copy

void main()
{
    char name[100];
    int i,len=0;
    printf("\n enter name :");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        len++;
    }
    printf("\n len = %d",len);

    //reverse..
    for(i=len-1;i>=0;i--){
        printf("\n char = %c",name[i]);
    }



    // for(name[i]='\0';i>=0;i--){
    //     printf("%c",name[i]);
    // }
   
}