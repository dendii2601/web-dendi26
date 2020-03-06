#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int den;
    printf("masukkan den : ");
    scanf("%d",& den);
    for (d=1; d<=den; d++) {
        printf("perulangan ke : %d\n", d);
    }

    /*   Karna menggunakan perulangan for jadi tinggal memasukkan nilai den nya,
        setelah itu output nya akan keluar secara otomatis sesui dengan nilai den yang di masuukan.
        di sini saya menggunakan variabel d dan den karena itu inisial dan nama saya sendiri

    */


    return 0;
}
