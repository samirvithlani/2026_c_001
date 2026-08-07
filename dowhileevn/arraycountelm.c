#include<stdio.h>

void main()
{
    
    int a[5],count=0,i,elm;

    for(i=0;i<5;i++){
        printf("\n eneter i element ",i);
        scanf("%d",&a[i]);
    }

    printf("\n enter element to count");
    scanf("%d",&elm);

   for(i=0;i<5;i++){
    if(a[i]==elm){
        count++;
    }
   }
   printf("\n %d  found in array %d time",elm,count);
}