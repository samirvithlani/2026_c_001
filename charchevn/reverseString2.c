#include<stdio.h>

void main()
{
 
    char name[100],revname[100];
    int len=0,i,j=0;
    printf("\n enter name ::");
    gets(name);
    //string len find..
    while(name[len]!='\0'){
        
        len++;
    }

    //royal
    //01234

    //i=4  ,j=0
  
    for(i=len-1;i>=0;i--){
        
        revname[j] = name[i];  
        j++; //1,2
    }
    printf("\n revname = %s",revname);



   
}