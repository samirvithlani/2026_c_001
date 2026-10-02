#include<stdio.h>
#include<string.h>

//royal
int findstrlen(char name[]){

    int count=0,i;
    for(i=0;name[i]!='\0';i++){
        count++;
    }

    return count;
}

void main()
{
   
    int len;
    char name[100]="royal";
    //len  = strlen(name);
    len = findstrlen(name);
    printf("\n len = %d",len);

   
}