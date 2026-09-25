#include<stdio.h>

void sumofarray(int a[]){
    int i,sum=0;
    for(i=0;i<5;i++){
        sum = sum+a[i];
    }
    printf("\n sum = %d",sum);

}

void main()
{
 
    int marks[5]={10,20,30,40,50};
    int sales[5]={100,200,300,400,500};
    sumofarray(marks);
    sumofarray(sales);
   
}