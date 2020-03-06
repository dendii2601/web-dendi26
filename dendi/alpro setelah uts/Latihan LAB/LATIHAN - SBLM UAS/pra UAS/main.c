#include "header.h"

int main()
{
    int jumlah;
    printf("Jumlah Siswa : ");scanf("%d",&jumlah);
    puts("");

    siswa *Lari;
    Lari = (siswa*)malloc(jumlah * sizeof(siswa));

    //inputData(Lari,jumlah);
    inputData(Lari,jumlah, 0);
    cetakData(Lari,jumlah);
    return 0;
}
