#include <stdio.h>
#include <stdlib.h>
#include"header.h"

void tukarnilai(int *angka1,int *angka2)
{
    int temp;
    temp=*angka1;
    *angka1=*angka2;
    *angka2=temp;

}


int main()
{
    int angka1=12;
    int angka2=23;
    int*pointerAngka=NULL;
    pointerAngka=&angka1;

    printf("\nangka 1 =%d\n",angka1);
    printf("Alamat angka1 = %p\n",&angka1);
    puts("");
    printf("\nangka 1 =%d\n",*pointerAngka);
    printf("Alamat angka1 = %p\n",&pointerAngka);
    puts("");

    printf("\nsebelum di tukar\n");
    printf("angka1 =%d, angka2 =%d\n",angka1,angka2);

    tukarnilai(&angka1,&angka2);

    printf("\nsetelah tukar\n");
    printf("angka1 =%d, angka2 =%d\n",angka1,angka2);



//    int num1 =5;
//    int num2=9;
//    int target;
//    changevale(*target,num1,num2);
//    printf("%d\n",target);



    return 0;
}
