#include "header.h"

int main()
{
    int arr[]={5,4,7,3,6};
    int i;
    for(i=0;i<5;i++)
    {
        printf(" %d ", arr[i]);
    }
    puts("");
    bublesort(arr,5);
    printf("SESUDAH SORTING\n");
    for(i=0;i<5;i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
