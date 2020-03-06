#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[15],i,j,batas,cari,ganjil=0,jganjil;

    printf("masukkan batas array : ");
    scanf("%d", &batas);

    for(i=1;i<=batas;i++){
        printf("masukkan angka : ");
        scanf("%d", &a[i]);
    }
    system("cls");
    for(i=1;i<=batas;i++){
        printf("%d", a[i]);
    }
    for(j=1;j<=batas;j++){
        if(a[j]%2==1){
            ganjil++;
            jganjil=j;
        }

    }
    printf("\n\n ganjil terakhir = %d\n terdapat pada urutan ke-%d", a[jganjil],jganjil);
    return 0;
}
