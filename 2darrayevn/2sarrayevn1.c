#include<stdio.h>

void main()
{
    
    int a[7][2];
    printf("\n enter monday mor sales:");
    scanf("%d",&a[0][0]);
    printf("\n enter monday evn sales:");
    scanf("%d",&a[0][1]);

    printf("\n enter tues mor sales:");
    scanf("%d",&a[1][0]);
    printf("\n enter tues evn sales:");
    scanf("%d",&a[1][1]);

    printf("\n enter wed mor sales:");
    scanf("%d",&a[2][0]);
    printf("\n enter wed evn sales:");
    scanf("%d",&a[2][1]);



    printf("\n monday mor sales =%d",a[0][0]);
    printf("\n monday evn sales =%d",a[0][1]);

    printf("\n  tue mor sales =%d",a[1][0]);
    printf("\n tu eevn  sales =%d",a[1][1]);

    printf("\n wed mor sales =%d",a[2][0]);
    printf("\n wed evn sales =%d",a[2][1]);

   
}