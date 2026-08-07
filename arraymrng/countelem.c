#include<stdio.h>

void main()
{
    
    int a[5],i,count=0,elem;
    for(i=0;i<5;i++){
        printf("\n enter element for %d :: ",i);
        scanf("%d",&a[i]);
    }

    printf("\n enter element to count ::");
    scanf("%d",&elem);

    //count loop
    for(i=0;i<5;i++){
        if(elem==a[i]){
            count++;
        }
    }

    printf("\n count =%d",count);
   
}