#include<stdio.h>

void main()
{
    
    int bal,chance=3;

    while(chance!=0){
        printf("\n enter bal avaialable chances = %d : ",chance);
        scanf("%d",&bal); //190[3] 1800[2] 90000[]
        
        if(bal>=10000){
            printf("\n balance = %d",bal);
            chance--;
            break;
        }
        chance--;
    }

    printf("\n remaining chance = %d",chance);
    if(chance<0){
        printf("\n chances are over try again lt......");
    }
    
    
}