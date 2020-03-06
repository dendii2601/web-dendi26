#include "header.h"

void char_frequency(char text[]){
    int d,pjg_klmt;
    int huruf[100];
    pjg_klmt = strlen(text);

    for(d=0; d<26; d++){
        huruf[d] = 0;
    }
    for(d=0; d<pjg_klmt; d++){

        if (text[d]>='a' && text[d]<= 'z'){
            huruf[text[d] - 'a']++;
        }
        else if (text[d]>='A' && text[d]<= 'Z'){
            huruf[text[d] - 'A']++;
        }
    }

    for(d=0; d<26; d++){
        if(huruf[d] != 0){
            printf("'%c'\t: %d\n", (d + 'a'), huruf[d]);
        }
    }
}
