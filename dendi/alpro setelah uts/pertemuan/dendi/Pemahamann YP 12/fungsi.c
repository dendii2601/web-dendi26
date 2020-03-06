#include "header.h"

///Nama     :Moch. Dandy YudhaPerwira
///Nim      :A11.2018.11470
///Kelas    :A11.4215

void tukarNilai(int *angka1, int *angka2)
{
    int temp;
    temp=*angka1;
    *angka1=*angka2;
    *angka2=temp;

}
void changeValue(int *target, int num1, int num2)
{
    *target=num1+num2;
}
