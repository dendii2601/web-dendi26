#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    for (d=1; d<=7; d++) {
        printf("perulangan ke : %d\n\n" , d);
        den=1;
        do {
            printf("angka ke : %d\n\n" , den);
            den++;
        } while (den<=10);
    }

    return 0;
}
