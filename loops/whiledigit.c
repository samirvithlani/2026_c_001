#include<stdio.h>

void main()
{
 
        int no,evencount=0,oddcount=0,rem;
        printf("\n enter no :");
        scanf("%d",&no);

        //1987
        while(no!=0){

            rem = no % 10; //7,8,9,1 
            if(rem%2==0){
                evencount++;
            }
            else{
                oddcount++;
            }
            no = no/10; //198,19,1,0
        }
        printf("\n even count =%d ",evencount);
        printf("\n odd count =%d ",oddcount);
}