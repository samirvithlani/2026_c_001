#include<stdio.h>

//2 5
int power(int b,int exp){

    if(exp==0){
        return 1; //1
    }

    //2*power(2,5)
    //2 *power(2,4)
    //2*power(2,3)
    //2*power(2,2)
    //2*power(2,1)
    //2*power(2,0)


    //power(2,0) = 1
    //power(2,1) = 2*1 = 2
    //power(2,2) = 2*2 = 4
    //power(2,3) = 2*4 = 8
    //power(2,4) = 2*8 = 16
    //power(2,5) = 2* 16 = 32
    

    //   2 * power(2,5)
    return b * power(b,exp-1);

}
void main()
{

    int ans;
    ans = power(2,5);
    printf("\n ans = %d",ans);
   
}