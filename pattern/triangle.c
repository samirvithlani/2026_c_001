#include<stdio.h>

/*

    * 
   ***
  *****
 *******
*********      

*/

void main()
{
   
    int i,j;
    //i=1
    //i=2
    //i=3
    //i=4
    //i=5
    for(i=1;i<=5;i++){

        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        
        //j=1; j<=2*1-1;j++ -- 1 time
        //j=1;j<=2*2-1;j++ --> 3 time
        //j=1;j<=2*3-1;j++ --> 5 time
        //j=1;j<2*4-1;j++ -->  7 time
        //j=1;j<2*5-1;j++ ---> 9 time
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
           printf("\n");
}

}