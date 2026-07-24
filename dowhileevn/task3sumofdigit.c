#include<stdio.h>

//no is twin no or not
// 123 = 1 + 2 + 3 = 6
// 123 = 1* 2 * 3 = 6
void main()
{
 
    int no,sum=0,rem,mul=1;
    printf("\n enter no :");
    scanf("%d",&no);

    do{
        //123
        rem = no % 10;  //3,2,1
        //sum = 0 + 3 = 3
        //sum = 3 + 2 = 5
        //sum = 5 + 1 = 6
        sum = sum + rem;
        mul = mul * rem;

        no = no /10;

    }while(no!=0);

    printf("\n sum = %d",sum);
    printf("\n mul = %d",mul);
    if(sum==mul){
        printf("\n given no is twin number");
    }
    else{
        printf("\n given no is not twin number");
    }
   
}