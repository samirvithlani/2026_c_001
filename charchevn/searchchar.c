#include<stdio.h>

void main()
{
    
    char name[100],c;
    int found=0,i;

    printf("\n enter data::");
    gets(name);

    printf("\n enter char to search");
    scanf("%c",&c);

    for(i=0;name[i]!='\0';i++){
        if(name[i]==c){
            found=1;
            break;
        }
    }

    if(found==1){
        printf("\n char found in data");
    }
    else{
        printf("\n char not found in data");
    }

   
}