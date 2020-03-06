#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jawab, i, lagi, Benar;
for(i = 1; i < 11; i++)
                                            // batas perulagan cuma sampai 10 soal
    {
        printf(" %d + %d = ?", i , i);
        scanf("%d", &jawab);                        // input jawaba soal 1
            if(jawab == i + i)
            printf("Benar!\n");                         // jika jawaban benar
                else {
                    printf("Salah.\n");                         // jika jawban salah, program akan di beritahu jawaban nya
                    printf("Coba Lagi.\n");                     //  user di suruh mencoba lagi
                    Benar = 0;
                    /* nested for */
                    for(lagi = 0; lagi < 3 && !Benar; lagi++) { //  program akan menyuruh user untuk mencoba lagi sebanyak 3 kali

                        printf(" %d + %d = ? ", i, i);
                        scanf("%d", &jawab);
                            if(jawab == i + i) {
                            printf("Benar!\n");
                            Benar = 1;

}
                            else if(!Benar) // meggunakan else if
                            printf("Jawabnya adalah %d.\n", i + i);
}

}
}
    return 0;
}
