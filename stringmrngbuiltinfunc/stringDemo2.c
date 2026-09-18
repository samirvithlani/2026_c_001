#include<stdio.h>
#include<string.h>

void main()
{
    //string copy...
    //single char copy using for loop...

    char name[100],copyname[100];

    printf("\n enter name ::");
    gets(name);

    //loop ---> function
    strcpy(copyname,name);
    printf("\n copystring = %s",copyname);
   
}