#include<stdio.h>
// wap get number form user
//eg 5
// 5 * 1 = 5
// 5 * 2 = 10
//..
void main()
{
    int i,no;
    printf("\n enter no to print table :");
    scanf("%d",&no);
    for(i=1;i<=10;i++){
        printf("\n %d * %d = %d",no,i,no*i);
    }
   
}