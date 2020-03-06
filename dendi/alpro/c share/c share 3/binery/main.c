#include <stdio.h>
#include <stdlib.h>

void urutkan(int arr[],int ukuran)
{
    int i,j, temp;
    for(i=0;i<ukuran-1;i++)
    {
        for(j=i;j<ukuran;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    ///cetak nilai setelah di urutkan
    for(i=0;i<ukuran;i++)
    {
        printf("%d ", arr[i]);
    }
}


int binary_search(int arr[],int ukuran,int cari)
{
    int l,m,r;
    l=0;
    r=ukuran-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if (cari<arr[m])
        {
            r=m-1;
        }
        else if (cari>arr[m])
        {
            l=m+1;
        }
        ///jika nilai yg di cari sama dgn nilai tengah
        else
        {
            return 1;

        }
            }
    return 0;
}

int main()
{
    int arr[]={3,5,4,6,2,1};
    int ukuran=6;
    int cari;
    ///mengurutkan nilai
    urutkan(arr,ukuran);
    printf("\nmasukkan nilai yg di cari = ");
    scanf("%d",&cari);
    int hasil=binary_search(arr,ukuran,cari);
    if(hasil==1)
    {
        printf("ketemu ");

    }
    else
    {
        printf("tidak ada");
    }

    return 0;
}
