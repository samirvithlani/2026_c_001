#include<stdio.h>
//bubble sort

// 50 20 40 10 30
//p1:
//50>20 -swap
//20 50 40 10 30
//50>40 -swap
//20 40 50 10 30
//50>10 -swap
//20 40 10 50 30
//50>30 swap

//20 40 10 30 50

//p2:
//20>40 -no swap
//40>10 -swap
//20 10 40 30 50
//40>30 -swap
//20 10 30 40 50
//40>50 no swap

//20 10 30 40 50

//p3:
//20>10 swap
//10 20 30 40 50
//20>30 no swap
//30>40 no swap
//40>50 no swap


void main()
{
  
    int a[5],i,j,temp;
    printf("\n enter elements:::");
    //scan elmenet
    for(i=0;i<5;i++){

        printf("\n enter element for %d :",i);
        scanf("%d",&a[i]);
    }
    //bubble sort loop
//50 20 40 10 30
    for(i=0;i<5;i++){

        for(j=0;j<4;j++){

           //a[0] > a[1]
           //50 > 20
           //a[1]>a[2] 50>40
            if(a[j]>a[j+1]){

                temp = a[j]; //temp = 50
                a[j] = a[j+1]; //a[1]=40
                a[j+1] = temp; //a[2] = 50
            }

        }
    }

    //print loop
    for(i=0;i<5;i++){
        printf("\n index = %d element = %d",i,a[i]);
    }
   
}