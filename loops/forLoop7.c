
#include<stdio.h>
//wap to find factroial of no
// 5 ->120 5* $ * 3 *2 *1 = 120
void main()
{
   
   int i,no,fact=1;
   printf("\n eenter no to find fact");
   scanf("%d",&no); //5
   //5 *4 3 2 1 =120
   //1 2 3 4 5  =120
   for(i=1;i<=no;i++){
    //i = 1
    //1 = 1  * 1 = 1
    //1 = 1 * 2 = 2
    //2 = 2 * 3 = 6
    //6 = 6 * 4 = 24
    //24 = 24 * 5 = 120
    fact = fact * i;

   }

   printf("\n fact = %d",fact);
}