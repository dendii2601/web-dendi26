#include "header.h"

int bubble_sort1(int data[], int jml_data){
    int temp,x,y;


    for(x=0; x<jml_data-1; x++){
        for(y=0;y<jml_data-x-1;y++){
            if(data[y]>data[y+1]){
                temp=data[y];
                data[y]=data[y+1];
                data[y+1]=temp;
            }
        }
        cetak(data, jml_data);
        printf("\n");
    }
    printf("\n");
}
int cetak(int data[], int jml_data){
    int x;
    for(x=0;x<jml_data;x++){
         printf("%d ",data[x]);
    }

}
