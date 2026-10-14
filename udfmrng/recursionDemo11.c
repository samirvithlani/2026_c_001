#include<stdio.h>

//10,3
//7,3
//4,3
//1,3
int makeGroup(int mangos,int size){

    //10<3
    //7<3
    //4<3
    //1<3
    if(mangos<size){
        return 0;
    }

           // 1+ makegrouo(10-3,3) //1 + 2 = 3
           // 1+makegroup(7-3,3)  //1 + 1 = 2
           //1 + makegrouo(4-3,3) // 1+0 =1
    return 1+makeGroup(mangos-size,size);

}

void main()
{
   
    int g;
    g = makeGroup(10,3);
    printf("\n g = %d",g);
   
}