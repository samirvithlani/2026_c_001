#include<stdio.h>

void main()
{
 
    char name1[100]="india",name2[100]="india";
    int i=0,same=1;

    //i = i
    //n = n 
    //d = d
    //a = i
    while(name1[i]!='\0' && name2[i]!='\0'){
        if(name1[i]!=name2[i]){
            same = 0;
            break;
        }
        i++;
    }

    if(same==1){
        printf("\n both string are same !!!!!!");
    }
    else{
        printf("\n both are diff....");
    }
   
}