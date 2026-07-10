#include<stdio.h>

void main()
{
 
    int no,rem,rev=0;
    int temp;
    printf("\n enter no :");
    scanf("%d",&no); // 123 --> 321 , 456 --> 654
    temp = no;

    while(no!=0){

        rem = no % 10;  
        //rem = 456 % 10 = 6
        //45%10 = 5
        //4%10 = 4
        rev = rev * 10 +rem;
        //  = 0*10 + 6 = 6 
        //  6 *10 + 5 65
        //  65*10 + 4  654
        no = no / 10; 
        //456 / 10 = 45
        //45/10  = 4
        //4/10 = 0

    }
    if(temp== rev){
        printf("\n no is palidndrome");
    }
    else{
        printf("\n no is not palindrome");
    }
    printf("\n rev =%d",rev);
   
}