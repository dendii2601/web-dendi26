#include "header.h"

     int sequentialSearch(int data[], int jml_data, int cari)
     {
         int i;
         for(i=0;i<jml_data;i++)
         {
             if(cari==data[i])
             {
                 return i;
             }
         }
         return -1; ///INDEKS -1 BERARTI TIDAK KETEMU
     }
