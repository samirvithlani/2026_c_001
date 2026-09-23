#include<stdio.h>

void add(){
    int no1=10,no2=20,ans=0;
    ans = no1+no2;
    printf("\n ans = %d",ans);
}

void sub(){
    int no1,no2,ans=0;
    printf("\n enter no1 :");
    scanf("%d",&no1);
    printf("\n enter no2 :");
    scanf("%d",&no2);
    ans = no1-no2;
    printf("\n ans = %d",ans);
}

void main()
{
    int choice;
    printf("\n ********************* CALC *******************");
    printf("\n enter 1 for add: ");
    printf("\n enter 2 for sub: ");
    scanf("%d",&choice);

    switch(choice){

        case 1:
            add();
        break;

        case 2:
            sub();
        break;

    }
   
}