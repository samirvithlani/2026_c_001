#include<stdio.h>

void main()
{
   
    int i;
    // for(i=1;i<=20;i++){
    //     if(i %2 ==0){
    //     printf("\n i =%d",i);
    //     }
    // }

    // for(i=2;i<=20;i+=2){
    //     printf("\n i =%d",i);
    // }

    //i=2 (i<=20 && i %2 ==0) True;
    //i=4
      for(i=2; (i<=20 && i %2 ==0);i+=2){
        
        printf("\n i =%d",i);
        
    }
    
}