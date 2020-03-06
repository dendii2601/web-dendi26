#include "header.h"

    void selectionsort(int arr[], int ukuran)
    {
        int i,j,temp, min;

        for(i=0;i<ukuran;i++)
        {
            ///OUTER
            min=i;
            for(j=i;j<ukuran;j++)
            {
                ///INNER
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            ///SWAP
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    void cetakArray(int arr[], int ukuran)
    {
        int i;
        for(i=0;i<ukuran;i++)
        {
            printf(" %d ", arr[i]);
        }
    }
