#include<stdio.h>
#include<string.h>

void main()
{
    
    char name[100],name2[100];
    int res;

    printf("\n enter name ::");
    gets(name);

    printf("\n enter name2 ::");
    gets(name2);

    res = strcmp(name,name2);
    printf("\n res = %d",res);
    //if both strings are same then res =0
    if(res==0){
        printf("\n both strings are same !!");
    }
    else{
        printf("\n both strings are diff !!");
    }




   
}