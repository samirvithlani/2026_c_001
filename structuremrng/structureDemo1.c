#include<stdio.h>

struct Student{
    int sid;
    char sname[20];
    float marks;
};


void main()
{
   //structure ref
    struct Student s;
    printf("\n enter value of sid");
    scanf("%d",&s.sid);
    printf("\n enter value of snane");
    scanf("%s",&s.sname);
    printf("\n enter value of marks");
    scanf("%f",&s.marks);



    printf("\n sid = %d  sname = %s  marks = %f",s.sid,s.sname,s.marks);
   
}