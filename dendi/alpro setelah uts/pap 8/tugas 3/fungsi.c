#include"header.h"

int max2(int num1, int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else{
        return num2;
    }
}

int rec_max(int data[], int cur, int arrSize)
{
    if (cur==arrSize-1)
    {
        return data[cur];
    }
    else{
        return max2(data[cur], rec_max(data,cur+1,arrSize));
    }
}
