#include<stdio.h>

void main()
{
    
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            printf("\n enter element for index %d[%d]",i,j);
            
            scanf("%d",&a[i][j]);
        }
    }
    //sum
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            printf("%d ",a[i][j]); //1,2,3
            sum=sum+a[i][j]; //1,2,3 = 6

        }
        printf(" = %d",sum);
        printf("\n");
        sum=0;
    }
   
}