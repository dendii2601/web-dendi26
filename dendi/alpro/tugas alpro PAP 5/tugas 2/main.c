#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list1[] = {1, 2, 3, 4, 5};
    int list2[] = {2, 4, 3, 5, 1};
    int list3[] = {6, 7, 8, 9, 10};
    int list4[] = {10, 9, 8, 7, 6};

     printf("is_inverse(list1, list2, 5) --> %s\n",is_inverse(list1,list2,5)?"True" : "False");
     printf("is_inverse(list3, list4, 5) --> %s\n",is_inverse(list3,list4,5)?"True" : "False");
     printf("is_inverse(list1, list3, 5) --> %s\n",is_inverse(list1,list3,5)?"True" : "False");
     printf("is_inverse(list2, list2, 5) --> %s\n",is_inverse(list2,list2,5)?"True" : "False");

    return 0;
}
