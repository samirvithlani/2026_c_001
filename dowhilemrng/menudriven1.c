#include<stdio.h>

void main()
{
    
    int choice,no1,no2;
    do{
        printf("\n Press 1 for ADD: ");
        printf("\n Press 2 for SUB: ");
        printf("\n Press 3 for EXIT: ");

        scanf("%d",&choice);
        if(choice==1){
            printf("\n enter no 1: ");
            scanf("%d",&no1);
            printf("\n enter no 2: ");
            scanf("%d",&no2);

            printf("\n add = %d",no1+no2);
        }
        else if(choice==2){
            printf("\n enter no 1: ");
            scanf("%d",&no1);
            printf("\n enter no 2: ");
            scanf("%d",&no2);
            printf("\n sub = %d",no1-no2);
        }
        else{
            printf("\n invalid choice !!");
            break;
        }


    }
    while(choice<3);
    
   
}