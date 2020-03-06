#include "pustaka.h"
void biner(int n) {
    if (n > 0) {
        biner(n/2);
        printf("%d",n%2);
    }
}

int pangkat(int n,int x) {
    int nilai=1,i;
    for (i=0;i<x;i++) {
        nilai=nilai*n;
    }
    return nilai;
}

int cekdesimal(int x) {
    if (x < 0)    {
        return 1;
    }
    return 0;
}

int cekbiner(char str[],int *x)
{
    int i,dec = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            return 1;
        }
    }
    for (i =0; i <  strlen(str) ; i++)
    {
        if (str[i] - '0' == 1) {
            dec = dec + pangkat(2,strlen(str)-1-i);
        }
    }
    *x = dec;
    return 0;
}
int cekoktal(char str[],int *x)
{
    int i,dec=0;
    if ((strlen(str) >= 6) && (str[0] > 49))
    {
        return 1;
    }
    for (i = 0; i < strlen(str); i++)
    {
        if (!((str[i] > 47 ) && (str[i] < 56)))
        {
            return 1;
        }
    }
    for (i =0; i <  strlen(str) ; i++)
    {
        dec = dec + (str[i] - '0') * pangkat(8,strlen(str)-1-i);
    }
    *x = dec;
    return 0;
}
int cekhexa(char str[],int *x)
 {
    int i,dec=0;
    for (i = 0; i < strlen(str); i++)
    {
        if (! ( ((str[i] > 47 ) && (str[i] < 58)) || ((str[i] > 96 ) && (str[i] < 103)) || ((str[i] > 64 ) && (str[i] < 71)) ))
        {
            return 1;
        }
    }
    for (i =0; i < strlen(str) ; i++)
    {
        if ((str[i] >= '0' ) && (str[i] <= '9')) {
            dec = dec + (str[i] - '0') * pangkat(16,strlen(str)-1-i);
        }
        else if ((str[i] > '@' ) && (str[i] < 'G')) {
            dec = dec + (str[i] - 55) * pangkat(16,strlen(str)-1-i);
        }
        else if ((str[i] > 96 ) && (str[i] < 'g')) {
            dec = dec + (str[i] - 87) * pangkat(16,strlen(str)-1-i);
        }
    }
    *x = dec;
    return 0;
}
