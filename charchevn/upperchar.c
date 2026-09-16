#include<stdio.h>

//A - 65
//a - 97
// 97 - 65 = 32
void main()
{
    
    char name[100],upperName[100];
    int i;

    printf("\n enter Name :");
    gets(name);

    //amit
    //97
    for(i=0;name[i]!='\0';i++){
        //uppername[0] = name[0]-32;  97-32 - >65->A
        if(name[i]>='a' && name[i]<='z'){
            upperName[i] = name[i]-32;
        }
        else{
            upperName[i] = name[i];
        }
        
    }

    upperName[i] ='\0';
    printf("\n uppername = %s",upperName);


    
   
}