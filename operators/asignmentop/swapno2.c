#include<stdio.h>

void main(){

        int x=10,y=20;

        x = x + y; // x = 10 + 20 = x =30
        y = x - y; //y = 30 - 20 = y = 10
        x = x - y; //x = 30 - 10 = x = 20

        printf("\n value of x after swap = %d",x);
        printf("\n value of y after swap = %d",y);


}