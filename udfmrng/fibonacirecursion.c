#include<stdio.h>

//4
int fibonacci(int n){

    int a,b;
    printf("\n here...%d",n);
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1; 
    }
            

    
    a = fibonacci(n-1); 
    b = fibonacci(n-2); 
    

    int result = a + b; 
    


    return result; 

}

void main()
{
   
    int x =fibonacci(4);
    printf(" %d ",x);
   
}