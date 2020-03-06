#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, data;
    float a[10];
    char tanya;

    do{
        printf("masukkan jumlah data : ");
        scanf("%d", &data);
        for(i=1;i<=data;i++){
            printf("%d. ",i);
            printf("input Float : ");
            scanf("%f",&a[i]);
        }
        printf("ulang input data lagi ? [Y/N] = ");
        fflush(stdin);
        scanf("%c", &tanya);
        system("cls");
    }while(tanya=='y'||tanya=='Y');
    for(i=1;i<=data;i++){
        printf("%.2f", a[i]);
    }
    return 0;
}
