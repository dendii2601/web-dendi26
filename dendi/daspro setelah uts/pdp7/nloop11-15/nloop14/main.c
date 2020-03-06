#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    int e;
    int n;
    int di;
    int i;
    int ii;

    d=11, e=12, n=13, di=14, i=15, ii=16;
    while (d<=61 && e<=62 && n<=63 && di<=64 && i<=65 && ii<=66) {
        if ((d==11  || d>=61  && d<20  || d%10==1)&&
            (e==12  || e>=62  && e<20  || e%10==2)&&
            (n==13  || n>=63  && n<20  || n%10==3)&&
            (di==14 || di>=64 && di<20 || di%10==4)&&
            (i==15  || i>=65  && i<20  || i%10==5)&&
            (ii==16 || ii>=66 && ii<20 || ii%10==6)) {
                printf("%d %d %d %d %d %d \n" ,d ,e ,n ,di, i, ii);
            }
            d++, e++, n++, di++, i++, ii++;
    }






    return 0;
}
