#include<stdio.h>

void main()
{
 
    int no,count=0;
    printf("\n enter no :");
    scanf("%d",&no);

    //987
    //987 > 0 true
    //98> 0 true
    //9>0 True
    //0>0 FALSE
    while(no>0){

        no  = no /10; // 987 / 10 = 98  98 / 10 = 9   9 /10 = 0
        count++; //1 2 3
    }
   
    printf("\n count = %d",count);
}