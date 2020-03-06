#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    print_array(arr1,5);
    selection_sort(arr1, 5);
    get_median(arr1, 5);

    printf("\n\n");

    print_array(arr2,5);
    selection_sort(arr2, 5);
    get_median(arr2, 5);


    return 0;
}
