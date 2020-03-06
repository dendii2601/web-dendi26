#include "header.h"


int at_least(char huruf, int jumlah, char teks[])
{
    int i;
    int tes=0;
    for(i=0;i<strlen(teks);i++)
    {
        if(huruf==tolower(teks[i]))
        {
            tes++;
        }
    }
    if(tes==jumlah)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
