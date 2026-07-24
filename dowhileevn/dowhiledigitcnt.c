// no=123 output - 3

#include<stdio.h>

void main()
{
    int no,count=0;
    printf("\n enter no : ");
    scanf("%d",&no); //123 3

    // //no = 123/10 = no =12
    // no = no /10;
    // count++;
    // printf("\n no after 1st op = %d",no);
    // //no = 12/10 = 1
    // no = no /10;
    // count++;
    // printf("\n no after 2nd op = %d",no);
    // //no = 1/10 = 0
    // no = no /10;
    // count++;
    // printf("\n no after 3rd op = %d",no);
    // printf("\n count = %d",count);

    // 4532 --> 4
    do{
        //no = 4532/10 = 453
        //no = 453/10 = 45
        //no = 45/10 = 5
        //no = 5/10 = 0
        no = no /10;
        count++; //1 2 3 4
    }while(no!=0); //453!=0 true //45!=0 True //5!=0 True // 0!=0 False
    printf("\n count = %d",count);
    
}