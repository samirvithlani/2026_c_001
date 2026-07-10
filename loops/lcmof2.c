#include<stdio.h>

void main()
{
    // LCM  : 10,15 -->30
    int no1,no2,lcm,i=1;
    printf("\n enter no1 :");
    scanf("%d",&no1);

    printf("\n enter no2 :");
    scanf("%d",&no2);

    while(1){
        //1 % 10 ==0 && 1%15 ==0 FALSE
        //2,3,4,5,6,7,8,9
        //10 % 10 ==0 && 10%15 ==0 FALSE
        //16,17,19,19,
        //20%10 ==0 &&
        //21,22,23,24,25,26,27,28,29,30
        //30%10 ==0 && 30 % 15 ==0
        if(i%no1 ==0 && i%no2 ==0){

            lcm = i; //30
            break;
        }
        i++;
    }
    
    printf("\n lcm of %d and %d = %d",no1,no2,lcm);


   
}