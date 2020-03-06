#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("1. Cetak Matriks\n");

    printf(" matriks satu \n\n");
    int matriks[5][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int matriks1[5][5] = {{5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}};
    int matriks3[5][5];
    int matriks4[5][5];
    int matriks5[5][5];
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf( "[%d]",matriks[i][j]);

        }
        puts("");
    }
        printf(" matriks dua \n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf( "[%d]",matriks1[i][j]);

        }
        puts("");
    }

    printf(" 2. penjumlahan matriks \n\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            matriks3[i][j]=matriks[i][j]+matriks1[i][j];
            printf("[%d]",matriks3[i][j]);
        }
        puts("");
    }

    printf(" 3. pengurangan matriks \n\n");

        matriks3[0][0]=matriks[0][0]+matriks1[0][0];
        for(i=0;i<5;i++)
    {
            for(j=0;j<5;j++)
        {
            matriks4[i][j]=matriks[i][j]-matriks1[i][j];
            printf("[%d]",matriks4[i][j]);
        }
        puts("");
    }

    printf(" 4. perkalian matriks \n\n");
        matriks5[0][0]=matriks[0][0]*matriks1[0][0];
        for(i=0;i<5;i++)
    {
            for(j=0;j<5;j++)
        {
            matriks5[i][j]=matriks[i][j]*matriks1[i][j];
            printf("[%d]",matriks5[i][j]);
        }
        puts("");
    }





    return 0;
}
