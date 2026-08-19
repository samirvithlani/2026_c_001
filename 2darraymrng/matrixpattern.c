#include<stdio.h>

void main()
{
   

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==1 & i==1){
                printf(" * ");
            }
            else{
                printf(" %d ",a[i][j]);
            }
        }
        printf("\n");
    }

}

//  1    3 
//  4    6 
//  7    9 

// 1 2 3
// 4 * 6
// 7 8 9