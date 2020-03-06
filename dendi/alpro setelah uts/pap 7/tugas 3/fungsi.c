#include"header.h"

int kali (int num1, int num2)
{

        if (num2==1){
            printf("%d",num1);
            return num1;
            }

        else{
            printf("%d+",num1);
            return num1+kali(num1,num2-1);
        }
}
