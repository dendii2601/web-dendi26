#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    d=1;
    printf("masukkan den : ");
    scanf("%d",& den);
    do {
        printf("perulangan ke : %d\n", d);
        d++;
    }
        while (d<=den);

   /*       Karna menggunakan perulangan do while juga berbeda dari perulangan for maupun while.
        pada dasar nya ketiga nya memiliki fungsi yang sama dan hasil output nya juga sama,
        hanya saja cara penulisan nya yang berbeda.
        di sini saya menggunakan variabel d dan den karena itu inisial dan nama saya sendiri

    */



    return 0;
}
