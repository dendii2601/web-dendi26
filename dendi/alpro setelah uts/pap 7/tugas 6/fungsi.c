#include"header.h"

int faktorial (int number)
{

    if (number==1){
        printf("%d",number);
        return number;
        }

        else{
            printf("%dx",number);
            return number * faktorial(number-1);
        }
}
