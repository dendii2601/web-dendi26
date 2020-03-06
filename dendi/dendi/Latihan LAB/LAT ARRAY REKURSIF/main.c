#include "header.h"

int main()
{
    int data [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArrayRek(data, 0, 10);
    puts("");
    printf("Hasil SUM : %d\n", sumArrayRek(data, 0 , 5));
    printf("Cari : %d\n", searchArrayRek(data, 10 , 5));
    printf("Cari : %d\n", searchArrayRek(data, 10 , 11));

    return 0;
}
