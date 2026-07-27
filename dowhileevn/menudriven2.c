#include<stdio.h>
#include<stdlib.h>
void main()
{

        int choice;
        do{
            printf("\n ********** WELCOME TO BGMI*****************");
            printf("\n PRESS 1 for TDM  :");
            printf("\n PRESS 2 for CLASSIC :");
            printf("\n press 3 for exit");
            scanf("%d",&choice);

            switch(choice){
                case 1:
                    printf("\n welcome to TDM:");
                break;
                case 2:
                    printf("\n welcome to classic :");
                break;
                case 3:
                    printf("\n thanks visit again");
                    exit(0);
                break;
                default:
                    printf("invalid choice ");
                break;
            }
        

        }while(choice<3);
   
}