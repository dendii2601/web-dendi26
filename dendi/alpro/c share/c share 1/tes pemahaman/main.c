#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jumlah_permen(int biji);
int jumlah_kotak(int permen);

int main()
{
    /* 1 biji = 12 permen
        1 kotak = 5 permen*/
    int a, b;
    printf(" masukkan biji = ");
    scanf("%d",& a);
    printf("jumlah permen = %d", jumlah_permen(a));
    printf("jumlah kotak = %d", jumlah_permen(b));

    return 0;
}


int jumlah_permen(int biji)
{
    return(biji*12);
}

int jumlah_kotak(int permen)
{
    return (jumlah_permen%5);
}
