#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas =  5;
    int a = 1;
    while (a<=5) {
        if (a==1) {
            printf("2\n");
        }
        else if (a==2) {
            printf("242\n");
        }
        else if (a==3) {
            printf("24642\n");
        }
        else if (a==4) {
            printf("2468642\n");
        }
        else if (a==5) {
            printf("2468108642\n");
        }
        a++;
    }
    return 0;
}
