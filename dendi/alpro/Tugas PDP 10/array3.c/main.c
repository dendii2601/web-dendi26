#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i[5][5]={{2,4,7,7,1}, {8, 9, 1,8,2}, {5, 3, 6,3, 1}, {7, 8, 1, 0, 5}, {2, 1, 3, 4, 9}};
    int x, y, sum=0;

    printf("---Matriks---\n");
    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            printf(" %d", i[x][y]);
            if(x==y)
            {
                sum+=i[x][y];
            }
        }
        puts("");
    }

    printf("\n%d\n", sum);
    return 0;
}
