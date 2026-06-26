#include<stdio.h>

void main()
{

    int choice;
    printf("Press 1 for ADD :");
    printf("\nPress 2 for MUL :");
    printf("\nPress 3 for DIV :");
    printf("\nPress 4 for SUB :");

    scanf("%d",&choice); //1

    switch(choice){

        case 1:
            printf("\n case 1 add !!");
        break;
        case 2:
            printf("\n case 2 mul!!");
        break;
        case 3:
            printf("\n div called...");
        break;    
        case 4:
            printf("\n sub called.. !!");
        break;
        default:
            printf("\n invalid choice !!!");
        break;


    }

}