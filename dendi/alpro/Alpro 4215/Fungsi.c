#include <stdio.h>
#include <stdlib.h>
void total();

int main()
{



    //printf("Input Bil 3 = ");scanf("%d",&bil3);

    //total1 = total(bil1,bil2,bil3);

    total();


    //printf("Total adalah %d",total1);

    return 0;
}

void total()
{
    int bil1, bil2, bil3, total1;

    printf("Input Bil 1 = ");scanf("%d",&bil1);
    printf("Input Bil 2 = ");scanf("%d",&bil2);

    bil3=bil1;
    bil1=bil2;
    bil2=bil3;

    printf("Output Bil 1 = %d\n",bil1);
    printf("Output Bil 2 = %d\n",bil2);
}
