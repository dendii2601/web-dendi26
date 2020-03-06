#include"header.h"

int fibona(int n1,int n2,int i,int n)
{
    if(i==n)
    {
        //printf("%d",number);
        return n;
    }
    else{
        printf("%d ",n1+n2);
        return fibona(n1+n2,n1,i+1,n);
    }
}
void fibonac(int number)
{
    if(number>0){
        printf("%d ",1);
        fibona(1,0,1,number);
    }
}
