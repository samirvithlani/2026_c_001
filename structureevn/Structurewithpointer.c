#include<stdio.h>

struct Car
{
    int carId;
    char carName[20];
};


void main()
{
   struct Car c = {101,"BMW"};
   struct Car *ptr;
   ptr = &c;
   // -> this pointer
   printf("\n carid = %d",ptr->carId);
   printf("\n carName = %s",ptr->carName);
   
}