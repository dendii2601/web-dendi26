#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bilPrim;
    int a, b, c, sum;

    printf("input batas bilagan prima : ");
    scanf("%d",&bilPrim);

    printf("deret bilaga prima 1 - %d : " ,bilPrim);
    sum=0;
    for (a=2; a<=bilPrim; a++) {
        c=0;
        for (b=2; b<a; b++) {
            if (a%b == 0) {
               c=1;
            }
        }

            if(c==0) {
                printf("%d ", a);
                sum+=a;
            }

    }
    puts("");
    printf("jumlah deretan bilanga prima : %d", sum);

    return 0;
}
