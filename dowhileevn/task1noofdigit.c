#include<stdio.h>

void main()
{
    
    int no,count=0;
    printf("\n enter no to find digit :");
    scanf("%d",&no);
    //123 --> 3
    // 9321 -->4

    // //no = 123/10 = 12
    // no = no /10; //count++ 1
    // //no = 12/10 = 1
    // no = no /10; //count++ 2
    // // no = 1/10 =0
    // no = no/ 10; // count++ 3

        // //no = 9321 /10 = 932
        // no = no /10; //count++ 1
        // //no 932/10 = 93; //count++ 2
        // no= no /10;
        // //no = 93 / 10 = 9
        // no = no /10; //count++ 3
        // //no = 9 /10 =0
        // no = no /10; //connt++ 4

        do{
            no = no /10;
            count++;
        }while(no!=0);
        printf("\n count = %d",count);


   
}