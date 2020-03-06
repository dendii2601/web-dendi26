#include "header.h"

///Nama     :Moch. Dandy YudhaPerwira
///Nim      :A11.2018.11470
///Kelas    :A11.4215

int main()
{
    int angka1= 12;
    int angka2= 23;
    int *pointerAngka=NULL;
    pointerAngka=&angka1;

    printf("angka1 = %d\n", angka1);
    printf("Alamat angka1 = %p\n", &angka1);
    puts(" ");

    printf("angka1 = %d\n", *pointerAngka);
    printf("Alamat angka1 = %p\n", &pointerAngka);

    puts("\n");
    printf("Sebelum ditukar\n");
    printf("angka1=%d, angka2=%d\n", angka1, angka2);
    tukarNilai(&angka1,&angka2);
    printf("Sesudah ditukar\n");
    printf("angka1=%d, angka2=%d\n", angka1, angka2);
    puts("");

    int num1=5;
    int num2=9;
    int target;
    changeValue(&target,num1,num2);
    printf("ChangeValue -> target == %d\n", target);
    return 0;
}
