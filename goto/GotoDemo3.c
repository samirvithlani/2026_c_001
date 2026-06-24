#include<stdio.h>

void main()
{
   int pin=1234,bal,pchance=2,balchance=3,upin;

   start:
   printf("\n enter bal ");
   scanf("%d",&bal);

   if(bal<10000){
        balchance--;
        if(balchance>0){
            goto start;
        }
        else{
            printf("balance chances are over !!");
        }

   }
   else{
    printf("\n bank ac has been opened!!");
        start1:
        printf("\n check mail and enter pin ::");
        scanf("%d",&upin);
        if(upin!=pin){
            pchance--;
            if(pchance>0){
                goto start1;
            }
            else{
                printf("\n pin chances are over ::");
            }
        }
        else{
            printf("welcome to Whatever bank !!");
        }
   }

    
}