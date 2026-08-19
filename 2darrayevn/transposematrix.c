#include<stdio.h>

/*

1 2 3
4 5 6

op:
1 2
3 4
5 6

*/
void main()
{
   
    int a[2][3]={{1,2,3},{4,5,6}},t[3][2];
    int i,j;

    printf("\n original matrix :::::: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }


    /*

1 2 3
4 5 6

op:
1 4 
2 5
3 6

*/


    //transpose.. copy...
    //i=0,i=1,i=2
    for(i=0;i<3;i++){
        //j=0,j=1
        for(j=0;j<2;j++){
            //t[0][0] = a[0][0]
            //t[0][1] = a[1][0]
            //--------------- new line
            //t[1][0] = a[0][1]
            //t[1][1] = a[1][1]
            //-----------------
            //t[2][0] = a[0][2]

            t[i][j] = a[j][i];
        }
    }

    printf("\n----------------\n");


    //print
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf(" %d ",t[i][j]);
        }
        printf("\n");
    }

    

   
}