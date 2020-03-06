#include "header.h"

int main()
{
   int angka1=12;
   int angka2=23;
   int *pointerAngka=NULL;

   pointerAngka = &angka1;
   printf("Angka1 = %d\n", angka1);
   printf("Alamat Angka1 = %p\n", &angka1);

   printf("Angka1 = %d\n", *pointerAngka);
   printf("Alamat Angka1 = %p\n", &pointerAngka);

   puts("\n");
   printf("Sebelum ditukar\n");
   printf("Angka1 = %d, Angka2 = %d\n", angka1, angka2);

   TukarNilai(&angka1,&angka2);
   printf("Susudah ditukar\n");
   printf("Angka1 = %d, Angka2 = %d\n", angka1, angka2);


   int num1 = 5;
   int num2 = 9;
   int target;
   changeValue(&target,num1,num2);
   printf("changeValue -> target == %d\n", target);
   return 0;
}
