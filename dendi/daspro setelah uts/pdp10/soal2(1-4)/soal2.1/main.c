#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[5][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int y[5][5] = {{5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}, {5, 4, 3, 2, 1}};
    int p,q;
    int d=0, e=0, n=0;

    printf(" Matrik 1   dan   Matrik 2\n\n");
    for(p=0; p<5; p++) {
        for(q=0; q<5; q++) {
            printf("%d ", x[p][q]);
        }
    printf("\t ");
    for(q=0; q<5; q++){
    printf("%d ", y[p][q]);
    }
        printf("\n");
        }
printf("\n\n");
 if(d==0&&n==e)
    {
        printf("\nMatriks 1 Sama dengan Matriks 2\n\n");
    }
    else
    {
        printf("\nMatriks 1 Tidak Sama dengan Matriks 2\n\n");
    }


    return 0;
}
