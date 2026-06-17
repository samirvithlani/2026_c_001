#include<stdio.h>

void main(){


        int unit,total;
        printf("\n enter no of units:");
        scanf("%d",&unit);

        if(unit>=300){
            total = unit * 4;
            //printf("\n total bill = %d",total);
        }
        else if(unit>=200){
            total = unit * 3;
            //printf("\n total bill = %d",total);
        }
        else if(unit>=100){
            total = unit * 2;
            //printf("\n total bill = %d",total);
        }
        else{
            total = unit * 1;
            //printf("\n total bill = %d",total);
        }

        printf("\n total bill = %d",total);


}