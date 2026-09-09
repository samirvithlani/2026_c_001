#include<stdio.h>

//royal'\0'
void main()
{
 
    char name[6]="royal",copyname[6]="";
    int i;
    printf("\n name = %s",name);

    for(i=0;name[i]!='\0';i++){
        //printf("\n %c",name[i]);
        //copyname[i][0] = r      =name[0] // r
        //copyname[i][1]= o
        copyname[i] = name[i];
    }


    printf("\n copyname = %s",copyname);


   
}