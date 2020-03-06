#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bd;
    int d;
    int e;
    printf("masukkan jumlah data : ");
    scanf("%d", &e);
    for (bd=1; bd<=e; bd++) {
        printf("masukkan data ke %d : ", bd);
        scanf("%d",&d);

    }
    return 0;
}
