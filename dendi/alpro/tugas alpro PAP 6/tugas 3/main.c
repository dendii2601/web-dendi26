#include <stdio.h>
#include <stdlib.h>

int main()
{
     char a[100], b[100];

    printf("masukkan anagram :");
    gets(a);

    printf("masukkan anagram :");
    gets(b);

    if (check_anagram(a, b) == 1)
        printf("anagrams.\n");
    else
        printf("bukan anagrams.\n");

    return 0;
}
