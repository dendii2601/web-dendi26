#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l[5][5]={{2,4,7,7,1},{8,9,1,8,2},{5,3,6,3,1},{7,8,1,0,5},{2,1,3,4,9}};
    int d,e,n;

        for(d=0;d<5;d++){
            for(e=0;e<5;e++){
                printf(" %d ",l[d][e]);
            }
printf("\n");
        }

n = l[0][0]+l[0][1]+l[0][2]+l[0][3]+l[0][4];
    printf("\nJumlah penjumlahan baris Pertama\t: %d", n);
n = l[1][0]+l[1][1]+l[1][2]+l[1][3]+l[1][4];
    printf("\nJumlah penjumlahan baris Kedua\t\t: %d", n);
n = l[2][0]+l[2][1]+l[2][2]+l[2][3]+l[2][4];
    printf("\nJumlah penjumlahan baris Ketiga\t\t: %d", n);
n = l[3][0]+l[3][1]+l[3][2]+l[3][3]+l[3][4];
    printf("\nJumlah penjumlahan baris Keempat\t: %d", n);
n = l[4][0]+l[4][1]+l[4][2]+l[4][3]+l[4][4];
    printf("\nJumlah penjumlahan baris Kelima\t\t: %d", n);
printf("\n");
n = l[0][0]+l[1][0]+l[2][0]+l[3][0]+l[4][0];
    printf("\nJumlah penjumlahan kolom Pertama\t: %d", n);
n = l[0][1]+l[1][1]+l[2][1]+l[3][1]+l[4][1];
    printf("\nJumlah penjumlahan kolom Kedua\t\t: %d", n);
n = l[0][2]+l[1][2]+l[2][2]+l[3][2]+l[4][2];
    printf("\nJumlah penjumlahan kolom Ketiga\t\t: %d", n);
n = l[0][3]+l[1][3]+l[2][3]+l[3][3]+l[4][3];
    printf("\nJumlah penjumlahan kolom Keempat\t: %d", n);
n = l[0][4]+l[1][4]+l[2][4]+l[3][4]+l[4][4];
    printf("\nJumlah penjumlahan kolom Kelima\t\t: %d", n);
printf("\n");

    return 0;
}
