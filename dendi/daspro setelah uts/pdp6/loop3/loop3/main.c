#include <stdio.h>
#include <stdlib.h>

int main()
{

    int d;
    int e;

    for (d=1, e=0; d<=10; d++, e++) {
        printf("masukkan data ke %d : ", d);
        scanf("%d",&e);
    }

    return 0;
}
