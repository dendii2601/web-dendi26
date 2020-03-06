#include "header.h"

void sequential_search(int data[], int jml_data, int cari)
{
    int i;
    int hitung=0;

    for(i=0;i<jml_data;i++)
    {
        if(cari==data[i])
        {
            printf("Data Ditemukan pada indek ke - %d\n", i);
            hitung++;
        }
    }
    if(hitung==0)
    {
        printf("Data tidak ditemukan");
    }
    printf("Jadi Angka %d muncul %d kali\n", cari, hitung);


}
