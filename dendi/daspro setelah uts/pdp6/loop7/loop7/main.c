#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    printf("anggota bilangan angka 1 dengan interval 0-100 =\n\n");
    for (d=1; d<=100; d++) {
        if (d==1||(d>10&&d<20)||(d>10&&d%10==1)) {
            printf("%d",d);
        }
    }
    return 0;
}
