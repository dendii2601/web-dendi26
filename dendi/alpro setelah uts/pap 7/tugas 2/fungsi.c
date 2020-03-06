#include"header.h"
int kurang(int num1,int num2)
{

    if(num2==0){
        printf("+%d",num1);
        return +num1;

    }

    else{
        printf("-1");
        return kurang(num1,num2-1)-1;
    }

}
