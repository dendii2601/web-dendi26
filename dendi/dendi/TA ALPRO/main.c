#include "header.h"

int main()
{
    int hargaCatCatylac = 30000;
    int hargaCatNipoon = 25000;
    int hargaCatAvitex = 20000;
    int hargaCatVinilex = 15000;
    int daftarHarga[] = {hargaCatCatylac, hargaCatNipoon, hargaCatAvitex, hargaCatVinilex};
    int pilih;
    int pilihHarga;
    int jumlahBeli;
    float jam;
    char tanya;
    char namaPelanggan[50];
    char tanggal[50];
    int *a, *b, *c, *d;

    printf("-----------------TOKO CAT------------------------\n\n");
    printf("Nama Pelanggan : ");    fflush(stdin);  gets(namaPelanggan);
    printf("Hari/Tanggal   : ");    fflush(stdin);  gets(tanggal);
    printf("Jam            : ");    scanf("%f", &jam);
    puts("-------------------------------------------------");
    printf("Pilihan Cat : \n");
    printf("1. Cat Catylac \n");
    printf("2. Cat Nipoon  \n");
    printf("3. Cat Avitex  \n");
    printf("4. Cat Vinilex \n");
    puts("-------------------------------------------------");
    printf("1. Dari harga termahal ke harga termurah\n");
    printf("2. Dari harga termurah ke harga termahal\n");
    printf("Pilih daftar harga : ");    scanf("%d", &pilihHarga);

    if(pilihHarga == 1){
        printf("Cat Catylac, Cat Nippon, Cat Avitex, Cat Vinilex\n");
        selectionSort1(daftarHarga, 0, 4);
        cetak(daftarHarga, 4);
        puts("");
    }
    else if(pilihHarga == 2){
        printf("Cat Vinilex, Cat Avitex, Cat Nippon, Cat Catylac\n");
        selectionSort2(daftarHarga, 0, 4);
        cetak(daftarHarga, 4);
        puts("");
    }
    puts("-------------------------------------------------");
    do{
    printf("Pilih Cat : "); scanf("%d", &pilih);
    puts("");

        if(pilih == 1){
        printf("Cat Catylac\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&a, jumlahBeli, hargaCatCatylac);
        printf("Total Harga = Rp.%d\n", a);
    }
    else if(pilih == 2){
        printf("Cat Nippon\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&b, jumlahBeli, hargaCatNipoon);
        printf("Total Harga = Rp.%d\n", b);
    }
    else if(pilih == 3){
        printf("Cat Avitex\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&c, jumlahBeli, hargaCatAvitex);
        printf("Total Harga = Rp.%d\n", c);
    }
    else if(pilih == 4){
        printf("Cat Vinilex\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&d, jumlahBeli, hargaCatVinilex);
        printf("Total Harga = Rp.%d\n", d);
    }
    printf("Apakah anda ingin input lagi? [Y/N] = ");
    fflush(stdin);
    scanf("%c",&tanya);
    }while(tanya=='y'||tanya=='Y');
    puts("-------------------------------------------------");

    printf("Nama Pelanggan : %s\n",namaPelanggan);
    printf("Hari/Tanggal   : %s\n",tanggal);
    printf("Jam            : %.2f\n",jam);
    printf("Total yang dibayarkan : \n");
    puts("-------------------------------------------------");
    printf("-----------------Terima Kasih--------------------");



    return 0;
}
