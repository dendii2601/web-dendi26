#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;
    int data[] = {12, 14, 20, 15, 22, 25, 18, 10, 27};

    printf(" sequentSearch(%d, data, 9) --> %s\n", 15, sequentSearch(15,data,9)?"True" : "False");
    printf(" sequentSearch(%d, data, 9) --> %s\n", 25, sequentSearch(25,data,9)?"True" : "False");
    printf(" sequentSearch(%d, data, 9) --> %s\n", 39, sequentSearch(39,data,9)?"True" : "False");
    printf(" sequentSearch(%d, data, 9) --> %s\n", 17, sequentSearch(17,data,9)?"True" : "False");

    return 0;
}
