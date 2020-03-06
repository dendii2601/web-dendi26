
#include "header.h"
int main()
{
    helloWord(5);
    printf("hasil tambah : %d\n",penjumlahan(12,8));

    printf("hasil kurang : %d\n",pengurangan(10,8));
    printf("hasil pangkat : %d\n",pangkat(2,3));
    printf("hasil faktorial : %d\n",faktorial(3));
    int arr[7]={7,20,1,3,9,6,NULL};
    /// hasil = 46
    printf("hasil penjumlahan array : %d\n",sum_tranversal(arr,0));

    printf("hasil kali : %d\n",perkalian(10,8));

    return 0;
}
