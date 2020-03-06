#include "header.h"

int main()
{
    int ukuran;
    printf("\tArray Pointer\n");
    printf("Masukan ukuran array = ");
    scanf("%d", &ukuran);

    //INISIAL ARRAY
    int *pointer_array;
    inisial_array(&pointer_array,ukuran);puts("");
    input_array(pointer_array, ukuran);puts("");
    cetak_array(pointer_array, ukuran);puts("");
    return 0;
}
