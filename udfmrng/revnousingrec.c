#include<stdio.h>
//n=123 .rev=0
//n=12 , rev=3
//n=1,rev=32
//n=0,rev=321
int revno(int n,int rev){

    if(n==0){
        return rev; //321
    }
    

    //revno(12,3)
    //revno(1,32)
    //revno(0,321)
    return revno(n/10,rev*10+n%10);

}

void main()
{
    
    int ans;
    ans = revno(123,0);
    printf("\n ans=  %d",ans);
   
}