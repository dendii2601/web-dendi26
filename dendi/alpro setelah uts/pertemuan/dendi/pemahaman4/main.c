#include <stdio.h>
#include <stdlib.h>
#include"header.h"
//
//nama Dendi Gerah Ilahi
//nim A11.2018.11478
//kelas 4215
//materi array pointer
int main()
{
    int a=20;
    int b=5;
    int *c=a+b;
    int *d;
    int *e;
    int *pointer=NULL;
    printf("a =%d b=%d\n",a,b);
    tukarnilai(&a,&b);
    printf("a=%d b=%d\n",a,b);




    int uk;
    printf("\t array pointer \n");
    printf("masukkan ukuran array = ");
    scanf("%d",&uk);

    // inisial array
    int *pointer_array;
    inisial_array(&pointer_array,uk);
    input_array(pointer_array,uk);
    cetak_array(pointer_array,uk);



    return 0;
}
