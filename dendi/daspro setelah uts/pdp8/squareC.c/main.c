#include <stdio.h>
#include <stdlib.h>
int a,b,c,n;
int main()
{
    printf(" --- SQUARE C ---\n");
    printf("Masukkan batas :");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {

        for(b=1;b<=n;b++)
            {
                if(b==3 || a==3)
                {
                    c=0;
                    printf("%d",c);
                }
                else
                {
                    c=1;
                    printf("%d",c);
                }

            }

        puts("");
    }


    return 0;
}
