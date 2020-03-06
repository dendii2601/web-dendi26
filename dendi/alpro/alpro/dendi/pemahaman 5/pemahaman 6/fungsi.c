#include"header.h"

void squential_search(int data[],int uk, int cari)
{
    int i;
    int temp=0;
    for (i=0;i<uk;i++)
    {
        if (cari==data[i])
        {
           printf("data di temukan pada index ke %d\n ",cari,i);
           temp++;

        }
    }
    if (temp==0)
    {
        printf("data tidak di temukan\n");
        break;
    }
    return 0;
}
