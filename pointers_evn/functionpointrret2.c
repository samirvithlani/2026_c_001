#include<stdio.h>


int accounts[]={10000,20000,3000};

//1
int* getBalance(int actno){

    //verify
    if(actno<0 || actno>3){
        return NULL; //null address
    }

    return &accounts[actno]; //array index -->address accounts[0] accounts[1] ..

}

void displayAccounts(){

    int i;
    for(i=0;i<3;i++){
        printf("\n balance = %d",accounts[i]);
    }

}


void main()
{
   
    int *bal; //address
    bal = getBalance(1);
    if(bal!=NULL){
        printf("\n value of bal = %d",*bal);
        *bal = *bal+2000;
        displayAccounts();
    }
    else{
        printf("\n account does not exists.");
    }
   
}