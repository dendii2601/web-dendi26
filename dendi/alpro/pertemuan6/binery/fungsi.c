#include"header.h"

int binery(int data[],int uk,int cari)
{
    int l,r,m;
    l=0;
    r=uk-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if (cari==data[m])
        {
            return m;
        }
        else if (cari<data[m])
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
        l++;
    }
    return-1;
}
