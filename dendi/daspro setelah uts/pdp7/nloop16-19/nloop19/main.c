#include <stdio.h>
#include <stdlib.h>

int main()
{

int d;
int den;
d=1;
while(d<=10) {
    den=1;
    while (den<=10) {
        printf("%3d" ,d*den);
        den++;
    }
    printf("\n");
    d++;
}


    return 0;
}
