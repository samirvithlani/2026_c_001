#include<stdio.h>

void main()
{
   
    int no,chance=3;
    start:
    
    printf("\n enter pos value : remaining chance = %d",chance);
    scanf("%d",&no);
    
    if(no<0){
        chance--; //2 //1 //0
        if(chance>0){
            goto start;
        }
        else{
            printf("chances are over !!");
        }
    }
    else{
        printf("\n no =%d",no);
    }
    
}