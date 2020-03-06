#include "header.h"

void tambah_nilai(int *target, int a, int b)
{
    *target = a + b;
}

void tukar(int *a, int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}
