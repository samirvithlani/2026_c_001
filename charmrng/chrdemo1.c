#include<stdio.h>

void main()
{
    
    char c= 'a';
    int a = 97,i;
    printf("\n char = %c",c);
    printf("\n char = %d",c); //impicit type casting

    printf("\n a = %d",a);
    printf("\n a = %c",a);

    for(i=65;i<91;i++){
        printf(" %c ",i);
    }
   
}