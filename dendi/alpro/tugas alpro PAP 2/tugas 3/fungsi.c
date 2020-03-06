#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>



int cek_prima(int num){
    int jum ,i;
    jum = 0 ;

        for (i=1; i<=num; i++){
            if (num %i==0){
                jum++;
            }
        }
        if (jum==2){
                return 1;
            }
        else{
                return 0;
            }
}
