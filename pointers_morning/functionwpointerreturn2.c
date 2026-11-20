#include<stdio.h>

int accounts[3]={10000,20000,3000};

//1
int* getAccount(int accountNo){

    if(accountNo<0 || accountNo>=3){
        return NULL;
    }
    
    return &accounts[accountNo];

}

void getUpdates(){
    int i;
    for(i=0;i<3;i++){
        printf("\n accounts = %d",accounts[i]);
    }
}

void main()
{
 
    int *bal;
    bal = getAccount(0);
    if(bal!=NULL){
        printf("\n Balance = %d",*bal);
        *bal = *bal+2000;
        getUpdates();

    }
    else{
        printf("\n account does not exists..");
    }

   
}