#include "header.h"


void urutan(int urut1[],int jumlah)
{
    int x,y,temp;
for(x=0; x<jumlah-1; x++)
{
    for(y=0; y<jumlah-1-x; y++)
    {
        if(urut1[y]>urut1[y+1])
            {
                temp=urut1[y];
                urut1[y]=urut1[y+1];
                urut1[y+1]=temp;
            }
    }
}
}
