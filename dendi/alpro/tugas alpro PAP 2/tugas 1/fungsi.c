#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>


int is_kabisat (int year)
{
    if ( year %4 == 0 )
    {
        printf( "( tahun kabisat ) - - -> true \n" );
    }
    else
    {
        printf( "( bukan tahun kabisat ) - - -> false \n");
    }
}
