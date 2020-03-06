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
        for (d=1; d<=10; d++){
            printf("anka ke : %d\n\n", d);
        }

    }while (den<=7);
    return 0;
}
