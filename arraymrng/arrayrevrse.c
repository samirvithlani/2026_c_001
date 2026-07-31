#include<stdio.h>

void main()
{
 
    //1,2,3,4,5
    //5,4,3,2,1
    int arr[5]={1,2,3,4,5},rev[5],i;
    //rev ={5,4,3,2,1}

    //i=0
    //i =1
    for(i=0;i<5;i++){
        //rev[0] = arr[4] = rev[0]=5
        //rev[1] = arr[3] =rev [1]=4
        //rev[2] = arr[2] =rev[2] =3
        //rev[3] = arr[1] = rev[3]=2
        //rev[4] = arr[0] = rev[4] = 1
        rev[i] = arr[5-1-i];
    }



    for(i=0;i<5;i++){
        printf("\n rev = %d",rev[i]); //{1,2,3,4,5} --> {5,4,3,2,1}
    }
   
}