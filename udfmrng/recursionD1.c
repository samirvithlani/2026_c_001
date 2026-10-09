#include<stdio.h>

int collect(int amount,int stu){
    //10,0
    //10,1
    //10,2
    //10,3


    if(stu==0){
        return 0;
    }
          
    // 10+ collect(10,3) //10+20 = 30
    // 10+ collect(10,2) //10+10 =20
    // 10+ collect(10,1) //10+0 =10
    // 10+ collect(10,0) //0
    return amount + collect(amount,stu-1);

}
void main()
{
   
    
    collect(10,3);
   
}