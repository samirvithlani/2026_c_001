#include<stdio.h>

void main()
{
 
        int choice,no1,no2;
        do{
        printf("\n Press 1 for ADD: ");
        printf("\n Press 2 for SUB: ");
        printf("\n Press 3 for EXIT: ");

        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n enter no 1: ");
                scanf("%d",&no1);
                printf("\n enter no 2: ");
                scanf("%d",&no2);
                printf("\n ADD = %d",no1+no2);
            break;
            case 2:
                printf("\n enter no 1: ");
                scanf("%d",&no1);
                printf("\n enter no 2: ");
                scanf("%d",&no2);
                printf("\n SUB = %d",no1-no2);
            break;
            default:
                printf("\n invalid choice !!");
                break;
            break;
        }


        }while(choice<3);
   
}