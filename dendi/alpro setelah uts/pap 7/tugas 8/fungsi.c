#include"header.h"

int sum_tranversal(int data[],int cur)
{

    if (data[cur]==NULL)
    {
        return 0;
    }

    else{
        return data[cur]+sum_tranversal(data,cur+1);
    }
}
