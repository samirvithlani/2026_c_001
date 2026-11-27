#include<stdio.h>

struct Employee
{
    int eid;
    char ename[20];
    int empSalary;
};

void updateSalary(struct Employee *e1){

    e1->empSalary=190;
}



void main()
{
   
    struct Employee e={101,"raj",120}; //CEO
    struct Employee *ptr; //MANAGER
    ptr = &e;
    updateSalary(ptr);
    printf("\n salary after update = %d",ptr->empSalary);
    printf("\n salary after update = %d",e.empSalary);

   
}