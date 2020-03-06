#include "header.h"


int sequentSearch(int angka, int data[], int jumlah_data)
{
    int x;

    for(x=0; x<jumlah_data; x++)
    {
        if(data[x]==angka)
            {
                return 1;
            }
    }
        return 0;
 }
