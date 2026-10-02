#include<stdio.h>

int square(int no){

    //int ans = no * no;
    //return ans;
    return no * no;

}


void main()
{
    int x,n;
    printf("\n enter no to find square :");
    scanf("%d",&n);
    //x = square(10);
    x = square(n);
    printf("\n sq = %d",x);
   
}