#include<stdio.h>
//123 = 1+2+3 = 6


void main()
{

    int no,rem,sum=0;
    printf("\n enter no :");
    scanf("%d",&no);

    // //rem =  123 %10 = 3
    // rem = no % 10; 
    // //sum = 0 + 3 = sum=3
    // sum = sum + rem;
    // //no = 123 / 10 = 12
    // no = no /10;
    // /////////////////////

    // //rem = 12 % 10 = 2
    // rem = no % 10; 
    // //sum = 3 + 2 = sum = 5
    // sum = sum + rem;
    // //no = 12 / 10 = 1
    // no = no /10;

    // ///////////////////
    // //rem = 1 % 10 = 1
    // rem = no % 10; 
    // //sum = 5 + 1 = sum = 6
    // sum = sum + rem;
    // //no = 1 / 10 = 0
    // no = no /10;

    //op stop

    do{
        rem = no % 10;
        sum = sum + rem;
        no = no /10;
    }while(no!=0);

    printf("\n sum of digit = %d",sum);



   
   
}