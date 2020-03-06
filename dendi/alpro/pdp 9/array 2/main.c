#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[20];
    float Y[10];
    char Z[30];
    int i;
    for(i=0;i<20;i++){
        printf("masukkan array ke-%d : \n",i+1);
        printf("Integer : ");
        scanf("%d", &X[i]);
        printf("Float : ");
        scanf("%f", &Y[i]);
        printf("Character : ");
        scanf("%s", &Z[i]);
        printf("\n");
    }
    return 0;
}
