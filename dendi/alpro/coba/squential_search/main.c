#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, uk, cari;

    printf("masukkan jumlah data = ");
    scanf("%d",& uk);
    int data[uk];
    for(i=0; i<uk; i++)
    {
        printf("masukkan data ke %d = ",i);
        scanf("%d",&data[i]);
    }
    printf("masukkan data yg di cari = ");
    scanf("%d",&cari);

    printf("data yg di caari ada pada index ke =%d ", squential_search(data,uk,cari));
    return 0;
}
