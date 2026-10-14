#include<stdio.h>

//4
int fibonacci(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1; //1
    }
            
    int a = fibonacci(n-1);   //fibo(n-1) fibo(1-1)=0
    int b = fibonacci(n-2);   //fibo(3-2) //1


    // result = 0 + 1 = 1
    int result = a + b; 
    


    return result; 

}

void main()
{
   
    int x =fibonacci(4);
    printf(" %d ",x);
   
}