#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    cetak(arr1,5);
    printf("\n");
    bubble_sort1(arr1,5);


    cetak(arr2,5);
    printf("\n");
    bubble_sort1(arr2, 5);

    return 0;
}
