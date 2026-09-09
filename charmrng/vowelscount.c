#include<stdio.h>

void main()
{
    
    char name[100];
    int i,count=0;
    printf("\n enter name :");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            count++;
        }
    }
    printf("\n vowels = %d",count);
   
}