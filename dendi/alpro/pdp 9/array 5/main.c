#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kata[25];
    int i;

    printf("\t\t == membalik kata ==\n\n");
    printf("membalik kata \t : ");
    scanf("%s", &kata);
    printf("\n hasil balik kata \t : ");
    for(i=strlen(kata)-1;i>=0;i--){
        printf("%c", kata[i]);
        }
    printf("\n\n");
    return 0;
}
