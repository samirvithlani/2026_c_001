#include<stdio.h>

void main()
{
   
    int a[5]={1,2,3,4,5};
    int b[5],i;

    //b = a; error
    
    //copy all elements
    for(i=0;i<5;i++){
        b[i] = a[i];
    }
    //print b

    for(i=0;i<5;i++){
        printf("\n i = %d",b[i]);
    }

    
}