#include<stdio.h>

int findMax(int arr[],int size){

    int i,max=arr[0];
    for(i=0;i<size;i++){

        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}


void main()
{
 
    int x[5]={11,22,345,67,89},ans;
    ans = findMax(x,5);
    printf("\n ans = %d",ans);
   
}