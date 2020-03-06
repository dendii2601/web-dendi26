#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int jumlah;
    char text[maks],cari[30];
    printf("masukkan kalimat : "); gets(text);
    jumlah=strlen(text);
    printf("Masukan kata yang ingin anda cari : ");
    gets(cari);
    printf("search_word(%s,%s) -> %s",cari,text,searchWord(cari,text)?"true":"false");

    return 0;
}
