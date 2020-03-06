#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas;
    int i;
    int j;
    int k;

    printf("masukkan batas akhir : ");
    scanf("%d", & batas);
    for (i=1; i<=(2*batas); i++) {
        if (i%2==1) {
            for (j=1; j<=i; j++) {
                printf("%d",j);
            }
        }
        else {
            printf("\n");
        }
    }
    return 0;
}
