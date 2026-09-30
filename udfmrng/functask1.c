#include<stdio.h>

int findMax(int arr[],int size){

    int i,max;
    max= arr[0];

    for(i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}

void main()
{
    
    int a[5]={11,22,121,34,56},ans;
    ans = findMax(a,5);
    printf("\n max = %d",ans);
   
}