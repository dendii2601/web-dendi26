#include <stdio.h>
#include <stdlib.h>
#include"header.h"

int main()
{
    int arr[]={7,9,3,6,2,1,5};
    int ukuran=7;

    printf("array sebelum di shorting\n");
    cetak(arr,ukuran);

    selectionSort(arr,ukuran);
    printf("\n");

    printf("array sesudah di shorting\n");
    cetak(arr,ukuran);
    printf("\n");



    return 0;
}
