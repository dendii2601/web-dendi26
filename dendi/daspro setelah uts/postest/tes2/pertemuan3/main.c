#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris, kolom, d,e, f;

    printf("kasukkan baris : ");
    scanf("%d", & baris);
    printf("kasukkan kolom : ");
    scanf("%d", & kolom);
    for (d=1; d<=10; d++) {

        for (e=1; e<=10; e++) {
            if (d%2==1) {
                printf("*");
            }
            else {
                printf("=");
            }
        } printf("\n");

    }
    return 0;
}
