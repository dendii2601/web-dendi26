#include "header.h"

int main()
{
    int arr[]={5,7,10,30,35,45};
    int uk=sizeof(arr)/sizeof(int);
    int i,cari;
    for(i=0;i<uk;i++)
    {
        printf(" Data ke- %d = %d\n", i, arr[i]);
    }
    printf(" Input data yang dicari = ");
    scanf("%d", &cari);
    printf(" Data %d ada pada indeks ke- %d\n", cari,binary(arr,uk,cari));

    return 0;
}
