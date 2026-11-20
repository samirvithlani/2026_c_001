#include<stdio.h>

int demo(){

    return 100;
}

//int c=100;

int* test(){

    //int c =100; //local variable
    static int c =100; // static storage single memory
    //applying first solution making c global variable
    //apply 2nd solution.. make static variable..
    printf("\n value of c  in test function  =%d",c);
    printf("\n address of c  in test function  =%u",&c);

    return &c;
    

}

void main()
{
        int *ptr; //own address
        // int x;
        // x = demo();
        // printf("\n x = %d",x);

        ptr = test();

        printf("\n value of ptr in main = %d",*ptr);
        printf("\n address of ptr in main = %u",ptr);


   
}