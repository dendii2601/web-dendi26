#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;
    printf(" --- SQUARE E ---\n");
    printf("Masukkan Batas :");
    scanf("%d",&i);
    a=1;
    do
    {
        b=1;
        do
        {
            printf("%d",a);
            b++;
        }
        while(b<=i);
        printf("\n");
        a++;
    }
    while(a<=i);
    return 0;
}

