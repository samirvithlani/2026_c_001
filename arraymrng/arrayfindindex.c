#include<stdio.h>

void main()
{
 
        int a[5],i,searchelm,found=0,index=-1;

        //scan
        for(i=0;i<5;i++){
            printf("\n enter element for %d ",i);
            scanf("%d",&a[i]);
        }

        //scan search elm
        printf("\n enter search element ::");
        scanf("%d",&searchelm);

        //search
        for(i=0;i<5;i++){
            if(a[i]==searchelm){
                found=1;
                index =i;
                break;
            }
        }        
        if(found==1){
            printf("\n element found at index = %d",index);
        }
        else{
            printf("\n element not found !!");
        }

}