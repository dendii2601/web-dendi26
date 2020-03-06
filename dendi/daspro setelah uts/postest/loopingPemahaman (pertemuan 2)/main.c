#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer;
    int sum = 0;

    puts("\n1. Selain -1");
    printf("Masukkan nilai: "); scanf("%i", &integer);

    while (integer != -1){
        sum += integer;
        printf("Masukkan nilai: ");
        scanf("%i", &integer);
    }

    printf("jumlah sebelum -1: %i", sum);
    puts("\n");

    int hargaTanah, banyakTahun;
    int iterasi = 0;

    puts("\n2. Harga jual tanah");
    printf("Harga saat beli tanah (jt): "); scanf("%d", &hargaTanah);
    printf("Masukkan banyak tahun: "); scanf("%d", &banyakTahun);
    while (iterasi< banyakTahun){
        hargaTanah *= 2;
        iterasi++;
    }

    printf("harga jual tanah: %i jt", hargaTanah);
    puts("\n");

    puts("\n3. ganjil genap");
    int nilaiBatas;
    printf("Masukkan nilai batas: "); scanf("%d", &nilaiBatas);
    for (iterasi=0; iterasi<=nilaiBatas; iterasi++) {
        if (iterasi%2 == 0) {
            printf("Angka Genap\n");
        }else {
            printf("%i\n", iterasi);
        }
    }
    return 0;
}
