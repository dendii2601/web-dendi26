#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    selection_sort(arr1, 5);

    printf("\n");

    selection_sort(arr2, 5);

    return 0;
}
