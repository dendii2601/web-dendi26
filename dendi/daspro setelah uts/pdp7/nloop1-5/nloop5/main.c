#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    for (d=1; d<=7; d++) {
        printf("perulangan ke : %d\n\n" , d);
        den=1;
        while (den<=10) {
            printf("angka ke : %d\n\n" , den);
            den++;
        }
    }
    return 0;
}
