#include<stdio.h>

void main()
{
 
    //r -> 101
    //o ->102
    //y->103
    //a->104
    //l->105
    //'\0'->106
        char name[]="Royal123";
        char *p = &name[0];
        int len=0,cap=0,small=0;

        while(*p!='\0'){
            printf("\n char = %c",*p);
            if(*p>='A' && *p<= 'Z'){
                cap++;
            }
            if(*p>='a' && *p<= 'z'){
                small++;
            }
            *p++;
        
        }

        printf("\n cap = %d",cap);
        printf("\n small = %d",small);
   
}