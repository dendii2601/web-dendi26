#include"header.h"

void selectionsort(int arr[], int ukuran)
{
    int i,j,temp,min;
    for(i=0;i<ukuran; i++)
    {
        min=i;
        for(j=i; j<ukuran; j++)
        {
            if (arr[j]<arr[min])
             {
                 min=j;
             }

        }
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
    }

}
void cetakArray(int arr[], int ukuran)
{
    int i;
    for(i=0;i<ukuran; i++)
    {
        printf("%d ", arr[i]);
    }
}

