#include "header.h"

int main()
{
    int arr1[] = { 3, 5, 38, 0, 44, 47 };
    int arr2[] = { 3, 0, 44, 38, 0, 5, 47 };
    int arr3[] = { 2, 15, 0, 0, 0, 26, 27, 36 };
    int arr4[] = { 15, 36, 27, 0, 0, 2, 26 };

    printf("--> array 1 = \t");
    compress_array(arr1, 6);
    printf("\n");

    printf("--> array 2 = \t");
    compress_array(arr2, 7);
    printf("\n");

    printf("--> array 3 = \t");
    compress_array(arr3, 8);
    printf("\n");

    printf("--> array 4 = \t");
    compress_array(arr4, 7);
    printf("\n");


    return 0;
}
