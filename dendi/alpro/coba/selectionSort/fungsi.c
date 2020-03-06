#include"header.h"

void selectionSort(int data[],int jumlah)
{
    int x,y,temp,min;
    for (x=0; x<jumlah; x++)
    {
        min=x;
        for(y=x; y<jumlah; y++)
        {
            if(data[y]<data[min])
            {
                min=y;
            }
        }
        temp=data[min];
        data[min]=data[x];
        data[x]=temp;
    }
}


void cetak(int data[],int jumlah)
{
    int x;
    for(x=0; x<jumlah; x++)
    {
        printf("%d ", data[x]);
    }

}

