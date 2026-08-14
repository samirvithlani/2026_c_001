#include<stdio.h>

void main()
{
 
    int a[3][3]={{11,22,44},{7,88,9},{121,3,4}};
    int i,j,max=a[0][0];

    //max = 11

    //a[0][0] >max -->swap 11>11
    //a[0][1] >max -->22>11 --swap --max= 22
    //a[0][2] > max - 44>22 -swap -- max = 44
    //a[1][0] >max -- 44>7 --> max =44

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>max){
                max = a[i][j];
            }
        }
    }

    printf("\n max element = %d",max);

   
}