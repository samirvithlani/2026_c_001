#include<stdio.h>

// decalare 2 varibale
//x = 10 y =20
//print x = 20 , y =10

void main(){

    int x =10,y=20,temp;

    temp = x; // temp = 10
    x = y;   // x = 20
    y = temp; //y =10

    printf("\n value of x after swap = %d",x);
    printf("\n value of y after swap = %d",y);

}