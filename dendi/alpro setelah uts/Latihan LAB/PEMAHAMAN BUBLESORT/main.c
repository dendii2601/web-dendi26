#include "header.h"
/*
    NAMA    : FAUZAN AGRA PRACASTA
    NIM     : A11.2018.11469
    KELAS   : 4215
*/
int main()
{
    int arr1[]={3,9,2,48,1,5,4,32};
    bubble_sort1(arr1,8);
    puts("\n");
    int batas,k;

    printf("Masukan Batas = ");
    scanf("%d", &batas);
    int arr2[batas];
    for(k=0;k<batas;k++)
    {
        printf("Masukan Angka Ke-%d = ", k+1);
        scanf("%d", &arr2[k]);
    }
    bubble_sort1(arr2,batas);

    return 0;
}
