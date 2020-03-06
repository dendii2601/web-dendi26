#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    int arr1[] = { 10, 2, 1, 9, 3, 7};
    int arr2[] = { 15, 36, 27, 2, 26 };

    cetak(arr1,5);
    printf("\n");
    bubble_sort1(arr1,5);


    cetak(arr2,5);
    printf("\n");
    bubble_sort1(arr2, 5);

    return 0;
}
