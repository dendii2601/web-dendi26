#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// var biasa vs 1D vs 2D
    int a = 11;
    int arrA[3] = {1, 2, 3};
    int arrB[2][3] = {
        {1,2,3},
        {4,5,6}};

    int arry[2][3] = {
        {1,2,3},
        {4,5,6}};

    int arrZ[2][3];
    arrZ[0][0] = arrB[0][0] * arry[0][0];



    ///printf("%d", arrB[1][1]);

    /// array dinamis
//    int batas;
//    printf("Masukkan Batas : ");
//    scanf("%d", &batas);
//    int arrC[batas];
//
//    int i;
//    puts("\n");
//    for (i=0; i<batas; i++) {
//        printf("Masukkan arrC[%d]: ", i);
//        scanf("%d",&arrC[i]);
//    }
//    puts("\n");
//    for (i=0; i<batas; i++) {
//        if (arrC[i]%2 == 0)
//        {
//            printf("%d ",arrC[i]);
//        }
//    }

    int baris, kolom;
    printf("Masukkan baris : ");
    scanf("%d", &baris);
    printf("Masukkan kolom : ");
    scanf("%d", &kolom);
    int arrD[baris][kolom];

    int i, j;
    for (i=0; i<baris; i++) {
        for (j=0; j<kolom; j++) {
            printf("arrD[%d][%d] : ", i,j);
            scanf("%d", &arrD[i][j]);
        }
    }

    int geap = 0 ;
    puts("\ncetak\n");
    for (i=0; i<baris; i++) {
        for (j=0; j<kolom; j++) {
        if (arrD[i][j] %2 == 0) {
        printf("arrD[%d][%d] : %d\n", i,j, arrD[i][j]);
        geap++;
        if (geap==2) {
            printf("%d %d", i, j);
            break;
        }
        }
        }

    }

    return 0;
}
