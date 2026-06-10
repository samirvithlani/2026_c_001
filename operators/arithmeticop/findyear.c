#include<stdio.h>

void main(){

    int cyear=2026,byear,yeargap,monthgap;
    printf("\n enter birth year :");
    scanf("%d",&byear);

    yeargap = cyear - byear;
    printf("\n total year = %d",yeargap);
    monthgap = yeargap * 12;
    printf("\n month gap = %d",monthgap);

}