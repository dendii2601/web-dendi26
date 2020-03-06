#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]= {5,7,10,20,35,45};
    int uk=sizeof(arr)/sizeof(int);int i, cari;
    for (i=0;i<uk;i++)
    {
        printf("data ke %d = %d \n", i, arr[i]);
    }
    printf("input data yg di cari = ");
    scanf("%d",&cari);
    printf("data %d ada pada index ke %d\n",cari,binery(arr,uk,cari));

    return 0;
}
