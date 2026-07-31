#include<stdio.h>

void main()
{
 
    // int a=10,b;
    // b =a; //a value --> b
    // printf("\n b =%d",b);
    int arr[5]={11,23,345,467,5},b[5],i;
    //b = arr; //expression must be a modifiable lvalueC/C++(137) Error
    for(i=0;i<5;i++){
        //b[0] = arr[0]
        //b[1] = arr[1]
        //b[2] = arr[2]
        b[i] = arr[i];
    }

    for(i=0;i<5;i++){
        printf("\n copied element in b = %d",b[i]);
    }

    
   
}