#include "header.h"
/*
    NAMA : FAUZAN AGRA P
    NIM : A11.2018.11469
    KELAS : 4215
*/
int main()
{
    int data1[]={1,1,1,1,1};

    printf("\n", rec_cetak_array(data1,0,5));
    printf("%d\n", sumArray(data1,0,5));
    printf("Apakah ketemu? %d ", searcharray(data1,0,5,1));
    printf("Apakah ketemu? %d ", searcharray(data1,0,5,7));
    return 0;
}
