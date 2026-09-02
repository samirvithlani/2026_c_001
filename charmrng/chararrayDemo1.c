#include<stdio.h>

void main()
{
 
        char c[5]="royal",i;
        char name[100];

        //printf("\n 0th index = %c",c[0]);
        for(i=0;i<5;i++){
            printf("\n %c",c[i]);
        }

        printf("\n enter name:");
        //scanf("%c",&name);
        scanf("%s",&name); //string

        printf("\n name= %s",name);

   
}