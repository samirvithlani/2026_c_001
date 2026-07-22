#include<stdio.h>

//no --> factorial
//5 --> 120 --> 5 4 3 2 1 =120
void main()
{
   
    int i=1,no,fact=1;
    printf("\n enter no : ");
    scanf("%d",&no);

    //1 2 3 4 5
    do{
        //1 =1 *1 = 1
        //1 = 1 * 2 = 2
        //2 = 2 * 3 = 6
        //6 = 6 * 4 = 24
        //24 = 24 * 5 = 120
        fact = fact * i;
        i++; //6
    }while(i<=no); //6 break..

    printf("\n fact = %d",fact);
   
}