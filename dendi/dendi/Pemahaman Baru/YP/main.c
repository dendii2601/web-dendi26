#include "header.h"

/*
    Nama    :Moch. Dandy YudhaPerwira
    Nim     :A11.2018.11470
    Kelompok:A11.4215
*/
int main()
{
    int jumlah;
    Karyawan pegawai;
    Karyawan *pegawai2;

    printf("Jumlah : ");scanf("%d", &jumlah);

    pegawai2= (Karyawan*)malloc(jumlah * sizeof(Karyawan));

    inputData(pegawai2,jumlah);
    cetakData(pegawai2,jumlah);
    return 0;
}
