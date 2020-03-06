#include"header.h"

int tukarnilai(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void inisial_array(int *ptr, int uk)
{
    *ptr = (int*) malloc(uk*sizeof(int));
}


void input_array(int *ptr, int uk)
{
    int i;
    for(i=0;i<uk;i++){
        printf("input nilai =");
        scanf("%d",(ptr+i));
    }
}

void cetak_array(int *ptr, int uk)
{
    int i;
    for(i=0;i<uk;i++){
        printf("alamat %p, bernilai %d\n ",(ptr+i),*(ptr+i));

    }

}
