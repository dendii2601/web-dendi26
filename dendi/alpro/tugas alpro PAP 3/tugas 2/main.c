#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = { 3, 5, 38, 44, 47 };
    int arr2[] = { 3, 44, 38, 5, 47 };
    int arr3[] = { 2, 15, 26, 27, 36 };
    int arr4[] = { 15, 36, 27, 2, 26 };


    printf("--> urutan arr1 benar %d\n",cek_urut(arr1, 5));
    printf("--> urutan arr2 salah %d\n",cek_urut(arr2, 5));
    printf("--> urutan arr3 benar %d\n",cek_urut(arr3, 5));
    printf("--> urutan arr4 salah %d\n",cek_urut(arr4, 5));


    return 0;
}
