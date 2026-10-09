#include<stdio.h>

int power(int b,int exp){

    //2,3
    //2,2
    //2,1
    //2,0

    if(exp==0){
        return 1; //1
    }

    //return 2 *power(2,3) //2*4 =8
    //return 2 *power(2,2) //2*2 = 4
    //return 2 *power(2,1) =2*1 = 2
    ////return 2 *power(2,0) =1
    return b*power(b,exp-1);

}


void main()
{

    power(2,3);
   
}