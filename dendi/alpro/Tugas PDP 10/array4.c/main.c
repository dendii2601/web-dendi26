#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[5][5]={{2,4,7,7,1},{8,9,1,8,2},{5,3,6,3,1},{7,8,1,0,5},{2,1,3,4,9}};
    int baris, kolom,i;
    int array2;

    printf(" Matriks = \n");
    printf("-------------------------\n");
    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf(" %d", array1[baris][kolom]);
        }
        puts(" ");
    }

    printf("-------------------------\n");

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            array2=0;
            for(i=0;i<5;i++)
            {
                array2=array2+array1[baris][i];
            }
        }
        printf("Jumlah baris ke-%d : %d", baris,array2);
        puts(" ");
    }
    puts(" ");

    for(baris=0;baris<5;baris++)
    {

        for(kolom=0;kolom<5;kolom++)
        {
            array2=0;
            for(i=0;i<5;i++)
            {
                array2=array2+array1[i][kolom];
            }
            printf("Jumlah kolom ke-%d : %d\n", kolom,array2);
        }
        break;

        printf("\n");
    }
    printf("-------------------------\n");

    return 0;
}
