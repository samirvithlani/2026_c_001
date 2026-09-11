#include<stdio.h>

void main()
{
 
    char username[100];
    int count=0,i;

    printf("\n enter username::");
    gets(username);

    for(i=0;username[i]!='\0';i++){
        if(username[i]>='A' && username[i]<='Z'){
            count++;
        }
    }
    printf("\n caps char = %d",count);


   
}