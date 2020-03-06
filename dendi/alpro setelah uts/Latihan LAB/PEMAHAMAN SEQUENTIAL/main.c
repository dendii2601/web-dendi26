#include "header.h"
/*
    NAMA    : FAUZAN AGRA PRACASTA
    NIM     : A11.2018.11469
    KELAS   : 4215
*/

int main()
{
    int i;
    int jml_data;
    int cari;

    printf("Masukan Jumlah Data = ");
    scanf("%d", &jml_data);
    int arr[jml_data];

    for(i=0;i<jml_data;i++)
    {
        printf("Masukan Angka Ke - %d = ", i);
        scanf("%d", &arr[i]);
    }
    puts("");
    for(i=0;i<jml_data;i++)
    {
        printf("|%d| ", arr[i]);
    }
    puts("");

    printf("Masukan Data Yang Di cari = ");
    scanf("%d", &cari);

    sequential_search(arr, jml_data,cari);

    return 0;
}
