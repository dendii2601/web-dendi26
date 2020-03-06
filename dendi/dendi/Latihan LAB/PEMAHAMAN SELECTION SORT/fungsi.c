#include "header.h"

void inputchar()
{
    int uk;
    printf(" Jumlah Data = ");
    scanf("%d", &uk);
    char arr[uk];

    for(i=0;i<uk;i++)
    {
        printf(" Masukkan ke-%d = ",i);
        scanf(" %c", &arr[i]);
    }
    printf("\n\n Sebelum diSorting \n");
    cetakchar(arr,uk);
    printf("\n\n Setelah diSorting \n");
    selectionchar(arr,uk);
    cetakchar(arr,uk);
}

void selectionchar(char arr[], int uk)
{
    int i,j,temp,min;

    for(i=0;i<uk;i++)
    {
        min=i;
        for(j=i;j<uk;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i]= temp;
    }
}

void cetakchar(char arr[], int uk)
{
    for(i=0;i<uk;i++)
    {
        printf(" |%c| ", arr[i]);
    }
    puts("\n\n");
}
