#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l[5][5]={{2,4,7,7,1},{8,9,1,8,2},{5,3,6,3,1},{7,8,1,0,5},{2,1,3,4,9}};
    int d,e,n;

        for(d=0;d<5;d++){
            for(e=0;e<5;e++){
                printf(" %d ",l[d][e]);
            }
printf("\n");
        }

 n = l[0][0]+l[1][1]+l[2][2]+l[3][3]+l[4][4];
    printf("\n Hasil = %d", n);

    return 0;
}
