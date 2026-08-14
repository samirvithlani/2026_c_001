#include<stdio.h>

void main()
{
    int a[3][3],i,j,sum=0;

    //scan
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n enter element ::");
            scanf("%d",&a[i][j]);
        }
    }

    //print loop
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum = sum + a[i][j];
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n sum of matirx = %d",sum);
   
}