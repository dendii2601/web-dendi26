#include "header.h"

int main()
{
    int arr[]={8,6,2,4,3,9,10};
    int ukuran=7;

    printf("Sebelum di Sorting\n");
    cetakArray(arr, ukuran);
    puts("");
    selectionsort(arr,ukuran);
    printf("Sesudah di Sorting\n");
    cetakArray(arr,ukuran);
    return 0;
}
