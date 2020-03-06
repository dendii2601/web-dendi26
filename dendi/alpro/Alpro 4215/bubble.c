#include <stdio.h>

int main()
{
    char ar[10];
    int x,y;
    char temp;

    for(x=0; x<4;x++)
    {
        printf("Nominal\t: ");scanf("%c", &ar[x]);fflush(stdin);

    }
    for(x=0;x<4;x++)
    {
        printf("%c ",ar[x]);
    }
    printf("\n");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            if(ar[y]>ar[y+1])
            {
                temp=ar[y];
                ar[y]=ar[y+1];
                ar[y+1]=temp;
            }

            printf("%c ",ar[y]);
        }printf("\n");
    }
    printf("\n");
    for(x=0;x<4;x++)
    {

            printf("%c ",ar[x]);


    }

    return 0;
}
