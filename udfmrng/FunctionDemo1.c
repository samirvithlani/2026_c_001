#include<stdio.h>


//without return type without argument..
void demo(){

    printf("\n demo function called !!");
}

void add(){
    int a=10,b=20,c=0;
    c = a + b;
    printf("\n sum = %d",c);
}


void main()
{
    printf("\n main called !!");
    demo(); // --> function calling..
    add();
   
}