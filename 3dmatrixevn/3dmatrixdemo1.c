#include<stdio.h>

void main()
{
 
    //we have 2 classes each calass has 2 student , each student has 2 marks
    int a[2][2][2];
    int i,j,k;
    // i=0,i=1
    for(i=0;i<2;i++){
        //j=0,j=1
        for(j=0;j<2;j++){
            //k=0,k=1
            for(k=0;k<2;k++){
                printf("\n enter element ");
                scanf("%d",&a[i][j][k]);
            }//kth loop coln // subject loop end
        }//jth loop over row // student loop end

    }//ith loop over layer loop //class loop end
   

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("  %d  ",a[i][j][k]);
            }//kth loop coln // subject loop end
            printf("\n");
        }////jth loop over row // student loop end

        printf("\n");
    }////ith loop over layer loop //class loop end
}