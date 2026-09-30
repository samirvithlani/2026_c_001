#include<stdio.h>

int getlen(char name[]){

    int i,len=0;
    for(i=0;name[i]!='\0';i++){
        len++;
    }

    return len;

}


void main()
{
    int ans;
    char x[100]="amit",x1[100]="hi this is javascript";
    ans = getlen(x);
    printf("\n len = %d",ans);
    ans = getlen(x1);
    printf("\n len = %d",ans);
   
}