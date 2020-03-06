#include"header.h"

void rec_print_all(int data[], int cur, int arrSize)
{
    if(cur==arrSize){


    }
    else{
        printf(" %d",data[cur]);
        rec_print_all(data,cur+1,arrSize);
    }

}


void rec_selection_sort(int data[], int arrSize)
{
    int a,b;
    int temp;
    b=arrSize-1;
    a=arrSize-2;

    while (a>=0)
    {
        if(data[a]>data[b])
        {
            b=a;
        }
        a--;
    }
        temp=data[arrSize-1];
        data[arrSize-1]=data[b];
        data[b]=temp;
        if(arrSize>0)
        {
            rec_selection_sort(data,arrSize-1);
        }


    }

