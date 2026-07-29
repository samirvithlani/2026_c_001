#include<stdio.h>

void main()
{
    
    int marks[5],i,sum=0; 
    for(i=0;i<5;i++){
        printf("\n enter %d markds :",i);
        scanf("%d",&marks[i]);
    }

    printf(":::marks:::");

    for(i=0;i<5;i++){
        sum = sum + marks[i];
        printf("\n index = %d marks = %d",9,marks[i]);
    }

    printf("\n sum = %d",sum);

   
}