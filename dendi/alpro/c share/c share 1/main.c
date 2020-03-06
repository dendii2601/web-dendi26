#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// protoype
int penjumlahan(int num1, int num2);
int kali (int num1 , int num2);
///int bagi (int num1, int num2);
////
int main()
{
    int bil1,bil2;
    printf("masukkan bilangan 1 = ");
    scanf("%d",&bil1);
    printf("masukkan bilangan 2 = ");
    scanf("%d",&bil2);
    printf("jumlah = %d\n", penjumlahan(bil1, bil2));
    printf("hasil kalli = %d\n", kali(bil1,bil2));
   /// printf("hasil bagi = %d")
    return 0;
}

int penjumlahan (int num1, int num2)
{
    return (num1+num2);
}

    int kali(int num1, int num2 )
    {
    return (num1*num2);
    }
