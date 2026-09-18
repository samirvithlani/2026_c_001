#include<stdio.h>
#include<string.h>

void main()
{
 
    char name[100],copyname[100];
    int i;

    printf("\n enter name ::");
    gets(name);

    strcpy(copyname,name);

    // for(i=0;name[i]!='\0';i++){
    //     copyname[i] = name[i];
    // }
    // copyname[i] = '\0';

    printf("\n copyaname = %s",copyname);

   
}