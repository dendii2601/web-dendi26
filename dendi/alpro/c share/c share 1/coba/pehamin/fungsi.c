#include "header.h"

void swapp()
{
    int a;
    int b;
    int temp;
    printf(" masukkan a = ");
    scanf("%d",&a);
    printf(" masukkan b = ");
    scanf("%d",&b);
    printf("\n\n");
    printf("sebelum \n");
    printf("a =%d b =% d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("setelah \n");
    printf("a = %d b=%d\n",a,b);
}
