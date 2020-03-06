#include "header.h"


void bubble_sort(int arr[], int ukuran)
{


/* struktur bubble sort
    for i=0 hingga i<ukuran-1
        for j=0 hingga j <ukuran-1-i
    if (array[j]>array[j+1])
    */



    int i,j,temp;

    for (i=0; i<ukuran-1; i++)
    {
    for (j=0; j<ukuran-1-i; j++)
        {
        if (arr[j]>arr[j+1])/// ubah tanda pada if jika > ascending . jika < discending
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}
