#include<stdio.h>

void main(){

    int no;
    printf("\n enter no :");
    scanf("%d",&no);
    // 10,0
    // 10>0 -->True
    //0>0 -->False
    // -20 -->False
    if(no>0){
        printf("\n no is pos :");
    }
    //0 ==0 -->True
    //-20 ==0 -->false
    else if(no ==0){
        printf("\n no is zero :");
    }
    //else..
    else{
        printf("\n no is neg:");
    }


}