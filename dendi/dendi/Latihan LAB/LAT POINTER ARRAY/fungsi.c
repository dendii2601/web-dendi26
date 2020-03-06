#include "header.h"

void inisial_array(int *pntr, int ukuran)
{
    *pntr = (int*)malloc(ukuran* sizeof(int));
}

void input_array(int *pntr, int ukuran)
{
    int i;
    for(i=0;i<ukuran;i++)
    {
        printf("Input Nilai %d = ", i+1);
        scanf("%d", (pntr + i));
    }
}

void cetak_array(int *pntr, int ukuran)
{
    int i;
    for(i=0;i<ukuran;i++)
    {
        printf("Alamat %p, Nilai %d\n", (pntr+i), *(pntr+i));
    }
}
