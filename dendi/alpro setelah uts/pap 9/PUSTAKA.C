#include "pustaka.h"

void swapValue(int *num1,int *num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("  %d",*num1);
    printf(" , %d",*num2);
}


void changeValue(int *num1,int *num2,int *target){
    *target=*num1+*num2;
    printf(" %d",*target);
}


void initDynArray(int *ray,int jml){
    int i=1;

    while(i<=jml){
        printf(" %d",i);
        i++;
    }
}

void printArray(int *ray,int jumlah){
    int i=0;

    while(i<jumlah){
        printf(" %d",*ray++);
        i++;
    }
}

void  putAverage(float *hasil,int ray[],float n){
    int i=0,sum=0;

    while(i<n){
        sum+=ray[i];
        i++;
    }
    *hasil=sum/n;
}
