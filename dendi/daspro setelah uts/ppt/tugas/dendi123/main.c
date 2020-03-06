#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mhs, pil;
    char ljt;
printf("Masukkan banyak mahasiswa = ");
scanf("%d",& mhs);
float nilai_teori_prak[mhs][4];
char nim[mhs][25];
float tamNil;
float nilaiMax, nilaiMin, nilaiSum, nilaiRata;
for (i=0; i<mhs; i++ ){
      printf("Mahasiswa ke %d\n",i+1 );
      printf("Masukkan NIM (tanpa spasi) = ");
      scanf("%s",&nim[i]);
      for (j=0; j<4; j++){
            if (j== 0) {
                 j=0;
                        printf("Masukkan nilai teori uts = ");
                        scanf("%f",&nilai_teori_prak[i][j]);
                                if(nilai_teori_prak[i][j]<0.0 || nilai_teori_prak[i][j]>100.0){
                              printf("Masukkan nilai teori uts lagi= ");
                              scanf("%f",&nilai_teori_prak[i][j]);
                                }
                  j=1;
                        printf("Masukkan nilai praktik uts = ");
                        scanf("%f",&nilai_teori_prak[i][j]);
                        if(nilai_teori_prak[i][j]<0.0 || nilai_teori_prak[i][j]>100.0){
                              printf("Masukkan nilai praktik uts lagi = ");
                              scanf("%f",&nilai_teori_prak[i][j]);
            }
                  j=2;
                        printf("Masukkan nilai teori uas = ");
                        scanf("%f",&nilai_teori_prak[i][j]);
                        if(nilai_teori_prak[i][j]<0.0 || nilai_teori_prak[i][j]>100.0){
                              printf("Masukkan nilai teori uas lagi= ");
                              scanf("%f",&nilai_teori_prak[i][j]);
                        }
                  j=3;
                        printf("Masukkan nilai praktik uas = ");
                        scanf("%f",&nilai_teori_prak[i][j]);
                        if(nilai_teori_prak[i][j]<0.0 || nilai_teori_prak[i][j]>100.0){
                              printf("Masukkan nilai praktik uas lagi= ");
                              scanf("%f",&nilai_teori_prak[i][j]);
            }

      printf("\n");

      }
      }
}


//printf("| No \t| Mhs\t| T-UTS\t| P-UTS\t\t| T-UAS\t\t| P-UAS\t\t|\n");
//for (i=0; i<mhs; i++){
//      printf(“| “+ i+1 +”\t| “+ nim[i] +”\t|);
//      for j=0 to 4 do
//            output(nilai_teori_prak[i][j] +“\t| ");
//            j++
//            output(“\n”)
//
//
//repeat
//      output(“\nPilihan:\n1. Tambah nilai\n2. Analisa Data\nMasukkan pilihan: “)
//      input(pil)
//      depend on pil
//            pil=1:
//                  output(“\n-- Tambah nilai --\nBerapa nilai yang akan ditambah: “)
//                  input(tamNil)
//                  for i=0 to mhs do
//                        for j=0 to 4 do
//                              nilai_teori_prak[i][j]  nilai_teori_prak[i][j]+tamNil;
//                              j++;
//                        i++
//                  output("| No \t| Mhs\t| T-UTS\t| P-UTS\t\t| T-UAS\t\t| P-UAS\t\t|\n");
//                  for i=0 to mhs do
//                        output(“| “+ i+1 +”\t| “+ nim[i] +”\t|)
//                        for j=0 to 4 do
//                              output(nilai_teori_prak[i][j] +“\t| ");
//                              j++
//                        output(“\n”)
//                        i++
//            pil=2:
//                  output(“\n—Analisa Data -- \n“)
//                  nilaiMax  0
//                  nilaiMin  100
//                  nilaiSum  0
//                  for i=0 to mhs do
//                        for j=0 to 4 do
//                              if(nilai_teori_prak[i][j]>nilaiMax) then


    return 0;
}
