#include<stdio.h>

void main()
{
    char name[100],copyname[100]="";
    int i,j=0;
    printf("\n enter name :");
    gets(name); // india 0 1 2 3 4

    //i=0,j=0
    //i=1,j=1
    //i=2,j=1/
    //i=3
    for(i=0;name[i]!='\0';i++){
        //name[0] == TRUE
        //name[1] =FALSE
        //name[2] =FALSE
        //name[3]=True
        //name[4] = TRue
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            //copyname[0] = name[0] = i
            //copyname[1] = name[3] = i
            //copyname[2] = name[4] = a
            copyname[j]= name[i];
            j++; //1,2,3
        }
    }

    printf("\n name = %s",name);
    printf("\n copyname = %s",copyname);

   
}