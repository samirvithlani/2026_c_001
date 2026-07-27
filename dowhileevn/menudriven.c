#include<stdio.h>
#include<stdlib.h>

void main()
{
    
    int choice,no1,no2;
    do{
        printf("\n PRESS 1 for ADD:");
        printf("\n PRESS 2 for SUB:");
        printf("\n PRESS 3 for MUL:");
        printf("\n PRESS 4 for DIV:");
        printf("\n PRESS 5 FOR EXIT:");
        scanf("%d",&choice); //1

        switch(choice){

            case 1:
                printf("\n enter no 1:");
                scanf("%d",&no1);
                printf("\n enter no 2:");
                scanf("%d",&no2);
                printf("\n ADD = %d",no1+no2);
            break;
            case 2:
                printf("\n enter no 1:");
                scanf("%d",&no1);
                printf("\n enter no 2:");
                scanf("%d",&no2);
                printf("\n SUB = %d",no1-no2);
            break;
            case 3:
                printf("\n enter no 1:");
                scanf("%d",&no1);
                printf("\n enter no 2:");
                scanf("%d",&no2);
                printf("\n MUL = %d",no1*no2);
            break;
            case 4:
                printf("\n enter no 1:");
                scanf("%d",&no1);
                printf("\n enter no 2:");
                scanf("%d",&no2);
                printf("\n DIV = %d",no1/no2);
            break;
            case 5:
                    printf("thaks !!!");
                    exit(0);
            break;

            default:
                printf("\n invalid choice::::");
            break;


        }

    }while(choice<=4); //1<=4 TRue,2<=4 True

   
}