#include<stdio.h>

struct Employee{
    int id;
    char name[20];
    int salary;
};

void increseSalary(struct Employee *e){

    e->salary=1201;
}

void main()
{
    struct Employee e= {101,"raj",1200};
    increseSalary(&e);
    printf("\n salary after hard increment = %d",e.salary);
    
}