#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;


    printf("Masukkan Batas :"); scanf("%d",&i);

    a=1;
    do
        {
            for(b=a;b<=i;b++)
            {
                if(a%2==1)
                {
                    printf("%d ",b*b);
                }
                else
                {
                    printf("%d ",b);
                }
            }
            a++;
        printf("\n");
    }
    while(a<=i);

    return 0;
}
