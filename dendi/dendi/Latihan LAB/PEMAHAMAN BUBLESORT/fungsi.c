#include "header.h"


    void bubble_sort1(int data[], int jml_data)
    {
        int i,j,temp;
        printf("\nSebelum Di Sorting\n");
        for(j=0;j<jml_data;j++)
        {
            printf("|%d| ", data[j]);
        }
        printf("\nSesudah Di Sorting\n");
        for(i=0;i<jml_data-1;i++)
        {
            for(j=0;j<jml_data-1-i;j++)
            {
                if(data[j]>data[j+1])
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
            }
        }
        for(j=0;j<jml_data;j++)
        {
            printf("|%d| ", data[j]);
        }
    }
