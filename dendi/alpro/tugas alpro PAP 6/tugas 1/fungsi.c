#include "header.h"

int binarysearch(int cari,int data[])
{
    int i,j,l,r,n,m,t;
    n=0;
    while(data[n]!=0)
    {
        n++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(data[j+1]<data[j])
            {
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }
    l=0;
    r=n-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(cari==data[m])
        {
            return 1;
     }else if(cari<data[m])
        {
            r=m-1;
        }else
        {
            l=m+1;
        }
    }
    return 0;
}

int binaryurut(int cari,int data[],int ukuran)
{
    int left=0;
    int right=ukuran;
    int mid;

    while (left<right)
    {
        mid=(left+right)/2;

        if (data[mid]==cari)
        {
            return data;
        }
        else if (data[mid]<cari)
        {
            left=mid+1;//geser ke mid +1
        }
        else
        {
            right=mid-1;
        }
    }
}
