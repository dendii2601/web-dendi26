#include <stdio.h>
#include <stdlib.h>

int carikatapadakalimat(char kata[], char kalimat[])
{
    int i, j ,tanda=0;
    int ukkata=0;
    int ukurankalimat=0;
    while (kata[ukkata]!='\0')
    {
        ukkata++;
    }
    while(kalimat[ukurankalimat]!='\0')
    {
        ukurankalimat++;
    }
    for(i=0;i<ukurankalimat;i++)
    {
        for (j=0;j<ukkata;j++)
        {
            if(kata[j]==kalimat[i+j])
            {
                tanda++;
            }
            else if (tanda==ukkata)
            {
                return 1;
            }
            else
            {
                tanda=0;
            }
        }
    }
    return 0;

}



int main()
{
    printf("%d\n",carikatapadakalimat("dinusss","udinus kampus saya"));
    return 0;
}
