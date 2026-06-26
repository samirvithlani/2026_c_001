#include<stdio.h>

void main()
{

    int choice,no1,no2,ans;
    printf("Press 1 for ADD :");
    printf("\nPress 2 for MUL :");
    printf("\nPress 3 for DIV :");
    printf("\nPress 4 for SUB :");
    scanf("%d",&choice); //1

    printf("\n enter no 1:");
    scanf("%d",&no1);
    printf("\n enter no 2:");
    scanf("%d",&no2);

    switch(choice){

        case 1:
            printf("\n ADD of 2 numbers!!");
            ans = no1 + no2;
            //printf("\n ans = %d",ans);
        break;
        case 2:
            printf("\n MUL of 2 numbers!!");
            ans = no1 * no2;
            //printf("\n ans = %d",ans);
        break;
        case 3:
            printf("\n DIV of 2 numbers!!");
            ans = no1 / no2;
            //printf("\n ans = %d",ans);
        break;    
        case 4:
            printf("\n SUB of 2 numbers!!");
            ans = no1 - no2;
            //printf("\n ans = %d",ans);
        break;
        default:
            printf("\n invalid choice !!!");
        break;

    }

    printf("\n ans = %d",ans);

}