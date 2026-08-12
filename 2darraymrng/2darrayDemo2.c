#include<stdio.h>

void main()
{
    
    int a[3][3],i,j;

    //scan loo[]
    //i=0,i=1,i=2
    for(i=0;i<3;i++){
        //j=0,j=1,j=2
        for(j=0;j<3;j++){
            printf("\n enter data for %d[%d] :" ,i,j);
            scanf("%d",&a[i][j]);
        }
    } //scan loop end


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",a[i][j]);
            //printf("%d [ %d ] = %d ",i,j,a[i][j]);
        }
        printf("\n");
    }

   
}