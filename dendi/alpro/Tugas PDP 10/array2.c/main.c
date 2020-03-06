#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matr1[5][5]={{2,4,2,3,6,}, {5,9,6,2,3}, {2,3,1,3,4},{2,3,5,7,5},{1,2,3,4,5,}};
    int matr2[5][5]={{3,4,5,1,2}, {9,8,5,2,3,},{1,2,3,4,5},{0,9,8,7,6},{3,4,5,6,7}};
    int x, y;

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

    printf("\nApakah kedua matriks sama? ");
    system("PAUSE");
    if(matr1[x][y]==matr2[x][y])
    {
        printf("\n>>>Matriks 1 sama dengan matriks 2\n");
    }
    else
        printf("\n>>>Matriks 1 tidak sama dengan matriks 2\n");
    return 0;
}
