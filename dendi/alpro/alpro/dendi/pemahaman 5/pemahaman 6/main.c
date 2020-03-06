#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     NAMA : Dendi Gerah Ilahi
      NIM : A11.2018.11478
    KELAS : 4215
*/
    int i,uk,cari;

    printf("masukkan jumlah data =");
    scanf("%d",&uk);
    int data[20];
    for (i=0;i<uk;i++)
    {
        printf("data ke =",i);
        scanf("%d",&data[uk]);
    }
    printf("masukkan data yg di cari =");
    scanf("%d",&cari);

    squential_search(data,uk,cari);

    return 0;

}
