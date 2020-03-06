#include"header.h"

int squentialSearch(int data[],int uk, int cari)
{
    int i;
    for(i=0;i<uk;i++)
    {
        if(cari==data[i])
        {
            return i;
        }
    }
    return -1;/// index -1 berarti tidak ketemu
}
