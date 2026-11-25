#include<stdio.h>

// struct Student{
//     int sid;
//     char sname[20];
//     float marks;
// };

struct Student{
    int sid;
    char sname[20];
    float marks;
}s; //with referance..

void scanMarks(){

  //  struct Student s;
    printf("\n enter value of sid");
    scanf("%d",&s.sid);
    printf("\n enter value of snane");
    scanf("%s",&s.sname);
    printf("\n enter value of marks");
    scanf("%f",&s.marks);

}

void printMarks(){
//    struct Student s;
    printf("\n sid = %d  sname = %s  marks = %f",s.sid,s.sname,s.marks);
}

void main()
{
   //structure ref
    scanMarks();
    printMarks();
}