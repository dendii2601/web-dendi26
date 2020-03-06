#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, k, siswa, pilihan;
    printf("\t\t=== NILAI UJIAN NASIONAL === \n\n");
    printf("Masukkan jumlah siswa : ");
    scanf("%d", &siswa);
    fflush(stdin);
    printf("\n");
    float nilai_UN[siswa][4];
    char nama[25][25];
        for(i=0; i<siswa; i++)
        {
            printf("Siswa ke %d\n", i+1);
            fflush(stdin);
            printf("Masukkan Nama lengkap siswa\t : ");
            gets(nama[i]);
            for(j=0; j<4; j++)
            {
                if(j==0){
                    printf("Masukkan nilai bahasa indonesia  : ");
                    scanf("%f", &nilai_UN[i][j]);
                    if((nilai_UN[i][j]<0.0) || (nilai_UN[i][j]>100.0)){
                        printf("Masukkan nilai bahasa indonesia lagi : ");
                        scanf("%f", &nilai_UN[i][j]);
                    }
                }
                else if(j==1){
                    printf("Masukkan nilai bahasa inggris    : ");
                    scanf("%f", &nilai_UN[i][j]);
                    if((nilai_UN[i][j]<0.0) || (nilai_UN[i][j]>100.0)){
                        printf("Masukkan nilai bahasa inggris lagi : ");
                        scanf("%f", &nilai_UN[i][j]);
                    }
                }
                else if(j==2){
                    printf("Masukkan nilai matematika\t : ");
                    scanf("%f", &nilai_UN[i][j]);
                    if((nilai_UN[i][j]<0.0) || (nilai_UN[i][j]>100.0)){
                        printf("Masukkan nilai matematika lagi : ");
                        scanf("%f", &nilai_UN[i][j]);
                    }
                }
                else if(j==3)
                {
                    printf("Pilihan jurusan : \n1. Fisika \n2. Biologi \n3. Kimia\n");
                    printf("Pilih : ");
                    scanf("%d", &pilihan);

                    if(pilihan==1)
                    {
                        printf("Masukkan nilai fisika\t : ");
                        scanf("%f", &nilai_UN[j][pilihan]);
                        if((nilai_UN[j][pilihan]<0.0) || (nilai_UN[j][pilihan]>100.0))
                        {
                            printf("Masukkan nilai fisika lagi : ");
                            scanf("%f", &nilai_UN[j][pilihan]);
                        }

                    }
                    else if(pilihan==2)
                    {
                        printf("Masukkan nilai Biologi\t : ");
                        scanf("%f", &nilai_UN[j][pilihan]);
                        if((nilai_UN[j][pilihan]<0.0) || (nilai_UN[j][pilihan]>100.0))
                        {
                            printf("Masukkan nilai Biologi lagi : ");
                            scanf("%f", &nilai_UN[j][pilihan]);
                        }

                    }
                    else if(pilihan==3)
                    {
                        printf("Masukkan nilai Kimia\t : ");
                        scanf("%f", &nilai_UN[j][pilihan]);
                        if((nilai_UN[j][pilihan]<0.0) || (nilai_UN[j][pilihan]>100.0))
                        {
                            printf("Masukkan nilai Kimia lagi : ");
                            scanf("%f", &nilai_UN[j][pilihan]);
                        }

                    }
                    fflush(stdin);
                }
            }
        }

    printf(" No \t nama siswa \t bahasa indonesia\t bahasa inggris\t  matematika\t jurusan yang di pilih\t \n");
    for(i=0; i<siswa; i++)
    {
        printf(" %d\t %s\t\t\t", i+1, nama[i]);
        for(j=0; j<4; j++){
            if(j==0)
            {
                printf(" %2.f\t\t ", nilai_UN[i][j]);
            }
            else if(j==1)
            {
                printf(" %2.f\t\t ", nilai_UN[i][j]);
            }
            else if(j==2)
            {
                printf(" %2.f\t\t ", nilai_UN[i][j]);
            }
            else if(j==3)
            {
                if(pilihan==1)
                {
                    printf("%2.f", nilai_UN[j][pilihan]);
                }
                else if(pilihan==2)
                {
                    printf("%2.f", nilai_UN[j][pilihan]);
                }
                else if(pilihan==3)
                {
                    printf("%2.f", nilai_UN[j][pilihan]);
                }
            }
        }
        printf("\n");
    }



    return 0;

}
