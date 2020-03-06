#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;
    printf(" --- SQUARE G ---\n");
    printf(" Masukkan Batas :");
    scanf("%d",&i);
    a=1;
    while(a<=i)
    {
        for(b=a;b<=(a+4);b++)
        {
            printf("%d",b);
        }
        printf("\n");
        a++;
    }
    return 0;
}

