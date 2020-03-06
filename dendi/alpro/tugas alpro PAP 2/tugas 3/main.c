#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Masukan angka : ");
    scanf("%d",&num);
    printf(" //---> %d  : %s\n",num,cek_prima(num)?"True( bilangan prima )":"False( bukan bilangan prima )");

    return 0;
}
