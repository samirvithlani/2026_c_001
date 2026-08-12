#include<stdio.h>

void main()
{
    
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,searchelem,found=0;
    
    //print
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n enter element to search ::");
    scanf("%d",&searchelem); //6

    for(i=0;i<3;i++){
        //i=0,i=1
        for(j=0;j<3;j++){
            //a[0][0] == 6
            //a[0][1] =  6 false
            //a[0][2] = 6 false
            //a[1][0] = 4=6 false
            //a[1][1]=5=6 false
            //a[1][2] = 6 true
            if(a[i][j]==searchelem){
                found=1;
                break;
            }
        }
    } //search loop end...

    if(found==1){
        printf("\n element found ...");
    }
    else{
        printf("\n element not found !!!");
    }


   
}