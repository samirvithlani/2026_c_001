#include<stdio.h>

void main(){

    float sal,net_sal,pa;

    printf("\n enter monthly sal:");
    scanf("%f",&sal);

    pa = sal * 12;
    printf("\n yealry salry = %f",pa);

    //tax 
    net_sal = (pa * 90)/100;
    printf("\n net_sal after tax deduct : %f ",net_sal);

}