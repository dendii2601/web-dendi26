#include"header.h"

int kali(int num1,int num2)
{
    if (num1==0)
        return 0;
    else {
        return num2+kali(num1-1,num2);
    }
}


void genap(int number)
{
    if (number==0){


    }
    else{
        if(number%2==0){
        printf("%d ",number);
        }
        ///return number+genap(number*2);
        genap(number-1);
    }
}


void kelTiga(int number)
{
    if(number==0){

    }
    else{
            kelTiga(number-1);

        if(number%3==0)
        {
             printf("%d ",number);
        }

    }
}


void prinArrRek(int aray[],int awal,int akhir)
{
    if(awal==akhir){

    }
    else{
        printf("[%d] ",aray[awal]);
        prinArrRek(aray,awal+1,akhir);
    }

}

int sumArrRek(int aray[],int awal,int akhir)
{
    if(awal==akhir){
        return 0;
    }
    else{
        return aray[awal]+ sumArrRek(aray,awal+1,akhir);

    }
}

//int searchArrRek (int aray[],int awal,int akhir,int cari)
//{
//    if(akhir==0){
//        if(aray[akhir]==cari)
//        return 1;
//    else{
//        return 0;
//    }
//    }
//    else{
//        if(aray[akhir]==cari)
//            return 1;
//        else{
//            return searchArrRek(aray,akhir-1,cari);
//        }
//
//    }
//}
//
//
//
