#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"


int main()
{
    printf("\n\t\t Tugas 1 \n");
    int a=5,b=6,c=7,d=8;
    int e=10,f=11,g=12,h=13;
    printf(" A == %d, B == %d,\n Setelah Swap : swapValue(&a,&b)  ",a,b);
    swapValue(&a,&b);
    printf("\n C == %d, D == %d,\n Setelah Swap : swapValue(&c,&d)  ",c,d);
    swapValue(&c,&d);
    printf("\n E == %d, F == %d,\n Setelah Swap : swapValue(&e,&f)  ",e,f);
    swapValue(&e,&f);
    printf("\n G == %d, H == %d,\n Setelah Swap : swapValue(&g,&h)  ",g,h);
    swapValue(&g,&h);
    puts("");

    printf("\n\t\t Tugas 2 \n");
    int i=2,j=9;
    printf("a = %d c = %d",a,c);
    printf("\na ditambah c = ");
    changeValue(&a,&c,&c);
    printf("\nd = %d d = %d",d,d);
    printf("\nd ditambah d = ");
    changeValue(&d,&d,&d);
    printf("\na = %d b = %d",a,b);
    printf("\na ditambah d = ");
    changeValue(&a,&b,&b);
    printf("\ni = %d j = %d",i,j);
    printf("\ni ditambah j = ");
    changeValue(&i,&j,&j);
    printf("\n\n");

    printf("\n\t\t Tugas 3 ");
    int *arr1,*arr2,*arr3,*arr4;
    arr1=arr2=arr3=arr4=malloc(sizeof(*arr1));
    puts("\nInitDyn Array pointer");
    initDynArray(&arr1,6);
    puts("\nInitDyn Array pointer");
    initDynArray(&arr2,4);
    puts("\nInitDyn Array pointer");
    initDynArray(&arr3,5);
    puts("\ninitDyn Array pointer");
    initDynArray(&arr4,3);
    printf("\n\n");


    printf("\n\t\t Tugas 4 ");
    int array1[]={1, 2, 3, 4, 5};
    int array2[]={6, 7, 8, 9, 10};
    int array3[]={21, 22, 23, 24, 25};
    int array4[]={31, 32, 33, 34, 35};
    puts("\nCetak data array1[]");
    printArray(&array1,5);
    puts("\nCetak data array2[]");
    printArray(&array2,5);
    puts("\nCetak data array3[]");
    printArray(&array3,5);
    puts("\nCetak data array4[]");
    printArray(&array4,5);
    printf("\n\n");

    printf("\n\t\t Tugas 5 \n");
    int array5[]={11, 12, 13, 14, 15};
    int array6[]={16, 17, 18, 19, 20};
    float rata;
    putAverage(&rata,array1,5);
    printf("hasil rata-rata a = %.2f\n",rata);
    putAverage(&rata,array2,5);
    printf("hasil rata-rata b = %.2f\n",rata);
    putAverage(&rata,array5,5);
    printf("hasil rata-rata c = %.2f\n",rata);
    putAverage(&rata,array6,5);
    printf("hasil rata-rata d = %.2f\n",rata);

    return 0;
}
