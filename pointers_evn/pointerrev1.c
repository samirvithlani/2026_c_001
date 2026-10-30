#include<stdio.h>

void main()
{
 
    int a=10,b=20 ;//c;
    int *c;
    //c = a; value copy..

    printf("\n value of a = %d",a); //10
    printf("\n address of a =%u",&a);

    c = &a; //copy address of a and given to c variable [pointer variable..]

    printf("\n value of c = %d",*c); //10
    printf("\n copied address of c = %u",c); //
    printf("\n c's own address = %u ",&c);

    *c = 30;

    printf("\n value of a = %d",a); 



   
}