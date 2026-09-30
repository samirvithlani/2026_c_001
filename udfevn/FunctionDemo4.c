#include<stdio.h>


//void add(){} //no return

int add(){

    int c = 100;
    printf("\n add called...");
    //return 100;
    return c;
}

int mul(){
    printf("\n mul called ");
    return 10 *2;
}

float circleArea(){
    printf("\n circle called..");
    float pi=3.14,r=10,ans=0;
    ans = pi * (r*r);
    return ans;
    
//    return 3.14 *(10*10);

}


void main()
{
   
    int x,x1;
    float a;
    x = add();
    printf("\n x = %d",x);
    x1 = mul();
    printf("\n x1 = %d",x1);
    a = circleArea();
    printf("\n circle = %f",a);
   
}