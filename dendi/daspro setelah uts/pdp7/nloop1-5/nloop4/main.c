#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    for (d=1; d<=7; d++) {
        printf("perulangan ke : %d\n\n" , d);
        for (den=1; den<=10; den++) {
            printf("angka ke : %d\n\n" , den);
        }
    }
    return 0;
}
