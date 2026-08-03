#include<stdio.h>

void main()
{
    int a[5],i,j,temp;
    printf("\n enter 5 elements ::");

    for(i=0;i<5;i++){
        printf("\n enter value for %d index",i);
        scanf("%d",&a[i]);
    }
    //sort ass
   
    // 0 1 2 3  4 
    // 11 2 3 1 7
    // 1 2 3 7 11


    //11 -->2 : 2 11 3 1 7
    //11 -->3 : 2 3 11 1 7
    //11 -->1 : 2 3 1 11 7
    //11 -->7 : 2 3 1 7 11


    // 55 44 32 98 77

    
    //i=0 ,i=1
    for(i=0;i<5;i++){
        
        
        //j=0
        for(j=0;j<5;j++){
            
            //if(a[0]>a[1])
            //55 > 44 TRUE
            //a[0]>a[1]
            //a[1]>a[2] 55>32
            if(a[j]>a[j+1]){
                
                temp = a[j];    // temp = 55
                a[j] = a[j+1];  // a[1] a[2] = a[1]=32
                a[j+1] = temp; // a [1] = 55
            }   
        }

        //44 55 32 98 77
        //44 32 55 98 77


        //32 44 55 77 98
        
        
    } 


    //print loop

    printf("after sort array is ::");
    for(i=0;i<5;i++){
        printf("\n i =%d element =%d",i,a[i]);
    }


    
    
    
    
}