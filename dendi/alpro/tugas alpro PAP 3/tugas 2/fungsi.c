#include "header.h"

int cek_urut(int data[], int jml_data){
    int x;

    for(x=0; x<jml_data; x++){
        if(data[0]<data[1] && data[1]<data[2] && data[2]<data[3] && data[3]<data[4]){
                printf("true\t");
                return 1;

        }
        else{
            printf("false\t");
            return 0;
        }
    }
}
