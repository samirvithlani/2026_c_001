#include<stdio.h>

void main(){

    //pi * R *R
    float pi=3.14,r,ans=0.0;
    printf("\n please enter value of R :");
    scanf("%f",&r);

    ans = pi * (r*r);
    printf("\n area of circle = %.2f",ans);

}