#include<stdio.h>

void main()
{
 
    //r -> 101
    //o ->102
    //y->103
    //a->104
    //l->105
    //'\0'->106
        char name[]="Royal Technosft p ltd";
        char *p = &name[0];
        int len=0;

        while(*p!='\0'){
            printf("\n char = %c",*p);
            *p++;
            if(*p==' ')
            {
                len++;
            }
        }

        printf("\n len = %d",len);
   
}