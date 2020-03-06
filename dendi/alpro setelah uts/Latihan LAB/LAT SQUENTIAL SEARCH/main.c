#include "header.h"

int main()
{
    do
    {
        int i,uk,cari;
        char ulang;
        printf("Masukan Jumlah Data : ");
        scanf("%d", &uk);
        int data[uk];

        for(i=0;i<uk;i++)
        {
            printf("Masukan Data Ke - %d = ", i);
            scanf("%d", &data[i]);
        }

        printf(" Masukan Data yang dicari = ");
        scanf("%d", &cari);

        printf(" Data yg dicari aja pada indek = %d", sequentialSearch(data,uk,cari));
        puts("");

        printf("Apakah anda ingin Ulangi lagi? ");
        scanf(" %c", &ulang);
    }while(ulang=='Y'||ulang=='y');



    return 0;
}
