#include<stdio.h>

void main()
{
    
    //array stores data in index and index alwasy starts with 0
    //index
    //0 1 2 3 4
    int rollno[5]={101,102,103,104,105};
    int i;
    //printf("%d",rollno);
    //accessing index

    /*
    printf("\n 0th index = %d",rollno[0]);
    printf("\n 1st index = %d",rollno[1]);
    printf("\n 2nd index = %d",rollno[2]);
    printf("\n 3rd index = %d",rollno[3]);
    printf("\n 4th index = %d",rollno[4]);
    */
   for(i=0;i<5;i++){
    printf("\n %d index = %d ",i,rollno[i]);
   }
    
   
}