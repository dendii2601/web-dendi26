#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{




//    /NAMA     :   Dendi Gerah Ilahi
//    /NIM      :   A11.2018.11478
//    /KELAS    :   A11. 4115

    printf("\t\t===Tugas 01===\n\n");

    printf("***SELAMAT DATANG DI UNIVERSITAS TERBUKA SEMARANG***\n\n");
    printf("Kami melakukan seleksi beasiswa kepada mahasiswa dengan kriteria tertentu.\n");
    printf("Silahkan Masukkan Biodata Anda \t : \n\n");

        char NamaMaha[50], NamaAyah[50], NamaIbu[50], Nim[50], Alamat[100], Pekerjaan[50], IPK[50];
        int Semester;
        float GajiAyah, GajiIbu, GajiKedua;

    printf("\t1. Nama Anda\t\t : ");fflush(stdin);gets(NamaMaha);
    printf("\t2. Nim Sekarang\t\t : ");fflush(stdin);gets(Nim);
    printf("\t3. Alamat Sekarang\t : ");fflush(stdin);gets(Alamat);
    printf("\t4. IPK Sekarang\t\t : ");fflush(stdin);gets(IPK);
    printf("\t5. Semester Sekarang\t : ");scanf("%d", &Semester);
    printf("\t6. Nama Ayah\t\t : ");fflush(stdin);gets(NamaAyah);
    printf("\t\t6a. Pekerjaan Ayah\t\t : ");fflush(stdin);gets(Pekerjaan);
    printf("\t\t6b. Gaji Ayah Perbulan\t\t : Rp. ");scanf("%f", &GajiAyah);
    printf("\t7. Nama Ibu\t\t : ");fflush(stdin);gets(NamaIbu);
    printf("\t\t7a. Pekerjaan Ibu\t\t : ");fflush(stdin);gets(Pekerjaan);
    printf("\t\t7b. Gaji Ibu Perbulan\t\t : Rp. ");scanf("%f", &GajiIbu);

        GajiKedua=(GajiAyah+GajiIbu)/2 ;
        printf("\n\n");
        printf("\t\tRata-rata gaji orang tua \t\t : %f\n\n", GajiKedua);
    if  (GajiKedua <= 3000000)
        {
        }
    if  (IPK >3 && IPK <= 4){
        }
    if  (Semester >= 5)
        {
        printf("Selamat, Anda Berhak Menerima Beasiswa");
        }
    else
        printf("\t\t\tMaaf, Anda Belum Diterima");
    if  (GajiKedua <= 3000000)
    if  (IPK >3 && IPK <= 4)
    if  (Semester >= 5)
        {
        printf("Selamat, Anda Berhak Menerima Beasiswa");
        }
    else
        printf("\t\t\tMaaf, Anda Belum Diterima");


    printf("\n\n");

    printf("\t\t===================Tugas 02==================\n\n");

    printf("\t\t*TOKO CAT MAJU TERUS*\n\n");

    char NamaKonsumen[50];
    char TanggalPembelian[50];
    char Merk[100];
    int HargaPembayaran, menu, dulux, jumlah, Catylac, NipponPaint, Avitex, Mowilex, kiloan;
    float LuasDinding;
    double jumlahKaleng;
    kiloan = 10;

    printf("Masukkan Nama Pembeli\t\t : ");fflush(stdin);gets(NamaKonsumen);
    printf("Masukkan Tanggal Pembelian \t : ");fflush(stdin);gets(TanggalPembelian);
    printf("Masukkan luas dinding yang akan di cat : ");scanf("%f", &LuasDinding);
    jumlahKaleng = ceil((double)LuasDinding/kiloan);
    printf("Jumlah Kaleng Yang Perlu Anda Beli\t: %f\n", jumlahKaleng);
    printf("\n\n");
    printf("Kami Menyediakan Beberapa Kaleng Cat Berkwalitas Diantaranya : ");
    printf("\n\n");
    printf("\t1. Dulux\n");
    printf("\t2. Catylac\n");
    printf("\t3. Nippon Paint\n");
    printf("\t4. Avitex\n");
    printf("\t5. Mowilex\n");

    printf("\t\tMasukkan Menu \t\t= ");
    scanf("%d", &menu);
    printf("\n\n");

    switch(menu){
printf("\n\n");
case 1:
    strcpy(Merk,"Dulux");
    printf(" Anda memilih merk cat \t\t*Dulux*\n\n");
        printf("\tJumlah Kaleng yang dibutuhkan : "); scanf("%d", &jumlah);
        if(jumlah >=1 && jumlah <=25){
        HargaPembayaran = 24500 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >=26 && jumlah <=50){
        HargaPembayaran = 23000 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >50 ){
        HargaPembayaran = 22000 * jumlah;
        printf("\t Harga pembayaran =Rp %d,-", HargaPembayaran);
        }
        else{
        printf("error page");
        }
   break;
case 2:
    strcpy(Merk,"Catylac");
    printf(" Anda memilih merk cat \t\t*Catylac*\n\n");
        printf("\tJumlah Kaleng yang dibutuhkan : "); scanf("%d", &jumlah);
        if(jumlah >=1 && jumlah <=25){
        HargaPembayaran = 23500 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >=26 && jumlah <=50){
        HargaPembayaran = 22500 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >50 ){
        HargaPembayaran = 21000 * jumlah;
        printf("\t Harga pembayaran =Rp %d,-", HargaPembayaran);
        }
        else{
        printf("error page");
        }
   break;
case 3:
    strcpy(Merk,"Nippon Paint");
    printf(" Anda memilih merk cat \t\t*Nippon Paint*\n\n");
        printf("\tJumlah Kaleng yang dibutuhkan : "); scanf("%d", &jumlah);
        if(jumlah >=1 && jumlah <=25){
        HargaPembayaran = 23500 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >=26 && jumlah <=50){
        HargaPembayaran = 22000 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >50 ){
        HargaPembayaran = 20500 * jumlah;
        printf("\t Harga pembayaran =Rp %d,-", HargaPembayaran);
        }
        else{
        printf("error page");
        }
   break;
case 4:
    strcpy(Merk,"Avitex");
        printf(" Anda memilih merk cat \t\t*Avitex*\n\n");
        printf("\tJumlah Kaleng yang dibutuhkan : "); scanf("%d", &jumlah);
        if(jumlah >=1 && jumlah <=25){
        HargaPembayaran = 20000 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >=26 && jumlah <=50){
        HargaPembayaran = 19000 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >50 ){
        HargaPembayaran = 17500 * jumlah;
        printf("\t Harga pembayaran =Rp %d,-", HargaPembayaran);
        }
        else{
        printf("error page");
        }
   break;

case 5:
    strcpy(Merk,"Mowilex");
    printf(" Anda memilih merk cat \t\t*Mowilex*\n\n");
        printf("\tJumlah Kaleng yang dibutuhkan : "); scanf("%d", &jumlah);
        if(jumlah >=1 && jumlah <=25){
        HargaPembayaran = 18500 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >=26 && jumlah <=50){
        HargaPembayaran = 17000 * jumlah;
        printf("\t Harga pembayaran = %d", HargaPembayaran);
        }
        if(jumlah >50 ){
        HargaPembayaran = 16000 * jumlah;
        printf("\t Harga pembayaran =Rp %d,-", HargaPembayaran);
        }
        else{
        printf("error page");
        }
   break;
    default:{
        printf("\n");
        printf("error page");
    }}

        printf("\n\n");

        printf("\t++++++++++++++++Nota Pembelian++++++++++++++++++++\t\n\n");


        printf("Nama Pembeli \t\t: %s\n", NamaKonsumen);
        printf("Tanggal Pembelian \t: %s\n", TanggalPembelian);fflush(stdin);
        printf("Merk cat \t\t: %s\n", Merk);
        printf("Total Jumlah Cat \t: %d\n", jumlah);
        printf("Biaya Pembelian \t: Rp. %.2d,-\n\n", HargaPembayaran);
        printf("\t\tTERIMA KASIH ATAS PEMBELIANNYA, SILAHKAN DATANG KEMBALI\n");
        printf("\n\n");
        printf("\n\n");

        printf("\t\t################Tugas 03##################\n\n");

        printf("\t\t^Pom Mini Udinuss^\n\n");
    struct tm *Sys_T;
    time_t Tval;
        Tval = time(NULL);
        Sys_T = localtime(&Tval);

    int pertalite, pertamax, premium, jenis, bbm, hasil,H;
    float harga, total, uangpembeli,perliter;
        printf("\tPom Mini Udinuss\n");
        printf("Jl Imam Bonjol No. 207, Pendrikan kidul\n");
        printf("Semarang Tengah\n");
        printf ( "%s", asctime (Sys_T));fflush(stdin);
        printf("-------------------------------\n");fflush(stdin);
        printf("1. Premium\t= 8000\n");
        printf("2. Pertalite\t= 9000\n");
        printf("3. Pertamax\t= 12000\n\n");
        printf("maskukkan jenis : ");scanf("%d", &jenis);
    switch(jenis){
    case 1:
                H=8000;
                printf("Masukan uang pelanggan :  ");
                scanf("%f", &uangpembeli);
                perliter=uangpembeli/H;
                printf("jumlah liter : %.1f ", perliter);
            break;
    case 2:
                H=9000;
                printf("Masukan uang pelanggan :  ");
                scanf("%f", &uangpembeli);
                perliter=uangpembeli/H;
                printf("jumlah liter : %.1f ", perliter);
            break;
    case 3:
                H=12000;
                printf("Masukan uang pelanggan :  ");
                scanf("%f", &uangpembeli);
                perliter=uangpembeli/H;
                printf("jumlah liter : %.1f \n", perliter);
            break;}
        printf("\t\tTERIMA KASIH ATAS PEMBELIANNYA, SILAHKAN DATANG KEMBALI\n");


    return 0;
    }
