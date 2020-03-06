#include <stdio.h>
#include <stdlib.h>
#include"header.h"

/// nama : Dendi Gerah Ilahi
/// nim : A11.2018.11478
/// kelas : 4215
int main()
{
    printf("hail kali =%d",kali(4,5));
    printf("\n\n");
    printf("kelipatan 2 dari besar ke kecil-->\n");
    genap(15);
    printf("\n\n");
    printf("kelipatan 3-->\n");
    kelTiga(15);
    printf("\n\n");


    int aray1[10] = {1,2,3,4,5,6,7,8,9,10};
    prinArrRek(aray1,0,10);
    printf("\n hasil sum array1 : %d\n",sumArrRek(aray1,0,10));
//    printf("apakah ketemu ? %d \n",searchArrRek(aray1,10,5));
//    printf("apakah ketemu ? %d \n",searchArrRek(aray1,10,11));
//    return 0;
}
