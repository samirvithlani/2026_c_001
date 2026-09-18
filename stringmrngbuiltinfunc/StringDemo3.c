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

    //res -->0 then both string are same...
    res = strcmp(name,name2);
    if(res==0){

        printf("\n both string are same !!!");
    }
    else{
        printf("\n both string are diff !!!");
    }
    

}