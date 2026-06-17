#include<stdio.h>

void main(){


        int m,s,avg;
        printf("\n enter maths marks:");
        scanf("%d",&m);
        printf("\n enter sci marks:");
        scanf("%d",&s);

        avg = (m+s)/2;
        //82 ,73
        //82>=80- ->True
        //73>=80 --> False
        if(avg>=80){
            printf("\n grade A");
        }
        //73>=70 --> True
        else if(avg>=70){
            printf("\n grade B");
        }
        else if(avg>=60){
            printf("\n grade C");
        }
        else{
            printf("\n grade D");
        }




}