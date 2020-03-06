#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    puts("FOR\n\n");
    for (d=0; d<=127; d++) {
        printf("Ascii %3d = %c\n\n",d,d);
    }

    puts("WHILE\n\n");
    d=0;
    while (d<=127) {
        printf("Ascii %3d = %c\n\n",d,d);
        d++;

    puts("DO- WHILE");
    d=0;
        do {
            printf("Ascii %3d = %c\n\n",d,d);
            d++;
        } while (d<=127);

    }


    return 0;
}
