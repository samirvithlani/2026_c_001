#include<stdio.h>

void main()
{
    int bal;
    while(1){

        printf("\n enter bac :");
        scanf("%d",&bal);
        if(bal>=10000){
            break;
        }
    }

    printf("\n balance =%d",bal);
   
}