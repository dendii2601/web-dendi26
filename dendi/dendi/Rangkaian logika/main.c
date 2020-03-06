#include "pustaka.h"
int main() {
    int x,dec;
    char oct[6],bin[16],hex[4];
    char y;
    lagi:system("cls");
        printf("Selamat Datang di Basis Angka Konverter Dalam Bahasa C");
        printf("\n\n\t\t======== TEAMWORK ======== \n\n");
        printf("\t\tFirdaus Ghazy Cahyanto \t\t A11.2018.11457\n");
        printf("\t\tHabiib Iqbal Sobari \t\t A11.2018.11458\n");
        printf("\t\tMuhammad Alful Falakh \t\t A11.2018.11471\n");
        printf("\t\tDendi Gerah Ilahi \t\t A11.2018.11478\n");
    printf("\n\n\t\t[Menu]\nbasis angka yang ingin di konvert :\n\n1. Desimal\n2. Biner\n3. Oktal\n4. Heksadesimal\n\nPilih: ");
    scanf("%d",&x);
    switch(x) {
        case 1:
                    printf("\nMasukan angka desimal (Maksimal 65535): ");
                    scanf("%d",&dec);
                    if(cekdesimal(dec) != 0) {
                        printf("\nError\n");
                        break;
                    }
                    printf("Biner: ");
                    biner(dec);
                    printf("\nOktal: %o",dec);
                    printf("\nHexa: %X",dec);
                    break;
        case 2:
                    printf("\nMasukan angka biner (Maksimal 16 bit): ");
                    scanf("%s",bin);
                    if(cekbiner(bin,&dec) != 0) {
                        printf("\nError\n");
                        break;
                    }
                    printf("\nDesimal: %d",dec);
                    printf("\nOktal: %o",dec);
                    printf("\nHexa: %X",dec);
                    break;
        case 3:
                    printf("\nMasukan angka Oktal (Maksimal 177777): ");
                    scanf("%s",oct);
                    if(cekoktal(oct,&dec) != 0) {
                        printf("\nError\n");
                        break;
                    }
                    printf("Desimal: %d",dec);
                    printf("\nBiner: ");
                    biner(dec);
                    printf("\nHexa: %X",dec);
                    break;
        case 4:
                    printf("\nMasukan angka hexa (Maksimal FFFF): ");
                    scanf("%s",hex);
                    if(cekhexa(hex,&dec) != 0) {
                        printf("\nError\n");
                        break;
                    }
                    printf("Desimal: %d",dec);
                    printf("\nBiner: ");
                    biner(dec);
                    printf("\nOktal: %o",dec);
                    break;
        default: printf("Angka yang anda masukan mungkin tidak ada dalam menu");
    }
    printf("\n\nke menu[y/t]: ");
    fflush(stdin);scanf("%c",&y);
    if(y=='y'||y=='Y')
    {
        goto lagi;
    }
getch();
    return 0;
}
