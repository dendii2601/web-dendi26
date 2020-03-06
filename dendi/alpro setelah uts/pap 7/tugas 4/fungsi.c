#include"header.h"

int bagi (int num1, int num2)
{
        if (num1<num2){
            return 0;
        }

        else{
            printf("-%d",(num2));
            return (1+bagi(num1-num2,num2));
        }
}
