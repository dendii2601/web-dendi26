#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matr1[5][5]={{2,4,2,3,6,}, {5,9,6,2,3}, {2,3,1,3,4},{2,3,5,7,5},{1,2,3,4,5,}};
    int matr2[5][5]={{3,4,5,1,2}, {9,8,5,2,3,},{1,2,3,4,5},{0,9,8,7,6},{3,4,5,6,7}};
    int matr3[100][100];
    int x, y, sum=0, z;

    printf("---Matriks 1---\n");
    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            printf(" %d", matr1[x][y]);
        }
        puts("");
    }
    puts("");
    printf("---Matriks 2---\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++)
        {
            printf(" %d", matr2[x][y]);
        }
        puts("");
    }

    puts("");
    printf("---Penjumlahan Matriks---\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++)
        {
            printf("%d ", matr1[x][y]+matr2[x][y]);
        }
        puts("");
    }

    puts("");
    printf("---Pengurangan Matriks---\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++)
        {
            printf("%d ", matr1[x][y]-matr2[x][y]);
        }
        puts("");
    }

    puts("");
    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            for(x=0;x<5;x++)
            {
                for(y=0;y<5;y++)
                {
                    for(z=0;z<5;z++)
                    {
                        sum+=matr1[x][z]*matr2[z][y];
                    }
                    matr3[x][y]=sum;
                }
            }
        }
    }

    printf("---Perkalian Matriks---\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++)
        {
            printf("%d ", matr3[x][y]);
        }
        puts("");
    }
    return 0;
}
