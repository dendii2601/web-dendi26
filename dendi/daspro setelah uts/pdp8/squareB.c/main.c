#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i,a,b;
    printf(" --- SQUARE B ---\n");
    printf("Masukkan batas:");
    scanf("%d",&i);
    a=1;
    while(a<=i)
    {
        for(b=1;b<=i;b++)
        {
            if(a%2==1)
            {
                if(b%2==1)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            else
            {
                if(b%2==1)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
        }
        printf("\n");
        a++;
    }
    return 0;
}

