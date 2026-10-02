#include<stdio.h>

//123 --> 3
//4578 -->4
int countDigit(int no){

    int count=0;
    while(no!=0){

        no = no/10;
        count++;
    }

    return count;


}

void main()
{
   
    int no,ans;
    printf("\n enter no :");
    scanf("%d",&no);
    ans = countDigit(no);
    printf("\n ans = %d",ans);
   
}