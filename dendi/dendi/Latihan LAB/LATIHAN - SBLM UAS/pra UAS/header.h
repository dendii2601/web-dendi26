#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>



struct waktu{
    int jam;
    int menit;
    int detik;
};

typedef struct{
    char nama_siswa[50];
    float tempuh1;
    float tempuh2;
    float tempuh3;
    struct waktu waktuTotal;
}siswa;

//void inputData(siswa *siswaLari,int jumlah);
void inputData(siswa *siswaLari,int jumlah, int awal);
void convertWaktu(siswa *siswaLari,int index);
void cetakData(siswa *siswaLari,int jumlah);

//MACRO
#define Nama(S,I) (S+I)->nama_siswa
#define Jam(S,I) (S+I)->waktuTotal.jam
#define Menit(S,I) (S+I)->waktuTotal.menit
#define Detik(S,I) (S+I)->waktuTotal.detik

#endif // HEADER_H_INCLUDED
