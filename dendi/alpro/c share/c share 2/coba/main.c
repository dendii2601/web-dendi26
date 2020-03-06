#include <stdio.h>
#include <stdlib.h>

void bubble(int data[], int jumlah);
void cetak (int data[], int jumlah);
int main()
{
    int ar[]={65,82,40,94,88,15,35,25,51,77};
    int pasukan []={1,2,3,4,5,6,7,8,9,0};
    int batas=sizeof(ar)/sizeof(int);

    cetak(ar,batas);
    bubble(ar,batas);

    return 0;
}

void bubble(int data[], int jumlah)
{
    int x,y,temp;
    for(x=0; x<jumlah-1; x++)
    {
        for (y=0; y<jumlah-x-1; y++)
        {
            if (data[y]<data[y+1])
            {
                temp=data[y];
                data[y]=data[y+1];
                data[y+1]=temp;

                temp=pasukan[y];
                pasukan[y]=pasukan[y+1];
                pasukan[y+1]=temp;
            }
        }
    }
}

void cetak (int data[], int jumlah)
{
    int x;
    for (x=0; x<jumlah;x++)
    {
        printf("pasukan ke %d = %d", x, data[x]);
    }
}
