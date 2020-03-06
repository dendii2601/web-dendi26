#include "header.h"
/*
    NAMA    : FAUZAN AGRA PRACASTA
    NIM     : A11.2018.11469
    KELAS   : A11.4215
*/
int main()
{
    int a,b,*c;

    a = 20;
    b = 5;
    printf("A== %d, B==%d\n",a,b);
    printf("A == %p\n", &a);
    printf("B == %p\n", &b);
    tambah_nilai(&c, a, b);
    printf("C == %p\n", &c);
    int *d = &a;
    int *e = &c;
    printf("D == %p\n",&a, &d);
    printf("E == %p\n",&c, &e);
    tukar(&a,&b);
    printf("A == %d, B == %d", a,b);
    return 0;
}
