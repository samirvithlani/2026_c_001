#include<stdio.h>

void main()
{
    
    int a[5]={1,2,3,4,5},b[5],i;
    //a[0] = b[4]
    //a[1] = b[3]
    //a[2] = b[2]
    //a[3] = b[1]
    //a[4] = b[0]

    // ------------

    //b[0] =a[4]
    //b[1] =a[3]
    //b[2] =a[2]
    //b[3] =a[1]
    //b[4] =a[0]


    //reverse copy
    for(i=0;i<5;i++){

            //b[0] = a[4]
            //b[1] = a[3]
            //b[2] = a[2]
            //b[3] = a[1]
            //b[4] = a[0]
            b[i] = a[5-i-1];
            
    } //rev copy end

    //printing..loop
    for(i=0;i<5;i++){
        printf("\n index = %d element =%d",i,b[i]);
    }
   
}