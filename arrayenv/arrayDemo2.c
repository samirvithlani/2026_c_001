#include<stdio.h>

void main()
{
 
    int marks[5],i;
    // printf("\n enter 1st student marks ");
    // scanf("%d",&marks[0]);
    // printf("\n enter 2nd student marks ");
    // scanf("%d",&marks[1]);
    // printf("\n enter 3rd student marks ");
    // scanf("%d",&marks[2]);
    // printf("\n enter 4th student marks ");
    // scanf("%d",&marks[3]);
    // printf("\n enter 5th student marks ");
    // scanf("%d",&marks[4]);

    for(i=0;i<5;i++){
        printf("\n enter %d student marks",i);
        scanf("%d",&marks[i]);
        
    }


    for(i=0;i<5;i++){
        printf("\n marks of %d index = %d",i,marks[i]);
    }
   
}