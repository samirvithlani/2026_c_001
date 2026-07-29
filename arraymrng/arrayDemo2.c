#include<stdio.h>

void main()
{
    
    int rollno[5],i;
    // printf("\n enter 1st roll no:");
    // scanf("%d",&rollno[0]);
    // printf("\n enter 1st roll no:");
    // scanf("%d",&rollno[0]);
    // printf("\n enter 1st roll no:");
    // scanf("%d",&rollno[0]);
    // printf("\n enter 1st roll no:");
    // scanf("%d",&rollno[0]);
    // printf("\n enter 1st roll no:");
    // scanf("%d",&rollno[0]);

    for(i=0;i<5;i++){
        printf("\n enter %d roll no",i);
        scanf("%d",&rollno[i]);
    }

    printf("\n rollnos are :::::");
    for(i=0;i<5;i++){
        printf("\n index = %d value = %d",i,rollno[i]);
    }

   
}