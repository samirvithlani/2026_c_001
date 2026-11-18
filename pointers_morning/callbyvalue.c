#include<stdio.h>


void swap(int a,int b){
    //a = 0003 b = 0004
    // a = 10 b =20

    printf("\n swap function called...");

    printf("\n inside swap function before swap value of a = %d",a);
    printf("\n inside swap function before swap value of b = %d",b);

    int c;
    c = a;
    a = b;
    b = c;

    printf("\n inside swap function after swap value of a = %d",a);
    printf("\n inside swap function after swap value of b = %d",b);


}

void main()
{
   int x=10,y=20;
   //x = 0001 y 0002
   //    10     20
   printf("\n main called..");

   printf("\n inside main value of x before swap called =%d",x);
   printf("\n inside main value of y before swap called =%d",y);

   swap(x,y); //swap(10,20)

   printf("\n inside main value of x after swap called =%d",x);
   printf("\n inside main value of y after swap called =%d",y);


   
}