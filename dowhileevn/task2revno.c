#include<stdio.h>

void main()
{
    int no,rem,rev =0;
    printf("\n enter no :");
    scanf("%d",&no);

    //123 -->3,2,1
    //123 -> 
    //123 %10 = 3
    //123/10  =12
    //12 % 10 =2
    //12/10 = 1
    //1 % 10 = 1
    //1 / 10 =0



    do{

        //123
        //rem = 123 % 10 = 3
        //rem = 12 % 10 = 2
        //rem = 1 %10 =1
        rem = no % 10;
        //printf("\n rem = %d",rem); //3 //2 //1
        //rev =(0*10)+3 = rev = 3
        //rev = (3*10)+2 =rev =32
        //rev = (32*10)+1 = rev = 321
        rev = (rev *10) + rem;
        no = no /10;
        //no = 123 / 10 = 12
        //no = 12/ 10 = 1
        //no = 1/10 = 0
        


    }while(no!=0); //12!=0 True //1 != 0 True // 0!=0 false

    printf("\n rev =%d",rev);
   
}