#include "header.h"

void helloWord(int jumlah)
{
    //basis
    if(jumlah == 0){

    }
    //rekuren
    else{
        printf("Hello World (%d) \n", jumlah);
        helloWord(jumlah-1);
    }
}

int penjumlahan(int angka1, int angka2)
{
    //basis
    if(angka2 == 0){
        return angka1;
    }
    //rekuren
    else{
        return 1 + penjumlahan(angka1, angka2 - 1);
    }
}

int pengurangan(int angka1, int angka2)
{
    //basis
    if(angka2 == 0)
    {
        return angka1;
    }
    else{
        return - 1 + pengurangan(angka1, angka2-1);
    }
}

int perpangkatan(int angka, int pangkat)
{
    //basis
    if(pangkat == 0){
        return 1;
    }
    //rekuren
    else{
        return angka * perpangkatan(angka, pangkat - 1);
    }
}

int pemfaktoran(int angka)
{
    //basis
    if(angka==1){
        return 1;
    }
    //rekuren
    else{
        return angka * pemfaktoran(angka - 1);
    }
}

int sum_transversal(int data[], int cur)
{
    //basis
    if(data[cur] == NULL){
        return 0;
    }
    //rekuren
    else{
        return data[cur] + sum_transversal(data, cur+1);
    }
}
int perkalian(int angka1, int angka2)
{
    //basis
    if(angka1 == 0){
        return 0;
    }
    //rekuren
    else{
        return angka2 + perkalian(angka1-1,angka2);
    }
}
