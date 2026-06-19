#include<stdio.h>

void main(){


        int age;
        printf("\n enter age :");
        scanf("%d",&age);

        //15
        if(age>=18){
            printf("\n eligible for DL:");

            if(age>21){
                printf("\n eligible for marrige ::");
            }
            else{
                printf("\n not eligible for marrige::");
                printf("\n years needed for eligible for marrige = %d",21-age);
            }
        }
        else{
            printf("\n NOt eligible for DL");
            printf("\n years needed for eligible for DL = %d",18-age);
            
            if(age>=16){
                printf("\n eligible for L DL");
            }
            else{
                printf("\n stay at home:");
                printf("\n years needed for eligible for l DL = %d",16-age);
            }

        }


}