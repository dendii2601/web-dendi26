#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int pjg;

    printf("Masukkan panjang kotak : ");scanf("%d", &pjg);
    for (i=0; i<pjg; i++) {
        for (j=0; j<pjg; j++) {
            if (i==j || i==pjg-1-j) {
                printf("  ");
            }
            else {
                printf(" *");
            }
        }
        puts("");
    }

    puts("");



    int x, y;
    int nDaftar, nSoal;
    int nilai, sumNilai;

    printf("Masukkan jumlah pendaftar: "); scanf("%d", &nDaftar);
    x=1;
    while (x<=nDaftar) {
        sumNilai = 0;
        puts("");
        printf("Masukkan jumlah soal yang dikerjakan pendaftar ke-%d: ", x);scanf("%d", &nSoal);
        y=1;
        while (y<=nSoal) {
            printf("Nilai dari soal ke - %d : ", y);scanf("%d", &nilai);
            sumNilai += nilai;
            y++;
        }
        printf("Nilai total pendaftar ke-%d: %d\n", x, sumNilai);
        x++;
    }

    puts("");
//    int m, n;
//    int baris, kolom;
//
//    printf("Masukkan baris : ");scanf("%d", &baris);
//    printf("Masukkan kolom : ");scanf("%d", &kolom);
//    for (m=1; m<=baris; m++) {
//        for (n=1; n<=kolom; n++) {
//            if (m%2 == 0) {
//                printf("*");
//            }
//            else {
//                printf("=");
//            }
//        }
//        puts("");
//    }

    return 0;
}
