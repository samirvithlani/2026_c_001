#include<stdio.h>

void main()
{
    
    char name[100],dupchar[100];
    int i,j,k=0;
    printf("\n enter name ::");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        for(j=i+1;name[j]!='\0';j++){
            if(name[i]==name[j]){
                //printf("\n dup char found");
                dupchar[k]=name[i];
                k++;
                break;
            }
        }
    }
    dupchar[k]='\0';
    //dupchar array print
    printf("\n dupcahr = %s",dupchar);
   
}