#include<stdio.h>

void main()
{
 
    int heights[5]={4,3,5,6,4},i,max;
    max = heights[0]; //max=4

    for(i=0;i<5;i++){

        //heights[0]=4>4 -FALSE
        //heights[1]=3>4 -FALSE
        //heights[2]=4>4 -TRUE
        //heights[3]=6>5 TRUE
        //heights[4]=4>6 FALSE
        if(heights[i]>max){
            max = heights[i];  //max = 5 ,max = 6
        }

    }

    printf("\n max elm = %d",max);


   
}