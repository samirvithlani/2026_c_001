#include<stdio.h>

void main()
{
    
    // int marks1,marks2,marks3,marks4,marks5;
    int marks[5]={21,22,20,24,25},i;
    //how to access index
    // printf("%d",marks[1]); //22
    // printf("\n %d",marks[4]);
    // printf("\n %d",marks[0]);
    // printf("\n %d",marks[1]);
    // printf("\n %d",marks[2]);
    // printf("\n %d",marks[3]);
    // printf("\n %d",marks[4]);


    for(i=0;i<5;i++){
     //   printf("\n %d",marks[i]);
        printf("\n index = %d mark =  %d",i,marks[i]);
    }
   
}