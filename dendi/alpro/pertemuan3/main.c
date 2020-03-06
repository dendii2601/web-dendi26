#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int arr[] = {5, 4, 7, 3, 2, 1};
    int i;
    puts("sebelum di shorting");
    for (i=0; i<6; i++)
    {
        printf("%d  ", arr[i]);
    }
    puts("\n");
    bubble_sort(arr,6);
    puts("setelah di shorting");
    for (i=0; i<6; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
