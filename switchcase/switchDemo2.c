#include<stdio.h>

void main()
{
    
    int choice,gujchoice,nochoice;
    printf("\n ############### WELCOME TO XYZ HOTEL ###############");
    printf("\n Enter 1 for Gujarati :");
    printf("\n Enter 2 for North Indian :");
    printf("\n Enter 3 for South Indian :");
    scanf("%d",&choice);

    switch(choice){

        case 1:
                printf("\n welcome to Gujrati Menu:");
                printf("\n Press 1 for gujrati Thali :");
                printf("\n Press 2 for Khman Dhokla :");
                printf("\n Press 3 for Undhiyu :");
                scanf("%d",&gujchoice);
                switch(gujchoice){
                    case 1:
                        printf("\n you have selected guj Thali price is 200 RS");
                    break;
                    case 2:
                        printf("\n you have selected KHMAN DHOKLA  price is 100 RS");
                    break;
                    case 3:
                        printf("\n you have selected UNDHIYU price is 300 RS");
                    break;
                }

        break;
        case 2:
                printf("\n Welcome to North Indian Menu :");
                printf("\n Press 1 for ALOO PARATHA :");
                printf("\n Press 2 for CHOLLE BHATURE :");
                printf("\n Press 3 for PANEER TUFANI :");

                scanf("%d",&nochoice);
                switch(nochoice){
                    case 1:
                        printf("\n you have selected ALOO PARATHA price is 150");
                    break;
                    case 2:
                        printf("\n you have selected CHOLLE BHATURE price is 120");
                    break;
                    case 3:
                        printf("\n you have selected PANEER TUFANI price is 250");
                    break;
                }
        break;
        case 3:
                printf("\n Welcome to South Indian Menu :");
        break;

    }

   
}