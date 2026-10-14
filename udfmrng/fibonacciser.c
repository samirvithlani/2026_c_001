#include<stdio.h>

//0 1 1 2 3 5 8..
void main()
{
   
    int a=0,b=1,i,sum=0;

    printf("\n %d %d",a,b); //0 1

    for(i=1;i<=10;i++){

        //sum = 0 +1 =1
        //sum =1 + 1 = 2
        //sum = 1 + 2 =3
        sum = a +b;
        printf(" %d ",sum); //0 1 1 2 3

        //a = 1
        //a = 2
        a = b;
        //b =1
        //b = 2
        b = sum;
        
    }
    
}