//Nama = yahya wildan
//NIm = A11.2018.11462
//kelas = A11.4215

#include "pustaka.h"
int main()
{
    int a=20, b=5;
    int c;
    int *d, *e;



    printf("A = %d \t\t\t\t Alamat A = %p",a,&a);
    printf("\nB = %d \t\t\t\t Alamat B = %p",b,&b);puts("");



    tam(&c,a,b);
    printf("isi variabel c = %d ",c);
    printf(" \t\tAlamat C = %p",&c);

    printf("\nD alamat a = %p \t\t Alamat D = %p",&a,&d);
    printf("\nE alamat c = %p \t\t Alamat E = %p",&c,&e);

    printf("\nsebelum swap\n");
    printf("a = %d , b = %d ",a,b);
    printf("\nsetelah swapp\n");
    swapp(&a,&b);
    printf("a = %d , b = %d ",a,b);




    return 0;
}
