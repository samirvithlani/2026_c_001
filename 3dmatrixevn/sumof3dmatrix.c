#include<stdio.h>

void main()
{
    
    //2 building 2 floors every floor has 3 rooms
    int a[2][2][3],i,j,k,sum=0;
    //scan
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("\n enter layer %d row =%d coln =%d",i,j,k);
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    //print
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf(" %d ",a[i][j][k]);
                sum = sum+a[i][j][k];
            }
        }
    }

    printf("\n sum of matrix = %d",sum);
   
}