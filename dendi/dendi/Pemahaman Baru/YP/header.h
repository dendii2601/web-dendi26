#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char NamaKaryawan[40];
    char NIP[10];
    int LamaBekerja;
    int GajiPokok;
    int Bonus;
}Karyawan;

void inputData(Karyawan *Pegawai, int jumlah);
void cetakData(Karyawan *Pegawai, int jumlah);


#endif // HEADER_H_INCLUDED
