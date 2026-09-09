#include<stdio.h>

void main()
{
    
    char name[100],c;
    int i,found=0;

    printf("\n enter name :");
    gets(name);
    printf("\n name = %s",name);

    printf("\n enter char to find..");
    scanf("%c",&c);


    for(i=0;name[i]!='\0';i++){
        if(name[i]==c){
            found=1;
            break;
        }
    }

    if(found==1){
        printf("\n %c found in %s",c,name);
    }
    else{
        printf("%c not found in %s",c,name);
    }



   
}