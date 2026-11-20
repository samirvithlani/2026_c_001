#include<stdio.h>

int demo(){

    int p=100; //local
    return p; //value
}

//int a=100; //globa varibale..

int* test(){

    //int a=100; //local variable
    //1st soln make a gloabal varibale
    //2ns soln is make sattic variable
    static int a=100; //static storage not in statc and 1 more thing static variable has only 1 copy
    printf("\n value of a inside test funcion = %d",a);
    printf("\n address of a inside test funcion = %u",&a);
    return &a; //address -->100
}



void main()
{
   
    int x; //local
    int *p; //local ptr
    x  = demo();
    printf("\n x = %d",x);
    p = test();
    printf("\n value of p inside main = %d",*p); //
    printf("\n address of p inside main = %d",p);
   
}