#include<stdio.h>

void updateMarks(int **x){

    **x=90;
}

void main()
{
    int marks=70;
    int *cr;
    cr = &marks;

    updateMarks(&cr);
    printf("\n after cr update marks = %d",marks);
   
}