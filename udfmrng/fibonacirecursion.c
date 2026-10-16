#include<stdio.h>

//4
//3
int fibonacci(int n){

    int a,b;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1; 
    }
            

    //a = fibo(3) -- stop
    //a = fibo(2) + fibo(1) = 1
    //a = fibo(1) + fibo(0) = 1 + 0 +1 = 2
    a = fibonacci(n-1);
    //b = fibo(2)
    //b = fibo(2-1) + fibo(2-2) = 1 + 0
    b = fibonacci(n-2); 
    
    
    int result = a + b; //2+1 = 3
    

    return result; 

}

void main()
{
   
    int x =fibonacci(4);
    printf(" %d ",x);
   
}