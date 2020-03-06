#include <stdio.h>
#include <stdlib.h>
void menghitung();

int main()
{
    menghitung();
    return 0;
}

void menghitung()
{
    int tgs,uts,uas;
    int nilaiAkhir;

    printf("masukkan nilai tugas = ");
    scanf("%d",& tgs);
    printf("masukkan uts = ");
    scanf("%d",& uts);
    printf("masukkan uas = ");
    scanf("%d",& uas);
    nilaiAkhir = tgs*0.4+uts*0.3+uas*0.3;
    printf("nilai akhir = %d", nilaiAkhir);

    if(nilaiAkhir >= 85 && nilaiAkhir<=100)
    {
        printf(" dapat nilai A ");
    }
    else if (nilaiAkhir >= 80 && nilaiAkhir<=84.9 )
    {
        printf(" dapat nilai AB ");
    }
    else if (nilaiAkhir >= 70 && nilaiAkhir<+79.9)
    {
        printf(" dapat nilai B ");
    }
    else if (nilaiAkhir >= 65 && nilaiAkhir<=69.9)
    {
        printf(" dapat nilai BC ");
    }
    else if   (nilaiAkhir >= 50 && nilaiAkhir<=64.9){

        printf(" dapat nilai C ");
    }

}
