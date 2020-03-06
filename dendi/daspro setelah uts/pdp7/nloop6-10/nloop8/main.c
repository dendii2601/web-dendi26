#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    den=1;
    while (den<=7) {
        printf("perulangan ke : %d\n\n" , den);
        den++;
        d=1;
        while (d<=10) {
            printf("angka ke : %d\n\n" , d);
            d++;
        }
    }

    return 0;
}
