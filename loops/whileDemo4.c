#include<stdio.h>

void main()
{
 
    int no =123; //1 + 2 + 3 = 6
    int rem,sum=0;

    rem = no % 10;//123 % 10 = 3
    sum = sum + rem; // 0 + 3 =sum = 3
    no = no /10 ;  // 123 / 10 = no = 12

    rem = no % 10;  // 12 % 10 = 2
    sum = sum + rem; //3 + 2 = sum = 5
    no = no /10; //12/10 = no = 1

    rem = no%10; // 1 % 10 = rem =1
    sum = sum + rem; // 5 +1 = sum=6
    no = no /10; // 0

    

    
   
}