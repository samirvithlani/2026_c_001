#include<stdio.h>

void main()
{
    
    int a[2][3]={{1,2,3},{4,5,6}},i,j;
    int t[3][2];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    } //print loop ends

    //swap loop
    //1 2 3      1 4
    //4 5 6      2 5
  //             3 6 

    //i=0,i=1
    for(i=0;i<2;i++){
        //j=0,j=1,j=2
        for(j=0;j<3;j++){
            //t[0][0] = a[0][0] = 1
            //t[1][0] = a[0][1] = 2
            //t[2][0] = a[0][2]
            //t[0][1] = a[1][0]
            //t[1][1] = a[1][1]
            t[j][i] = a[i][j];
        }
    }

    //print loop
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf(" %d ",t[i][j]);
        }
        printf("\n");
    }
    

   
}