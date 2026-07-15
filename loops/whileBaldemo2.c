#include<stdio.h>

void main()
{
    
    int bal,chance=3;
    while(chance!=0){
        printf("\n enter balance:");
        scanf("%d",&bal);

        if(bal>=10000){
            printf("\n balance = %d",bal);
            break;
        }

        chance--;
    }
    
   
}