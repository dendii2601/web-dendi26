#include "header.h"

int main()
{
    int a=2, b=4, c=6, d=9;
    printf("a=2, b=4, c=6, d=9");
    swapValue(&a,&b);
    printf("\nswapValue(a,b)\na=%d b=%d",a,b);
    swapValue(&c,&d);
    printf("\nswapValue(c,d)\nc=%d d=%d",c,d);
    return 0;
}
