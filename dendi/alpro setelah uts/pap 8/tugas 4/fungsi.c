#include"header.h"

int min2(int num1, int num2)
{
    if(num1<num2)
    {
        return num1;
    }
    else{
        return num2;
    }
}


int rec_min(int data[], int cur, int arrSize)
{
    if (cur==arrSize-1)
    {
        return data[cur];
    }
    else{
        return min2(data[cur], rec_min(data,cur+1,arrSize));
    }
}
