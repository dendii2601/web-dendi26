#include "header.h"

int searchWord(char word[],char text[])
{
    int i,n,sama,j,n1;
    n=0;
    while(word[n]!='\0')
    {
        n++;
    }
    i=0;while(text[i]!='\0')
    {
        n1=i;sama=1;
        for(j=0;j<n;j++)
        {
            if(word[j]==text[n1] || word[j]==text[n1]-32 || word[j]==text[n1]+32)
            {
                sama=1;
            }else
            {
                sama=0;break;
            }n1++;
        }
        if(sama==1)
        {
            break;
        }
        i++;
    }
    return sama;
}
