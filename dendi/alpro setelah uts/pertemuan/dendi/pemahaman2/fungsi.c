#include"header.h"

void prinaray(int data[],int cur,int arrsize)
{
    if(cur==arrsize-1)
    {

    }
    else{


        prinaray(data,cur+1,arrsize);
        printf(" %d",data[cur]);
    }

}
