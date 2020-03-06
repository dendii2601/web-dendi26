#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d=3;
    int e=4;
    int n=10;
    int den=11;
    int a=1;
    while(a<=5) {
        printf("\n");
       int b=1;
        do {
            if (a==1) {
                printf("%d ",b);
            }
            else if(a==2) {
                printf("%d ",d);
                d--;
            }
            else if (a==3) {
                printf("%d ",e);
                e++;
            }
            else if (a==4) {
                printf("%d ", n);
                n--;
            }
            else if (a==5) {
                printf("%d ", den);
                den++;
            }
            b++;
        }
        while (b<=a);
        a++;
    }
    return 0;
}
