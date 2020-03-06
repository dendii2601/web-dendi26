#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j=0;
    float k;
    for (i=1; i<=60; i++) {
        if (i%3==0)
        j=j+i;
        printf("angka : %d\n", i);
        k = j/20.0;
    }
    printf("angka kelipatan 3 dari 1-60 %d\n",j);
    printf("rata-rata angka kelipatan 3 dari 1-60 %2.f\n", k);


    return 0;
}
