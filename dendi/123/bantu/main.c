#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;

    printf("Masukan nilai a : ",a);
    scanf("%d",&a);
    printf("Masukan nilai b : ",b);
    scanf("%d",&b);
    printf("Masukan nilai c : ",c);
    scanf("%d",&c);
    printf("Masukan nilai d : ",d);
    scanf("%d",&d);
    printf("Masukan nilai e : ",e);
    scanf("%d",&e);

    printf("\n");




    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                    printf("A adalah yang terbesar",a);
                    printf("\n");


                }
            }
        }
        else
    {
          printf("E adalah yang terbesar",e);
          printf("\n");

    }
    printf("\n");
    exit(0);




    }

    if (b>c)
    {
            if (b>d)
            {
                if (b>e)
                {
                    printf("B adalah yang terbesar",b);
                    printf("\n");


                }
            }
    else
    {
          printf("E adalah yang terbesar",e);
          printf("\n");

    }
    printf("\n");
    exit(0);


    }

    if (c>d)
    {
        if (c>e)
        {
            printf("C adalah yang terbesar",c);
            printf("\n");


        }

    else
    {
          printf("E adalah yang terbesar",e);
          printf("\n");


    }
        printf("\n");
        exit(0);
    }

    if (d>e)
    {
        printf("D adalah yang terbesar",d);
        printf("\n");
        exit(0);

    }
    else
        {
            printf("E adalah yang terbesar",e);
            printf("\n");

        }

    exit(0);

    return 0;
}
