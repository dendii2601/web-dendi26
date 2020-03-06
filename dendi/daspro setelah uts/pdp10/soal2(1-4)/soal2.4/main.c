#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[10][40];
    char nim[10][30];
    int smt[10];
    float ipk[10];
    int i, y;
    int batas;
    int kondisi;


    printf(" MENDAFTAR BEASISWA \n\n");
    printf(" Masukkan Jumlah Mahasiswa yang mendaftar max 10 0rang = ");
    scanf("%d",&batas);
    printf("\n");
    i=0;
    while(i<batas)
    {
        printf("%d. ", i+1);
        fflush(stdin);
        printf("Nama      : ");
        gets(nama[i]);
        fflush(stdin);
        printf("   Nim       : ");
        gets(nim[i]);
        fflush(stdin);
        printf("   Semester  : ");
        scanf("%d", &smt[i]);
        printf("   IPK       : ");
        scanf("%f", &ipk[i]);
        printf("\n\n");
        i++;
    }
    system("cls");
    printf(" mahasiswa yang mendaftar berdasarkan : \n");
    printf("1. NAMA\n");
    printf("2. NIM\n");
    printf("3. IPK\n");
    printf("\n masukkan pilihan : ");
    scanf("%d", &kondisi);
    printf("\n");
    if (kondisi==1){
        for (i=0; i<batas; i++)
        {
            printf("%s\n", nama[i]);
        }
    }
    else if(kondisi==2){
        for (i=0; i<batas; i++)
        {
            printf("%s\n", nim[i]);
        }
    }
    else if(kondisi==3){
        for(i=0; i<batas; i++)
        {
            printf("%.2f\n", ipk[i]);
        }
    }

    return 0;
}
