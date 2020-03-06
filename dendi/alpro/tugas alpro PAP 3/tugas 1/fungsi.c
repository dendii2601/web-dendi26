#include "header.h"

int count_array(int data[],int jumlah_data)
{
    int i, an_array = 0;
    jumlah_data = 0;

    for(i=0; data[i] != jumlah_data; i++)
    {
        an_array++;
    }
    return an_array;
}
