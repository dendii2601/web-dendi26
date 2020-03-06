#include "header.h"


void print_diamond(int row) {

    int a, b;

    for (a = 1; a <= row; a++) {
        for (b = row; b >= a; b--) {
            printf (" ");
        }
        for (b = 1; b <= a; b++) {
            printf ("*");
        }
        for (b = (a-1); b >= 1; b--) {
            printf ("*");
        }
        printf ("\n");
    }

    for (a = 1; a <= row-1; a++) {
        for (b = 0; b <= a; b++) {
            printf (" ");
        }
        for (b = 1; b <= (row-a); b++) {
            printf ("*");
        }
        for (b = (row-a-1); b >= 1; b--) {
            printf ("*");
        }
        printf ("\n");
    }
}
