#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("materi perulangan\n\n");
    /// perulangan
    int i, j, k;
    for (i=0, j=10, k=0 ; i<=10, j>=0, k<=10; i++, j--, k++) {
         printf("i = %d\t \tj = %d\t\t k = %d\t\t\n\n" , i, j, k);
    }
        printf("\n\n\n");


printf("contoh perulangan\n\n");

    int berjalan;
    for (berjalan = 11; berjalan<=20; berjalan++)
        printf("berjalan = %d\n", berjalan);
         printf("\n\n\n");


    puts ("contoh perulangan for\n");
    for (i=10; i>0; i--) {
        printf("i : %d\n", i);
    } printf("\n\n\n");

    puts("contoh oerulangan while\n");
    i=0;
    while (i<=10) {
        printf("i : %d\n", i);
    i++;

    } printf("\n\n\n");


    puts("contoh oerulangan do - while\n");
    i=1;
    do {
        printf("i : %d\n", i);
        i++;
    } while (i<=10);

























    return 0;
}
