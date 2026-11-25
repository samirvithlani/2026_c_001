#include<stdio.h>

struct Student{
    int sid;
    char sname[20];
    float marks;
};

void getData(){

    struct Student s; //ref 
    printf("\n enter student id:");
    scanf("%d",&s.sid);
    printf("\n enter student Name:");
    scanf("%s",&s.sname);
    printf("\n enter student Marks:");
    scanf("%f",&s.marks);
}

void printData(){

    struct Student s; //ref 
    printf("\n Student id = %d Name = %s  marks = %f",s.sid,s.sname,s.marks);
}

void main()
{

    
    getData();
    printData();

    
   
}