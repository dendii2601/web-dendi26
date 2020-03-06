#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int e;
    int n;

    for (d=1; d<=5; d++) {
        for (e=4; e>=d; e--) {
            printf(" " ,e);
        }
        for (n=1; n<=d; n++) {
            printf("*" ,n);
        }
        printf("\n");
    }
    return 0;
}
