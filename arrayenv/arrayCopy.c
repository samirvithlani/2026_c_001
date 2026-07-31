#include <stdio.h>

void main()
{

    // int x=100,y;
    // y = x;
    // printf("\n y =%d",y);
    int a[5] = {1, 2, 3, 4, 5}, b[5], i;
    // b = arr; error...
    // i=0
    for (i = 0; i < 5; i++)
    {
        // b[0] = a[0]
        //b[1]  = a[1]
        //b[2] = a[2]
        b[i] = a[i];
    } // copy loop

    printf("\n your copied element in b ::::::");

    for (i = 0; i < 5; i++)
    {
        printf("\n index = %d element = %d", i, b[i]);
    }
}