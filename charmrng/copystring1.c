#include<stdio.h>

void main()
{
 
    char name[100]="royal",copyname[100];
    int i;
    // copyname = name;
    for(i=0;name[i]!='\0';i++){
        copyname[i] = name[i];
    }
    copyname[i]='\0';
    printf("copy name = %s",copyname);


   
}