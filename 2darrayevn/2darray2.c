#include<stdio.h>

// 1 2
// 3 4
// 5 6


void main()
{
 
    int a[3][2],i,j;
    for(i=0;i<3;i++){
        
        for(j=0;j<2;j++){
            printf("\n enter element for index %d[%d]",i,j);
            
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
   
}