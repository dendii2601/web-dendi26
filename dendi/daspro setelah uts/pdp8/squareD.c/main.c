#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n;
    printf(" --- SQUARE D ---\n");
    printf(" Masukkan batas :");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {

        for(b=1;b<=n;b++)
            {
                if(b==1 || b==n)
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
