#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas=5;
    int a=5;
    int b=1;
    int i=0;

    while (i<5) {
        printf("\n");
        int j=b;
        while (j<=a) {
            printf("%d",j);
            j++;
        }
        b+=1;
        batas--;
        i++;
    }
    return 0;
}
