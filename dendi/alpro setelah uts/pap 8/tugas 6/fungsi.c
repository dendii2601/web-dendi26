#include"header.h"

 float rec_mean(int data[], int cur, int n)
{
    if(cur==n-1)
        return data[cur];
    else if(cur>0)
        return data[cur]+rec_mean(data,cur+1,n);
    else
        return (data[cur]+rec_mean(data,cur+1,n))/n;
}


