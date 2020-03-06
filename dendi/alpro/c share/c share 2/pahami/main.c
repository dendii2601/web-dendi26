#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    int x,y,temp;


    int array[]={1,5,7,3,2};
    int batas=sizeof(array)/sizeof(int);
    x=0;
    while(x<batas-1)
    {
        y=0;

        while(y<batas-x-1)
        {
            if (array[y]>array[y+1])
            {
                temp=array[y];
                array[y]=array[y+1];
                array[y+1]=temp;
            }
            y++;
        }
        x++;
    }
    x=0;
    while(x<batas)
    {
        printf("%d ", array[x]);
        x++;
    }

    return 0;
}
