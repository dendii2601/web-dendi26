#include"header.h"

int squential_search(int data[], int uk, int cari)
{
    int i;
    for(i=0; i<uk; i++)
    {
        if(cari==data[i])
            {
                return i;
            }
    }
    return -1;
}
