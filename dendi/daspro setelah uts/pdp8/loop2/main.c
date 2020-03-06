#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, e;

    printf("iput faktor : ");
    scanf("%d",&d);

    printf("\n");

    printf("output : ");
   for (e=1; e<=d; e++) {
        if ((d % e)==0) {
           printf("%d \t",e);
        }
   }
    printf("\n");

    return 0;
}
