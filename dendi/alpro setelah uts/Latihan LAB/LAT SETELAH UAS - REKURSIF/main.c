#include "header.h"

int main()
{
    helloWord(5);
    printf("%d + %d = %d \n",2,3, penjumlahan(3,2));
    printf("%d - %d = %d\n",5,2,pengurangan(5,2));
    printf("%d\n",perpangkatan(5,3));
    printf("%d\n",pemfaktoran(4));

    int arr[6]={2,3,6,4,6,NULL};
    printf("%d\n", sum_transversal(arr,0));
    printf("%d\n", perkalian(6,9));
    return 0;
}
