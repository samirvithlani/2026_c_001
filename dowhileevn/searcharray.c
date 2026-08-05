#include<stdio.h>

void main()
{
    
    int a[5],i,found=0,searchelm;
    for(i=0;i<5;i++){
        printf("\n enter %d element ",i);
        scanf("%d",&a[i]);
    }

    // 12 78 95 62 1
    //search element 62

    printf("\n enter search element :");
    scanf("%d",&searchelm);

    
    //search loop
    for(i=0;i<5;i++){
        if(a[i]==searchelm){
            found=1;    
          //  printf("\n element found ::");
          break;
        }
        // else{
        //     found=0;
        //     //printf("\n element not found ::");
        // }
    }

    if(found==1){
        printf("\n element found..");
    }
    else{
        printf("\n element not found !!");
    }

   
}