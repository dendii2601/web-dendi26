#include "header.h"

void printArrayRek(int arr[], int awal, int akhir)
{
    if (awal == akhir)
    {

    }
    else
    {
        printf("(%d) ", arr[awal]);
        printArrayRek(arr, awal+1, akhir);
    }
}
int sumArrayRek(int arr[], int awal, int akhir)
{
    if (awal == akhir)
    {
        return 0;
    }
    else
    {
        return arr[awal] + sumArrayRek(arr, awal+1, akhir);
    }
}
int searchArrayRek(int arr[], int index, int cari)
{
    if (index == 0)
    {
        if (arr[index]==cari)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (arr[index] == cari)
        {
            return 1;
        }
        else
        {
            return searchArrayRek(arr, index-1, cari);
        }
    }
}
