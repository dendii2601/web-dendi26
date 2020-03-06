#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    for (d=1; d<=5; d++) {
        for (den=1; den<=d; den++) {
            printf("*" ,den);
        }   printf("\n");
    }

    return 0;
}
