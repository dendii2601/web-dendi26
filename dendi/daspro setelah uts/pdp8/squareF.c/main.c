#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;
    printf(" --- SQUARE F ---\n");
    printf(" Masukkan batas :");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=i;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}

