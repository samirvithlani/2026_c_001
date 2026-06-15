#include<stdio.h>

void main(){

    int no1,no2;
    printf("\n enter no1 :");
    scanf("%d",&no1);
    printf("\n enter no2 :");
    scanf("%d",&no2);
    //10 > 10 -->false
    //10 >= 10
    if(no1>=no2){
        printf("\n no1 is bigger !!");
    }
    else{
        printf("\n no2 is bigger !!");
    }
}