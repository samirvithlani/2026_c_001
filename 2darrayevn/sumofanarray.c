#include<stdio.h>

void main()
{
 
        int a[3][3],i,j,sum=0;

        //sacn
        //i=0
        for(i=0;i<3;i++){
            //j=0,=1,j=2
            for(j=0;j<3;j++){
                printf("\n enter data for ith %d or jth %d ",i,j);
                scanf("%d",&a[i][j]);
            }

        }

        //print
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d ",a[i][j]); // 1 2 3
                sum = sum + a[i][j];
            }
            printf("\n");
        }

        printf("\n sum =%d",sum);

   
}