#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[10]={1,2,3,4,5,6,7,8,9,10};
    float Y[10]={11.0,12.0,13.0,14.0,15.0,16.0,17.0,18.0,19.0,20.0};
    char Z[10]="MOTOVLOGKU";
    int i;
    for(i=0;i<=10;i++){
        printf("\n********\n");
        printf("array Ke-%d\t:\n\n",i+1);
        printf("Integer    \t:%d\n\n",X[i]);
        printf("Float      \t:%f\n\n",Y[i]);
        printf("Character  \t:%c\n",Z[i]);
        printf("\n");
    }
    return 0;
}
