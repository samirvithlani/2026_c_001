#include<stdio.h>

void main()
{
   
    int no1,no2;
    printf("\n enter no 1 :");
    scanf("%d",&no1);
    printf("\n enter no 1 :");
    scanf("%d",&no2);

    if((no1%3==0 || no1 %5 ==0) && (no2%3==0 || no2 %5 ==0)){
        printf("no1,no2 is div by either 3 or 5");
    }
    else{
        printf("else");
        printf("\n no1,no2 is not div by both 3 and 5");
    }

}