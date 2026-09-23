#include<stdio.h>

//without return type without argument
void demo(){

    printf("\n demo function called !!");
}

void add(){

    int no1=10,no2=20,ans=0;
    ans = no1 + no2;
    printf("\n ans = %d",ans);

}


void main()
{
   
   printf("\n main called...");
   demo(); //function calling part.
   add();

}