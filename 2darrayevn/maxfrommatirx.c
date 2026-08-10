#include<stdio.h>

void main()
{
 
        int a[3][3],i,j,sum=0,max;

        //sacn
        //i=0
        for(i=0;i<3;i++){
            //j=0,=1,j=2
            for(j=0;j<3;j++){
                printf("\n enter data for ith %d or jth %d ",i,j);
                scanf("%d",&a[i][j]);
            }

        }
        // 1[0,0] 2[0,1] 3[0,2] 
        // 4[1,0] 5[1,1] 6[1,2] 
        // 7[2,0] 8[2,1] 9[2,2]

        max = a[0][0]; //1

        //max loop
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                //1>1 FALSE
                //2>1 TRIE
                if(a[i][j]>max){

                    max = a[i][j]; //max = 2
                }
            }
        }

        printf("\n max elment from matrix = %d",max);
   
}