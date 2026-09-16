#include<stdio.h>
// A - 65
// a - 97

//97 - 65 = 32
void main()
{
 
        char name[100],uppername[100];
        int i;

        printf("\n enter name :");
        gets(name);

        //amit
        //97 - 32 = 65 -->A
        //m
        //i
        //t

        //Amit
        for(i=0;name[i]!='\0';i++){

            if(name[i]>='a' && name[i]<='z'){
                uppername[i] = name[i]-32;
            }
            else{
                uppername[i] = name[i];
            }

        }
        uppername[i]='\0';

        printf("\n uppername = %s",uppername);
   
}