#include <stdio.h>

int main()
{
    int ar[4]={1,7,5,2};
    int a,b;
    int temp,minimal;

    for(a=0;a<4;a++)
    {
        printf("%d ",ar[a]);
    }

    printf("\n");

    for(a=0;a<4;a++)
    {
        minimal=a;
        for(b=a;b<4;b++)
        {
            if(ar[b]<ar[minimal])
            {
                minimal=b;
            }
        }
        temp=ar[minimal];
        ar[minimal]=ar[a];
        ar[a]=temp;

        for(b=0;b<4;b++)
        {
            printf("%d ",ar[b]);
        }
        printf("\n");

    }

//    for(a=0;a<4;a++)
//    {
//       if(ar[a]%3==0 && ar[a]%5==0)
//       {
//           printf("%d ",ar[a]);
//       }
//    }

    return 0;
}
