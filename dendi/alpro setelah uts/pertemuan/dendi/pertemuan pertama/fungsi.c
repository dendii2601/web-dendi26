#include "header.h"
void helloWord(int jumlah)
{
    ///basis
    if (jumlah ==0)
    {

    }
    ///rekuren
    else{
        printf("HelloWord (%d)\n",jumlah);
        helloWord(jumlah-1);
    }
}


int penjumlahan (int angka1, int angka2)
{
    //basis
    if (angka2==0){
        return angka1;}
        //rekuran
        else{
            return 1+penjumlahan(angka1,angka2-1);
        }
}

int pengurangan (int angka1, int angka2)
{
    //basis
    if (angka2==0){
        return angka1;}
        //rekuran
        else{
            return pengurangan(angka1,angka2-1)-1;
        }
}
int pangkat (int angka1, int pngkat)
{
    //basis
    if (pngkat==0){
        return 1;
        }
        //rekuran
        else{
            return angka1 * pangkat(angka1,pngkat-1);
        }
}

int faktorial (int angka)
{
    //basis
    if (angka==1){
        return 1;
        }
        //rekuran
        else{
            return angka * faktorial(angka-1);
        }
}

int sum_tranversal(int data[],int cur)
{
    ///basis
    if (data[cur]==NULL)
    {
        return 0;
    }
    ///rekuren
    else{
        return data[cur]+sum_tranversal(data,cur+1);
    }
}

int perkalian (int angka1, int angka2)
{
    //basis
    if (angka1==0){
        return 0;}
        //rekuran
        else{
            return angka2+perkalian(angka1-1,angka2);
        }
}



