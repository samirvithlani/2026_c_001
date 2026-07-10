#include<stdio.h>

void main()
{
 
     int no1,no2,lcm;
    printf("\n enter no1 :");
    scanf("%d",&no1);

    printf("\n enter no2 :");
    scanf("%d",&no2);

    //10,15

    //(15>10)
    if(no1>no2){
        //lcm = 15
        lcm = no1;
    }
    else{
        lcm =no2;
    }
   
    while(1){
        //15%10 == 0 and 15&15 ==0 FALSE
        if(lcm % no1 ==0 && lcm %no2 ==0){
            break;
        }
        lcm++;
    }







}