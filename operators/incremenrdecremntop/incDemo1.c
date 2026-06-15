#include<stdio.h>

void main(){


        int a =5,res=0;

        //res = ++a;
             // (7+7)
        //res  = ++a + ++a;
        //  =(6 + 7)
        
        //res = a++ + ++a;
        // 5++ + 6 =11    
        //res = a++ + a++;
           // 5++ + 6++ + 7
        //res = a++ + a++ + a++;
        //   ++5 + ++6
            // 7 + 7
        //res = (++a + ++a);
        //   5++  + 6++  +7++ + 8++
        //res = a++ + a++ + a++ + a++;;
          // (7+7) + 8
        //res = ++a + ++a + ++a;
            // (7 + 7) + (9 + 9)
            // (7+7) + 8 + 9 =31
        res = ++a + ++a + ++a + ++a;

            

        printf("\n res =%d",res);
        printf("\n a =%d",a);

}