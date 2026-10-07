#include<stdio.h>


//5
int sum(int n){

    if(n==0){
        return 0;
    }
    // = 5+sum(4)
    // = 5 + 4 + sum(3)
    // = 5 + 4 + 3+sum(2)
    // = 5 + 4 + 3 + 2 + sum(1)
    // = 5 + 4 + 3 + 2 + 1 +sum(0)
    
    return n+sum(n-1);
    
    

}

void main()
{
    int ans;
    ans = sum(5);
    printf("\n ans = %d",ans);
   
}