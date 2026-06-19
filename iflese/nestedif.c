#include<stdio.h>

void main(){


        int pin=1234,bal=40000,amount,upin;
        printf("\n enter your pin:");
        scanf("%d",&upin);
       

        if(upin==pin){
            printf("\n pin matched !!");
             printf("\n enter amount to withdraw:");
             scanf("%d",&amount);

            
            if(amount<=bal){
                printf("\n withdraw success !!");
            }
            else{
                printf("not enough balance !!");
            }
        }
        else{
            printf("\n pin not matched !!");
        }


}