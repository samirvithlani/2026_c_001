#include<stdio.h>

void main()
{
    
    char name[100];
    int i,j;
    printf("\n enter name ::");
    gets(name);

    //hello hi

    //i=0
    //i=1 =e
    //i=2
    for(i=0;name[i]!='\0';i++){

        
        //j=1,j=2,j=3
        for(j=i+1;name[j]!='\0';j++){
            
            //h = e
            //h == l

            //h = l
            //h =0
            //h = h
            if(name[i]==name[j]){
                printf("\n dup char found..");
                break;
            }
        }
    }
   
}