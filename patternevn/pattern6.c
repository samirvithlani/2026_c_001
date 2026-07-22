#include<stdio.h>
/*

* * * * *
*       *
*       *
*       *
* * * * *



*/

void main()
{
   
    int i,j;
    //i ==1
    //i==2
    //i=3
    //i=5
    for(i=1;i<=5;i++){

        //j=1,j=2,j=3,j=4,j=5
        //j=1 ,j=2,j=3,j=4,j=5
        for(j=1;j<=5;j++){
            if(i==1 || i ==5 || j ==1 || j==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
   
}