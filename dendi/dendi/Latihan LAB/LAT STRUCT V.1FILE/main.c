#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///ADT
    //Struct
    struct mahasiswa1 {
        char nama[50];
        char nim[15];
        float ipk;
    };

    //Typedef Struct
    typedef struct {
        char nama[50];
        char nim[15];
        float ipk;
    }mahasiswa2;

    //Deklarasi ADT
    //STRUCT
    struct mahasiswa1 mhs1;

    //Typedef Struct
    mahasiswa2 mhs2;

    //Input
    printf("Nama mhs1 : "); gets(mhs1.nama);
    fflush(stdin);
    printf("Nim mhs1  : "); gets(mhs1.nim);
    printf("IPK mhs1  : "); scanf("%f", &mhs1.ipk);
    fflush(stdin);

    printf("Nama mhs2 : "); gets(mhs2.nama);
    fflush(stdin);
    printf("Nim mhs2  : "); gets(mhs2.nim);
    printf("IPK mhs2  : "); scanf("%f", &mhs2.ipk);

    //Cetak ADT
    printf("---------- MHS 1 ---------\n");
    printf("Nama  : %s\n", mhs1.nama);
    printf("Nim   : %s\n", mhs1.nim);
    printf("IPK   : %.2f\n", mhs1.ipk);

    printf("---------- MHS 2 ---------\n");
    printf("Nama : %s\n", mhs2.nama);
    printf("Nim   : %s\n", mhs2.nim);
    printf("IPK : %.2\n", mhs2.ipk);


    return 0;
}
