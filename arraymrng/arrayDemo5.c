#include<stdio.h>

//user array 10 elemnts
//even no print

void main()
{
   int arr[10],i;

   for(i=0;i<10;i++){
        printf("\n enter %d element :",i);
        scanf("%d",&arr[i]);
   }

   printf("\n event elements are ::::");

   for(i=0;i<10;i++){
        if(arr[i]%2==0){
            printf("\n index = %d even element = %d",i,arr[i]);
        }
   }
   
}