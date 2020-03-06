#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nama[10][40];
    char Nim[10][30];
    int Smt[10];
    float Ipk[10];
    int i,n,input;

    printf("Masukkan Jumlah Mahasiswa (maks10) = ");
    scanf("%d",&n);
    puts("");
    i=0;
    while(i<n)
    {
        printf("%d. ", i+1);
        fflush(stdin);
        printf("Nama      : "); gets(Nama[i]);
        printf("   Nim       : "); gets(Nim[i]);
        printf("   Semester  : "); scanf("%d", &Smt[i]);
        printf("   Ipk       : "); scanf("%f", &Ipk[i]);
        puts("\n");
        i++;
    }
    system("pause");
    puts("");
    printf("Pilih!!!\n");
    printf("1. Nama\n");
    printf("2. Nim\n");
    printf("3. Ipk\n");
    printf("\nTampilkan Mahasiswa yang terdaftar berdasarkan = ");
    scanf("%d", &input);
    puts("");
    switch(input){
        case 1:
            for (i=0; i<n; i++)
            {
                printf("%s\n", Nama[i]);
            }break;

        case 2:
            for (i=0; i<n; i++)
            {
                printf("%s\n", Nim[i]);
            }break;

        case 3:
            for(i=0; i<n; i++)
            {
                printf("%.2f\n", Ipk[i]);
            }break;
    }
    return 0;
}
