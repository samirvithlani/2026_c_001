#include<stdio.h>

void main()
{
    
    int i,j=0;
    char name[100],copyname[100];

    printf("\n enter name ::");
    gets(name);
    //india

    //i=0,j=0
    //i=1,j=1
    //i=2,j=1
    //i=3,j=1
    //i=4,j=2
    for(i=0;name[i]!='\0';i++){
        //name[0] ==i = true
        //name[1] = n  FALSE
        //name[2] = d FALSE
        //name[3] = i = TRUE
        //name[4] = a = TRUE
        
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            //copyname[0] = name[0]
            //copyname[1] = name[3]
            //copyname[2] = name[4]
            copyname[j] = name[i];
            j++; //1 , 2 ,3
        }
    }
    copyname[i]='\0';

    printf("\n copyname = %s",copyname);

   
}