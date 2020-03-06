#include "header.h"

int rec_cetak_array(int data[],int car, int arrSize)
{
    if(car==arrSize)
    {
        printf(" [%d]", data[car]);
        return data[car];
    }else{
        printf("[%d] ", data[car]);
        return rec_cetak_array(data,car+1, arrSize);
    }
}

int searcharray(int data[], int awal, int akhir, int cari)
{
    if (awal == akhir+1){
        return 0;
    }
    else {
        if(data[awal] == cari)
        {
            return 1;
        }else{
            return searcharray(data, awal+1, akhir, cari);
        }
    }
}

int sumArray(int data[], int awal,int akhir)
{
    if(awal == akhir-1)
    {
        return data[awal];
    }
    else{
        return data[awal] + sumArray(data,awal+1, akhir);
    }
}

