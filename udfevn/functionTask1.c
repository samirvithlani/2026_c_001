#include<stdio.h>

//123 --> 321
int revno(int no){

    int rev =0,rem;
    while(no!=0){


        rem = no % 10; //3 //2 //1
        rev = (rev*10)+rem; //3 //32  320+1 321
        no = no/10; //12 //1 //0

    }

    return rev;

}



void main()
{
    int ans;
    ans = revno(123);
    printf("ans = %d",ans);
}