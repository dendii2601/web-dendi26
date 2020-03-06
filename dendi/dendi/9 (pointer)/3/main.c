#include "header.h"

int main()
{
    int *ar1, *ar2, *ar3;
    ar1=ar2=ar3=malloc(sizeof(*ar1));
    printf("initDynArray(*ar1, 5)\n");
    initDynArray(&ar1,5);
    printf("\n");
    printf("initDynArray(&ar2,4)\n");
    initDynArray(&ar2,4);
    printf("\n");
    printf("initDynArray(&ar3,6)\n");
    initDynArray(&ar3,6);

    return 0;
}
