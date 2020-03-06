#include "header.h"

void bublesort (int arr[], int ukuran)
{
    int i,j,temp;
        /*
            for i=0 hingga i<ukuran-1
                for j=0 hingga j<ukuran-1-i
                    if(array[j]>array[j+1]

        */
        for(i=0;i<ukuran-1;i++)
        {
            for(j=0;j<ukuran-1-i;j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
}
