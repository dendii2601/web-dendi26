#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, hasil, base, exponent;

    printf("input base : ");
    scanf("%d",& base);
    printf("input exponent : ");
    scanf("%d",& exponent);

    hasil=1;

    for (d=1; d<=exponent; d++) {
        hasil*=base;
    }
    printf("%d ^ %d = %d\n", base, exponent,  hasil);
    return 0;
}
