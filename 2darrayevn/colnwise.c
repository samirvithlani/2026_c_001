#include<stdio.h>


void main()
{
    
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum=0;

    //print loop
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("  %d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("---------------\n");

//  1 2 3
//  4 5 6
//  7 8 9

    //i=0,i=1
    for(i=0;i<3;i++){
        //j=0
        for(j=0;j<3;j++){
             //sum = 0 +a[0][0]   
             //sum =  +a[1][0]
             //sum =  +a[2][0]
             //sum = + a[0][1]
            sum = sum+a[j][i];
        }
        printf(" %d  ",sum);
        sum=0;
    }

   
}