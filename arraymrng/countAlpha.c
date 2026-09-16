#include<stdio.h>

void main()
{
 
        char name[100];
        int i,count=0;

        printf("\n enter name :");
        gets(name);

        for(i=0;name[i]!='\0';i++){
            if(name[i]>='A' && name[i]<='Z'){
                count++;
            }
        }
        printf("\n cap count = %d",count);
   
}