#include "pustaka.h"

void input(karyawan *data, int jumlah)
{
    ///alternatif 1
//    printf("masukan nama = ");
//    gets((*data).nama);
//    printf("NIP = ");
//    gets((*data).nip); fflush(stdin);
//    printf("lama kerja = ");
//    scanf("%d",&(*data).lama);

    ///alternatif 2
    int idx;
    for(idx=0;idx<jumlah;idx++){
        printf("Data manusia ke - %d \n",idx+1);
        fflush(stdin);
        printf("masukan nama = ");
        gets((data+idx)->nama);
        printf("NIP = ");
        gets((data+idx)->nip); fflush(stdin);
        printf("lama kerja = ");
        scanf("%d",&(data+idx)->lama);
    }
}
void output(karyawan *data, int jumlah)
{
    ///alternatif
//    (*data).gaji=(*data).lama*15000;
//    (*data).bonus=0.1*(*data).gaji;
//    printf("\nNAMA\t= %s \n",(*data).nama);
//    printf("Nip\t= %s \n",(*data).nip);
//    printf("gaji\t= %d \n",(*data).gaji);
//    printf("bonus\t= %d \n",(*data).bonus);
///alternatif 2
    int idx;
    for(idx=0; idx<jumlah; idx++){
        data->gaji=(*data).lama*15000;
        data->bonus=0.1*data->gaji;
        printf("\nNAMA\t= %s \n",(data+idx)->nama);
        printf("Nip\t= %s \n",(data+idx)->nip);
        printf("gaji\t= %d \n",(data+idx)->gaji);
        printf("bonus\t= %d \n\n",(data+idx)->bonus);
    }
}

