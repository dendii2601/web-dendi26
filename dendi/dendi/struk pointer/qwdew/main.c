
#include "pustaka.h"
int main()
{
    int jumlah;
    karyawan data;
    karyawan *data2;
    data2=&data;
    printf("jumlah = ");
    scanf("%d",&jumlah);
    data2=(karyawan*)malloc(jumlah * sizeof(karyawan));
    input(data2,jumlah);
    output(data2,jumlah);
    return 0;

}
