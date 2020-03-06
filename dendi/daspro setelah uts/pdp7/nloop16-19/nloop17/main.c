#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int e;
    int n;
    n=4;
    for (d=0; d<=n; d++) {
        for (e=d; e<=n; e++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
