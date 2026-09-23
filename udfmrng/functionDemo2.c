#include<stdio.h>

void add(){
    
    int no1=10,no2=20,sum=0;
    sum = no1  + no2;
    printf("\n sum = %d",sum);

}

void sub(){
    
    int no1=10,no2=20,ans=0;
    ans = no1  - no2;
    printf("\n sub = %d",ans);

}

void main()
{
    int choice;
    printf("\n *******************CALC********************");
    printf("\n enter 1 for add:");
    printf("\n enter 2 for sub:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
                add();
        break;
        case 2:
                sub();
        break;
        default:
            printf("\n invalid choice !!");
         break;    
    }

}