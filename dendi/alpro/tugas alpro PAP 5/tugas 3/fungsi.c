#include "header.h"

void min_max(int data[], int jumlah_data, int *min, int *max){
    int i;
    *min=data[0];
    *max=data[0];
    for(i=0;i<jumlah_data;i++){
        if(*max<data[i]){
            *max=data[i];
        }
        else if(*min>data[i]){
            *min=data[i];
        }
    }
}
