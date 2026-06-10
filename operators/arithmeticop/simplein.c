#include<stdio.h>

void main(){

    //ans = p * r * n 
    float p,r,n,ans=0;
    printf("\n enter value of p :");
    scanf("%f",&p);
    printf("\n enter value of r :");
    scanf("%f",&r);
    printf("\n enter value of n :");
    scanf("%f",&n);

    ans = p * r * n;
    printf("\n ans = %f",ans);

}