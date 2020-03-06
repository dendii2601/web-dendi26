#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, batas;
    printf("input batas deret bilangan fibonanci : ");
    scanf("%d",& batas);
    printf("\n");
    printf("output : ");

    c = 1, a = 0, b = 1;
    printf("%d ",a);
    while(c<=batas) {
        printf("%d  ",c);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");


    return 0;
}
