#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int de;
    int den;

    printf("masukkan nilai : ");
    scanf("%d" ,&de);
    for (d=1; d<=10; d++) {
        for (den=1; den<=1; den++) {
            den=d*de;
            printf(" %d x %d = %d\n", d,de,den);
        }
    }
    return 0;
}
