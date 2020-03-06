#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris;
    int kolom;
    int batas;
    int arr [5] [5];
    int a,b, c;


    printf("masukkan baris : ");
    scanf("%d",&baris);
    printf("masukkan kolom : ");
    scanf("%d",&kolom);

    for (a=0; a<baris; a++) {
        for (b=0; b<kolom; b++) {
            printf("input array [%d] [%d] : ",a,b);
            scanf("%d", & arr [a][b]);
        }
    }
    printf("\n\n");
    printf("cetak isi : \n");
    for (a=0; a<baris; a++) {
        for (b=0; b<kolom; b++) {
            printf(" [%d] ",arr [a][b]);

        } printf("\n");
            }
            printf("\n");
            for (a=0; a<baris; a++) {
                for (b=0; b<kolom; b++){
                    if ( arr [a][b] %3==0) {
                         printf("\n");
                         printf(" arr [%d]  [%d] : %d   ",a,b,arr [a][b]);

                    }
                }
            }





    return 0;
}
