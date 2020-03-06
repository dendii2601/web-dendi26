#include"header.h"

    int cek(char kata[225]);
    int vokal()
{
    char kata[225];
    printf("masukkan kalimat : ");
    gets(kata);
    fflush(stdin);
    printf("Jumlah Karakter vokal = %d", cek(kata));

    return 0;
}

int cek(char kata[225])
{
    int jml = 0, i = 0;
    while(kata[i] != 0){
        if(toupper(kata[i])== 'A'||
           toupper(kata[i])== 'I'||
           toupper(kata[i])== 'U'||
           toupper(kata[i])== 'E'||
           toupper(kata[i])== 'O')
                jml++;
            i++;
        }
    return jml;
}
