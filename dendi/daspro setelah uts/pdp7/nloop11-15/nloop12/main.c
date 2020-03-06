#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    den=1;
    do {
        printf("perulangan ke : %d\n\n" , den);
        den++;
        d=1;
        do {
            printf("angka ke : %d\n\n", d);
            d++;
        } while(d<=10);

    }while (den<=7);
    return 0;
}
