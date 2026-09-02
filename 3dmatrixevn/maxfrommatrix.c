#include<stdio.h>

void main()
{
 
    int a[2][2][2],i,j,k,max;
    int l,r,c;

    //scan loop
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("enter data :");
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    max = a[0][0][0];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                if(a[i][j][k]>max){
                    max = a[i][j][k];
                    l = i;
                    r = j;
                    c = k;
                }
            }
        }
    }

    printf("\n max = %d",max);
    printf("\n max found on layer =%d row =%d coln = %d",l,r,c);

   
}