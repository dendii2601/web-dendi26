#include "header.h"

void selection_sort(int data[], int jumlah_data)
{
    int x,y,temp,min;

    for(x=0; x<jumlah_data; x++)
        {
            min = x;
        for(y=x+1; y<jumlah_data; y++)
            {
            if(data[min]>data[y])
                {
                    min = y;
                }

            }
        temp=data[min];
        data[min]=data[x];
        data[x]=temp;

        print_array(data,jumlah_data);
        printf("\n");
    }
}
void print_array(int data[], int jumlah_data)
{
    int x;
    for(x=0; x<jumlah_data; x++)
        {
            printf("%d ", data[x]);
        }
}
