#include<stdio.h>
// naman --> rev --> naman
// bob --> bob 
//madam -> madam
//jay --> yaj -->not
void main()
{
   

    char name[100],revname[100];
    int i,j=0,len=0,same=1;

    printf("\n enter name :: ");
    gets(name);

    //find len of string...
    for(i=0;name[i]!='\0';i++){
        len++;
    }
    printf("\n len = %d",len);

    //raj - 3

    //reverse loop
    //2
    for(i=len-1;i>=0;i--){
        //0 = 2
        revname[j] = name[i];
        j++;

    }
    //add null char at the end
    revname[j]='\0';
    printf("\n rev name = %s",revname);

    i=0;
    //compre loop
    while(name[i]!='\0' && revname[i]!='\0'){

        if(name[i]!= revname[i]){
            same=0;
            break;
        }
        i++;
    }


    if(same==1){
        printf("\n string is palindrome !!");
    }
    else{
        printf("\n string is not palindrome !!!");
    }






   
}