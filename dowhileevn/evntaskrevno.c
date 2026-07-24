#include<stdio.h>
// 123 --> 321
void main()
{
    
    int no,rem,rev=0;
    printf("\n enter no :");
    scanf("%d",&no);
    //123
    do{

        //rem = 123 % 10 = 3
        //rem = 12 % 10 = 2
        //rem = 1 % 10 = 1
        rem = no %10;
        //rev = (0*10)+3 = 3
        //rev = (3*10)+2 = 32 
        //rev = (32*10)+1 = 321
        rev = (rev*10) +rem;
        no = no/10; 
        //no = 123 / 10 = 12
        //no = 12 / 10 = 1
        //no = 1/10 = 0

    }while(no!=0); //12!0 True
    printf("\n rev = %d",rev);
   
}