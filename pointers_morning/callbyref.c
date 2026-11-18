#include <stdio.h>

//call by referance..
void swap(int *a, int *b)
{

    printf("\n swap function called..");

    printf("\n inside swap function before swap value of a = %d", *a); // 10
    printf("\n inside swap function before swap value of b = %d", *b); // 20

    int c;
    c = *a;
    *a = *b;
    *b = c;

    printf("\n inside swap function after swap value of a = %d", *a); // 20
    printf("\n inside swap function after swap value of b = %d", *b); // 10
}

void main()
{

    int x = 10, y = 20;
    printf("\n main called..");

    printf("\n inside main value of x before swap called =%d", x); // 10
    printf("\n inside main value of y before swap called =%d", y); // 20

    swap(&x, &y);

    printf("\n inside main value of x after swap called =%d", x); // 20
    printf("\n inside main value of y after swap called =%d", y); // 10
}