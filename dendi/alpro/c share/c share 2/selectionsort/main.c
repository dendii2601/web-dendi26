#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,min,temp;
    int arr[]= {1,5,2,7,3};
    int batas=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<batas; i++)
    {
        min=i;
        for (j=i; j<batas; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }

            for(k=0;k<batas;k++){
                printf("%d ", arr[k]);
            }
                printf("\n");

            }
            printf("\n");
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
    }
        for (i=0; i<batas; i++)
        {
            printf("%d ", arr[i]);
        }

    return 0;
}
