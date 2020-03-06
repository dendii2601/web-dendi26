#include"header.h"

int perpangkatan (int num1, int num2)
{

    if (num2==1){
        printf("%d",num1);
        return num1;
        }


        else{
            printf("%dx",num1);
            return num1 * perpangkatan(num1,num2-1);
        }
}
