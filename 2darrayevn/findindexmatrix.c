#include<stdio.h>

void main()
{
 
        int a[3][3]={{31,23,39},{11,21,33},{44,87,56}},i,j,row= -1,coln = -1,searchelm;

        //print
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %d ",a[i][j]);
            }
            printf("\n");
        }
    
        printf("\n enter element to search position ");
        scanf("%d",&searchelm); //44

        //search loop
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                //a[0][0] 31 == 44 false
                //a[0][1] 23 == 44 false
                //a[0][2] 39 = 44 false
                //a[1][0] =11 ==44 false
                //a[1][1] 21 == 44 false
                //a[1][2] 33 == 44 false
                //a[2][0] 44 == 44 true

                if(a[i][j]==searchelm){
                    row = i;
                    coln =j;
                    break;
                }
            }
        } //search loop end

        if(row>=0 && coln>=0){

            // printf("\n elemnt found at row = %d",row);
            // printf("\n elemnt found at col = %d",coln);

            //positions
            printf("\n elemnt found at row = %d",row+1);
            printf("\n elemnt found at col = %d",coln+1);

        }else{
            printf("\n elment not found...");
        }



   
}