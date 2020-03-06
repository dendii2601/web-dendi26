#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, e, n;

    for (d=1; d<=5; d++) {
        for (e=1; e<=d; e++) {
            printf(" " ,  e);
        }
        for (n=5; n>=d; n--) {
            printf("*", n);
        }
        puts("");
    }

    return 0;
}
