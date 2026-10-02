//recursion
#include<stdio.h>

void hello(){

    int count=0;
    count++;
    printf("Hello");
    if(count==10){
        exit(0);
        hello(); //function call..
    }
    
    
}

void main()
{
   
    hello();
    
}