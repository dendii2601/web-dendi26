#include "header.h"

//FUNGSI

    void tukar (int angka1, int angka2)
    {
        int temporary;
        if (angka1 > angka2)
        {
            temporary = angka1;
            angka1 = angka2;
            angka2 = temporary;
            printf("Angka 1 = %d\n", angka1);
            printf("Angka 2 = %d\n", angka2);
        }
        else if (angka1 < angka2)
        {
            printf("Angka 1 = %d\n", angka1+2);
            printf("Angka 2 = %d\n", angka2);
        }
    }
