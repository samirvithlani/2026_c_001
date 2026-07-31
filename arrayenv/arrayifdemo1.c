#include<stdio.h>

void main()
{
 
        int arr[10],i;
        for(i=0;i<10;i++){
            printf("\n enetr valud for index  %d  :",i);
            scanf("%d",&arr[i]);
        }

        printf("\n elements are :::");

        for(i=0;i<10;i++){
            if(arr[i]%2==0){
                printf("\n index = %d even = element = %d",i,arr[i]);
            }
        }
   
}