#include<stdio.h>

void main()
{
    
    int no,max=0,rem;
    printf("\n enter no :");
    scanf("%d",&no); // 143
    while(no!=0){
        rem = no % 10; //3 4 1
        //3>0
        //4>3
        //1>4
        if(rem>max){
            max = rem;  //max = 3 //max = 4
        }
        no = no/10;
    }

    printf("\n max = %d",max);
   
}