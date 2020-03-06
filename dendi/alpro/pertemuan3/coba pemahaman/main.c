#include <stdio.h>
#include <stdlib.h>

int main()
{
    int urut1[]= {5, 9, 3, 7, 2 };
    int x;
    printf("sebelum\n");
    for (x=0; x<5; x++)
    {
        printf("%d ", urut1[x]);
    }
    printf("\n");

    urutan(urut1, 5);
    printf("setelah\n");
    for (x=0; x<5; x++)
    {
        printf("%d ", urut1[x]);
    }

    return 0;
}
