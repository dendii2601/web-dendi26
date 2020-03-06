#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int data[maks];
    int cari;
    int ukuran;
    int  angka;
    printf("masukkan batas : ");
    scanf("%d",&ukuran);
    int i;
    i=0;
    while (i<ukuran)
    {
        printf("Data ke-%d : ",i+1);
        scanf("%d",&data[i]);
        i++;
    }
    printf("masukkan data yang ingin di cari : ");
    scanf("%d",&cari);
    printf("binary_search(%d, data[], %d) --> %s\n",cari,ukuran,binarysearch(cari,data)?"true":"false");
    binaryurut(cari,data,ukuran);
    i=0;
    while (i<ukuran)
    {
        printf("%d ",data[i]);
        i++;
    }
    return 0;
}
