#include<stdio.h>
#include<string.h>

void printStringLenwa(){

    char name[100]="royal";
    int i,count=0;
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    printf("\n len of %s = %d",name,count);

}

void printStringLen(char name[]){

    int i,count=0;
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    printf("\n len of %s = %d",name,count);

}


void main()
{
 
    char userName[100]="raj",empname[100]="hi this is amitabh";
    int res;
    printStringLenwa();
    printStringLen(userName);
    printStringLen(empname);


    res = strlen(userName);
    printf("\n res = %d",res);
    
   
}