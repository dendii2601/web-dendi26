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
    int priceTotal;    priceTotal= 1;
    struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval);
    char tanya;
    char namaPelanggan[50];
//    char tanggal[50];
    int *a, *b, *c, *d;
    int uk=sizeof(daftarHarga)/sizeof(int);

    printf("-----------------TOKO CAT------------------------\n\n");
    printf("Nama Pelanggan : ");    fflush(stdin);  gets(namaPelanggan);
//    printf("Hari/Tanggal   : ");    fflush(stdin);  gets(tanggal);
//    printf("Jam            : ");    scanf("%f", &jam);
    puts("-------------------------------------------------");
//    printf("Pilihan Cat : \n");
//    printf("1. Cat Catylac \n");
//    printf("2. Cat Nipoon  \n");
//    printf("3. Cat Avitex  \n");
//    printf("4. Cat Vinilex \n");
//    puts("-------------------------------------------------");
    printf("1. Dari harga termahal ke harga termurah\n");
    printf("2. Dari harga termurah ke harga termahal\n");
    printf("Pilih daftar harga : ");    scanf("%d", &pilihHarga);

    if(pilihHarga == 1){
        printf("\n1.Cat Catylac\n2.Cat Nippon\n3.Cat Avitex\n4.Cat Vinilex\n");
        selectionSort1(daftarHarga, 0, 4);
        cetak(daftarHarga, 4);
        puts("\n\t\t*note : perkaleng");
    }
    else if(pilihHarga == 2){
        printf("\n1.Cat Vinilex\n2.Cat Avitex\n3.Cat Nippon\n4.Cat Catylac\n");
        selectionSort2(daftarHarga, 0, 4);
        cetak(daftarHarga, 4);
        puts("\n\t\t*note : perkaleng");
    }
    puts("-------------------------------------------------");
    do{
    printf("Pilih Cat : "); scanf("%d", &pilih);
    if (squentialSearch(daftarHarga,uk,pilih))
    {
        if (pilih==1)
        {
            printf("stock cat pilihan anda masih banyak\n");

        }
        else if(pilih==2){
            printf("stock cat pilihan anda masih banyak\n");
        }
        else if(pilih==3){
            printf("stock cat pilihan anda masih banyak\n");
        }
        else if(pilih==4){
            printf("stock cat pilihan anda masih banyak\n");
        }
        else{
            printf("maaf cat yang anda pilih habis\n");
        }
    }
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
    printf("Apakah anda ingin membeli cat yang lain ? [Y/N] = ");
    fflush(stdin);
    scanf("%c",&tanya);
    }while(tanya=='y'||tanya=='Y');
    puts("");
    puts("-------------------------------------------------");
    puts("\t\t*Struck Pembelian*");
    priceTotal = priceTotal * jumlahBeli * (*daftarHarga);
    printf("Nama Pelanggan : %s\n",namaPelanggan);
    printf("Hari/Tanggal   : %s",asctime (Sys_T));
    printf("Total yang dibayarkan : Rp.%d \n",priceTotal);
    puts("-------------------------------------------------");
    printf("-----------------Terima Kasih--------------------");
getch();


    return 0;
}
