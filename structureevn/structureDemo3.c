#include<stdio.h>

struct Employee
{
    int eid;
    char ename[20];
    float empSalary;
    int increments[2];
    int totalIncrement;
    int baseSalary;
}e[3];

void getEmployeeDetails(){

    int i,j;
    for(i=0;i<3;i++){
        printf("\n enter %d employee id :",i+1);
        scanf("%d",&e[i].eid);
        printf("\n enter %d employee Name :",i+1);
        scanf("%s",&e[i].ename);
        printf("\n enter %d employee Salary :",i+1);
        scanf("%f",&e[i].empSalary);

        for(j=0;j<2;j++){
            printf("\n enter %d employee's %d increment ",i+1,j+1);
            scanf("%d",&e[i].increments[j]);
        }

    }

}

void printEmployeeDetail(){
    int i,j;
    for(i=0;i<3;i++){
        printf("\n %d employee id  =%d",i+1,e[i].eid);
        printf("\n %d employee Name  =%s",i+1,e[i].ename);
        printf("\n %d employee salary  =%f",i+1,e[i].empSalary);
        for(j=0;j<2;j++){
            printf("\n %d employee %d incrmeent = %d",i+1,j+1,e[i].increments[j]);
        }
    }
}


void main()
{
   
    getEmployeeDetails();
    printEmployeeDetail();
   
}