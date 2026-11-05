#include<stdio.h>

void main()
{
 
    char name[] ="1-Royal123";
    char *p = &name[0];
    int len=0;

    while(*p!='\0'){
        printf("\n char =%c",*p);
        if(*p>='0' && *p<= '9'){
            len++;
        }
        *p++;
    }
    printf("\n len of string =%d",len);
   
}