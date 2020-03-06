#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nama[50];
    char nip[50];
    int gaji;
    int lama;
    int bonus;
}karyawan;
void input(karyawan *data, int jumlah);
void output(karyawan *data, int jumlah);
#endif // PUSTAKA_H_INCLUDED
