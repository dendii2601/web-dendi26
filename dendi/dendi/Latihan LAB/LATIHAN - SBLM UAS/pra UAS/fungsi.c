#include "header.h"

//void inputData(siswa *siswaLari,int jumlah){
//    int x;
//    for(x=0; x<jumlah; x++){
//        fflush(stdin);
//        printf("--- Siswa %d ---\n",x+1);
//        printf("Nama siswa  :"); gets((siswaLari+x)->nama_siswa);
//        printf("Lap 1 :"); scanf("%f",&(siswaLari+x)->tempuh1);
//        printf("Lap 2 :"); scanf("%f",&(siswaLari+x)->tempuh2);
//        printf("Lap 3 :"); scanf("%f",&(siswaLari+x)->tempuh3);
//        puts("");
//    }
//}

void inputData(siswa *siswaLari, int jumlah, int awal)
{
    if(awal == jumlah){

    }else{
        fflush(stdin);
        printf("--- Siswa %d ---\n",awal+1);
        printf("Nama siswa  :"); gets((siswaLari+awal)->nama_siswa);
        printf("Lap 1 : "); scanf("%f",&(siswaLari+awal)->tempuh1);
        printf("Lap 2 : "); scanf("%f",&(siswaLari+awal)->tempuh2);
        printf("Lap 3 : "); scanf("%f",&(siswaLari+awal)->tempuh3);
        puts("");
        inputData(siswaLari,jumlah, awal+1);
    }
}

void convertWaktu(siswa *siswaLari,int index){
    int totalWaktu,sisaJam,sisaMenit;

    totalWaktu = (siswaLari + index)->tempuh1
                 + (siswaLari + index)->tempuh2
                 + (siswaLari + index)->tempuh3;
    (siswaLari+index)->waktuTotal.jam = totalWaktu/3600;

    sisaJam = totalWaktu % 3600;
    (siswaLari+index)->waktuTotal.menit = sisaJam / 60;

    sisaMenit = totalWaktu % 60;
    (siswaLari+index)->waktuTotal.detik = sisaMenit;
}

void cetakData(siswa *siswaLari,int jumlah){
    int x;
    printf("\n");
    for(x=0; x<jumlah; x++){
        fflush(stdin);
        printf("--- Siswa %d ---\n",x+1);
        printf("Nama siswa  : %s\n",Nama(siswaLari, x));
        convertWaktu(siswaLari,x);
        printf("Hasil : %d jam, %d menit, %d detik\n",Jam(siswaLari,x), Menit(siswaLari,x), Detik(siswaLari,x));
    }
}
