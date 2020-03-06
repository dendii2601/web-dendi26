#include"header.h"
int tambah(int num1,int num2)
{

    if(num2==0){
        printf("%d",num1);
        return num1;

    }

    else{
        printf("1+");
        return 1+ tambah(num1,num2-1);
    }

}
