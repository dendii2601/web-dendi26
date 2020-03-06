#include "header.h"

/*
    Nama    :Moch. Dandy YudhaPerwira
    Nim     :A11.2018.11470
    Kelompok:A11.4215
*/

void inputData(Karyawan *Pegawai, int jumlah)
{
//    ///Alternative 1
//    fflush(stdin);
//    printf("Masukkan Nama Karyawan : ");gets((*Pegawai).NamaKaryawan);
//    fflush(stdin);
//    printf("Masukkan NIP : ");gets((*Pegawai).NIP);
//    printf("Masukkan Lama Bekerja : ");scanf("%d", &(*Pegawai).LamaBekerja);
//    cetakData(Pegawai);

    int x;
    for(x=0;x<jumlah;x++){
    ///Alternative 2
    fflush(stdin);
    printf("Masukkan Nama Karyawan : ");gets((Pegawai+x)->NamaKaryawan);
    fflush(stdin);
    printf("Masukkan NIP : ");gets((Pegawai+x)->NIP);
    printf("Masukkan Lama Bekerja : ");scanf("%d", &(Pegawai+x)->LamaBekerja);
    cetakData(Pegawai,jumlah);
    }
}
void cetakData(Karyawan *Pegawai, int jumlah)
{
    int gaji=1500000;
//    ///Alternative 1
//    printf("\n\n");
//    printf("Nama Karyawan = %s\n", (*Pegawai).NamaKaryawan);
//    printf("Nama Karyawan = %s\n", (*Pegawai).NIP);
//
//    (*Pegawai).GajiPokok = gaji * (*Pegawai).LamaBekerja;
//    (*Pegawai).Bonus = ((*Pegawai).GajiPokok * 10)/100;
//
//    printf("Gaji Pokok    = %d\n", (*Pegawai).GajiPokok);
//    printf("Bonus         = %d\n", (*Pegawai).Bonus);
//
    int y;
    for(y=0;y<jumlah;y++){
    printf("\n\n");
    printf("Nama Karyawan = %s\n", (Pegawai+y)->NamaKaryawan);
    printf("Nama Karyawan = %s\n", (Pegawai+y)->NIP);

    Pegawai->GajiPokok = gaji * (Pegawai+y)->LamaBekerja;
    Pegawai->Bonus = 0.1 * (Pegawai+y)->GajiPokok;

    printf("Gaji Pokok    = %d\n", (Pegawai+y)->GajiPokok);
    printf("Bonus         = %d\n", (Pegawai+y)->Bonus);
    printf("\n");
    }
}
