#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[45],cari;
    int batas,i,tes;
    char tanya;

    input :
        printf("masukkan batas : ");
        scanf("%d", &batas);
        for(i=1;i<=batas;i++){
            printf("input array : ");
            scanf("%f", &a[i]);
        }
        printf("Apakah ingin input lagi ? Y/N : ");
        fflush(stdin);
        scanf("%c", &tanya);


        if(tanya=='y' || tanya=='Y'){
            system("cls");
            goto input;
        }
        else if(tanya=='n'|| tanya=='N'){
            printf("\n masukkan nilai yang di cari : ");
            scanf("%f", &cari);


            tes = 0;
            for(i=1;i<=batas;i++){
                if(a[i]==cari){
                    tes = 1;
                    printf("\n%.2f terdapat di index ke-%d", cari, i);
                    break;
                }
            }
            if(tes==0){
                printf("\n%.2f tidak di temukan", cari);
            }
        }
    return 0;
}
