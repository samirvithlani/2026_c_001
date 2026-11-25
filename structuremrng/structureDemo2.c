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
    int results[3];
}s; //with referance..

void scanMarks(){

    int i;
  //  struct Student s;
    printf("\n enter value of sid");
    scanf("%d",&s.sid);
    printf("\n enter value of snane");
    scanf("%s",&s.sname);
    printf("\n enter value of marks");
    scanf("%f",&s.marks);

    for(i=0;i<3;i++){
        printf("\n enter %d resulet",i+1);
        scanf("%d",&s.results[i]);
    }

}

void printMarks(){
//    struct Student s;
    int i;
    printf("\n sid = %d  sname = %s  marks = %f",s.sid,s.sname,s.marks);
    
    for(i=0;i<3;i++){
        printf(" result %d = %d",i+1,s.results[i]);
    }
}

void main()
{
   //structure ref
    scanMarks();
    printMarks();
}