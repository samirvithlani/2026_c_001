#include<stdio.h>

void main()
{
 
        int no ;
        int no2 = 5689; //4
        int count=0;

        printf("\n enter no ;");
        scanf("%d",&no);

        no = no / 10;// 123 / 10  =12
        count++; //1
        no = no / 10;// 12 / 10 = 1
        count++; //2
        no = no / 10; // 1 / 10 = 0
        count++;

//        printf("%d",no);
        printf("\n count = %d",count);

      no2 = no2 /10; // = 5689 / 10 = 568
      no2 = no2 / 10; // 568 / 10 = 56
      no2 = no2 / 10; // 56 / 10 = 5
      no2 = no2 / 10; // 5 / 10 = 0

   
}