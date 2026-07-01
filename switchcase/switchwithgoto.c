#include<stdio.h>

void main()
{
 
    int choice;
    start:
    printf("\n ############### WELCOME TO XYZ HOTEL ###############");
    printf("\n Enter 1 for Gujarati :");
    printf("\n Enter 2 for North Indian :");
    printf("\n Enter 3 for South Indian :");
    printf("\n Enter 4 for exit :");
    scanf("%d",&choice);

    
    switch(choice){

        case 1:
                printf("\n welcome to Gujrati Menu:");
                goto start;
         break;       
        case 2:
                printf("\n Welcome to North Indian Menu :");
                goto start;
               
        break;
        case 3:
                printf("\n Welcome to South Indian Menu :");
                goto start;
        break;
        case 4:
             printf("\n THANKS VISIT AGAIN !!");
        break;
        
    }

   
}