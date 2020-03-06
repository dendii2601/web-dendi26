#include <stdio.h>
#include <stdlib.h>
int a,b,c,n;
int main()
{
    printf(" --- SQUARE A ---\n");
    printf(" Masukkan nilai :");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
            {
                if(b==2 || b==4)
                {
                    c=1;
                    printf("%d",c);
                }
                else
                {
                    c=0;
                    printf("%d",c);
                }
            }

        puts("");
    }


    return 0;
}
