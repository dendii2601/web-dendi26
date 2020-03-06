#include <stdio.h>
#include <stdlib.h>

int squenSearch(int arr[],int cari,int size)
{
    int i;
    for (i=0;i<size;i++)
    {
        if(arr[i]==cari)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{


    int arr[]={9,8,7,6,5,4,3,2,1};
    //auto cari ukuran
    int ukuran=sizeof(arr)/sizeof(int);
    printf("ukuran \n");
    scanf("%d",& ukuran);
    if (squenSearch(arr,3,ukuran))
    {
        printf("ketemu\n");
    }
    else
    {
        printf("tidak ketemu\n");
    }

    return 0;
}
