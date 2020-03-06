#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tlr, bln, totlur, keuntungan;
    int ayam = 3;
    float kg;



    for (bln = 1, tlr = 3; bln <=16, tlr<= 270; bln++, tlr+=3)
    {
        if (bln==1)
        {
            tlr*=0;
            printf("Bulan ke- %1.d = %4d\n", bln,tlr);
        }
        else if (bln >=2&&bln <=16)
        {
            totlur=tlr*30*ayam;
            printf("Bulan ke- %1.d =%4d\n",bln, totlur);
            keuntungan = (kg*14500)- (200000*16)-150000;
            printf("Keuntungan Ibu Budi Selama 3-20 : %d", keuntungan);        }
    }


    return 0;
}
