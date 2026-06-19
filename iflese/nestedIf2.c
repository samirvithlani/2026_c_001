#include<stdio.h>

void main(){


        int age;
        printf("\n enter age :");
        scanf("%d",&age);

        //19
        if(age>=18){
            printf("\n eligible for DL:");

            if(age>21){
                printf("\n eligible for marrige ::");
            }
            else{
                printf("\n not eligible for marrige::");
            }
        }
        else{
            printf("\n NOt eligible for DL");
            if(age>=16){
                printf("\n eligible for L DL");
            }
            else{
                printf("\n stay at home:");
            }

        }


}