#include<stdio.h>

void main()
{
    
    char choice;
    printf("\n enter your choice y for con n for exit");
    scanf("%c",&choice);
    if(choice=='y' || choice == 'Y'){
        printf("\n welcome...");
    }
    else if(choice=='n' || choice == 'N'){
        printf("exit...");
    }
    else{
        printf("\n invalid choice ");
    }
   
}