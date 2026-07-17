#include<stdio.h>

void main()
{
   
    int i,j;

    for(i=1;i<=5;i++){
        //i=1
        //i=2 ,i =3
        for(j=1;j<=i;j++){
            //j=1,j=2,j=3
            printf("%d ",j); //1
                             //1 2
                             //1 2 3
        }
        printf("\n");
    }
    
}