#include<stdio.h>

void main()
{
    
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,temp;
    for(i=0;i<3;i++){
        //j=0,j=1
        for(j=0;j<3;j++){
            if(i==0){
                temp = a[i][j]; //temp=1 , temp =2
                a[i][j]=a[2][j];//a[0][0]=7 ,a[0][1]=8
                a[2][j] = temp; //a[2][0]=1 ,a[2][j]=2s
            }
        }
    }//swap loop over

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
   
}