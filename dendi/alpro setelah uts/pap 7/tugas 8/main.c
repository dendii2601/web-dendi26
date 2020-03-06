#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data1[] = {2, 5, 7, 9, 12, 16, NULL};
    printf("sum_tranversal(data1,0) =%d\n",sum_tranversal(data1,0));
    int data2[] = {3, 5, 6, 8, 1, 8, NULL};
    printf("sum_tranversal(data2,0) =%d\n",sum_tranversal(data2,0));
    int data3[] = {5, 82, 33, 55, 22, NULL};
    printf("sum_tranversal(data3,0) =%d\n",sum_tranversal(data3,0));
    int data4[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, NULL};
    printf("sum_tranversal(data4,0) =%d\n",sum_tranversal(data4,0));
    return 0;
}
