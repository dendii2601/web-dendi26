#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    d=1;
    printf("masukkan den : ");
    scanf("%d",& den);
    while (d<=den) {
        printf("perulangan ke : %d\n", d);
        d++;
    }

     /*   Karna menggunakan perulangan while jadi sedikit berbeda dengan perulangan for walaupun hasil output nya sama,
        di sini saya menggunakan variabel d dan den karena itu inisial dan nama saya sendiri

    */


    return 0;
}
