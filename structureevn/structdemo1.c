#include<stdio.h>

struct Student{
    int sid;
    char sname[20];
    float marks;
};

void main()
{

    struct Student s; //ref 
    printf("\n enter student id:");
    scanf("%d",&s.sid);
    printf("\n enter student Name:");
    scanf("%s",&s.sname);
    printf("\n enter student Marks:");
    scanf("%f",&s.marks);


    printf("\n Student id = %d Name = %s  marks = %f",s.sid,s.sname,s.marks);
   
}