#include<stdio.h>

void main()
{
   
    int no;
    start:
    
    printf("\n enter pos value :");
    scanf("%d",&no);
    
    if(no<0){
        goto start;
    }
    else{
        printf("\n no =%d",no);
    }
    
}