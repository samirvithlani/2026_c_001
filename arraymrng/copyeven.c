#include<stdio.h>

//DYNAMIC MEMORY ALLOCATION
void main()
{
 
    int arr[10],evenarr[10],i;

    for(i=0;i<10;i++){
        printf("\n enter elements :");
        scanf("%d",&arr[i]);
    }
    //arr = 1,2,3,4,5,6,7,8,9,10

    //copy even element loop
    for(i=0;i<10;i++){

        //eleemnt even
        //arr[0]=1 False
        //arr[1] =2 TRUE
        if(arr[i]%2==0){
            evenarr[i] = arr[i];
        }
    }

    //print even array
    for(i=0;i<10;i++){

        printf("\n even array = %d",evenarr[i]);

    }
   
}