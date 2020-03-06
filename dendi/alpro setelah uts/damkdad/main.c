#include <stdio.h>
#include <stdlib.h>

void input(int pilihan)
{
    if(pilihan == 1){
        printf("Makanan\n");
    }
    else if(pilihan == 2){
        printf("Minuman\n");
    }
    else if(pilihan == 3){
        printf("Makanan dan minuman\n");
    }
}

int squentialSearch(int harga1[],int uk, int cari)
{
    int i;
    for(i=0;i<uk;i++)
    {
        if(cari==harga1[i])
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int temp,i,j;
    int pilih;
    int harga1 [] = {20000, 30000, 10000, 60000};
    int harga2 [] = {1500, 3500, 2500, 500};

    printf("1. Makanan\n");
    printf("2. Minuman\n");
    printf("3. Makanan dan minuman\n");
    printf("Pilih Menu : ");    scanf("%d",&pilih);
    input(pilih);
    puts("");

    printf("Daftar Harga : \n");
    printf("1. Harga makanan\n");
    printf("2. Harga minuman\n");
    printf("Pilih : "); scanf("%d",&pilih);
    puts("");

    if(pilih == 1){
    printf("1. Dari harga termahal ke harga termurah\n");
    printf("2. Dari harga termurah ke harga termahal\n");
    printf("Pilih : "); scanf("%d",&pilih);
    if(pilih == 1){
        for(i=0; i<5-1; i++){
        for(j=0;j<5-i-1;j++){
            if(harga1[j]<harga1[j+1]){
                temp=harga1[j];
                harga1[j]=harga1[j+1];
                harga1[j+1]=temp;
                }
            }
        }
        printf("Siomay, Seblak basah, Cilok goreng, Cimol\n");
        for (i=0; i<5; i++){
            printf("Rp.%d, ", harga1[i]);
        }
    }
    else{
        for(i=0; i<5-1; i++){
        for(j=0;j<5-i-1;j++){
            if(harga1[j]>harga1[j+1]){
                temp=harga1[j];
                harga1[j]=harga1[j+1];
                harga1[j+1]=temp;
                }
            }
        }
        printf("Cimol, Cilok goreng, Seblak basah, Siomay\n");
        for (i=0; i<5; i++){
            printf("Rp.%d ", harga1[i]);
        }
    int uk=sizeof(harga1)/sizeof(int);
    int cari;
    int harga1[uk];
    printf("\nmasukkan harga yg di cari = ");
    scanf("%d",&cari);

    printf(" = %d",squentialSearch(harga1,uk,cari));

    }
    }

    if(pilih == 2){
    printf("1. Dari harga termahal ke harga termurah\n");
    printf("2. Dari harga termurah ke harga termahal\n");
    printf("Pilih : "); scanf("%d",&pilih);
    if(pilih == 1){
        for(i=0; i<5-1; i++){
        for(j=0;j<5-i-1;j++){
            if(harga2[j]<harga2[j+1]){
                temp=harga2[j];
                harga2[j]=harga2[j+1];
                harga2[j+1]=temp;
                }
            }
        }
        printf("Es sirup, Es jeruk, Es kopi, Es teh\n");
        for (i=0; i<5; i++){
            printf("Rp.%d, ", harga2[i]);
        }
    }
    else{
        for(i=0; i<5-1; i++){
        for(j=0;j<5-i-1;j++){
            if(harga2[j]>harga2[j+1]){
                temp=harga2[j];
                harga2[j]=harga2[j+1];
                harga2[j+1]=temp;
                }
            }
        }
        printf("Es teh, Es kopi, Es Jeruk, Es Sirup\n");
        for (i=0; i<5; i++){
            printf("Rp.%d ", harga2[i]);
        }

    }
    }

    printf("\n");
    int uk=sizeof(harga1)/sizeof(int);
    int cari;
    int data[uk];
    printf("\nmasukkan harga yg di cari = ");
    scanf("%d",&cari);
    if (squentialSearch(harga1,uk,cari))
    {
        printf("ketemu\n");
    }
    else
    {
        printf("tidak ketemu\n");
    }


    return 0;
}
