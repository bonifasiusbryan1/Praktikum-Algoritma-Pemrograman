#include "SeqSearch2.h"
#include <stdio.h>
#include <stdlib.h>

void SeqSearch2(int T[], int N, int *IX, int X) {
// Kamus
    int i; // indeks untuk pencarian

// Algoritma
    i = 0; // inisialisasi
    while(i < N && T[i] != X) {
        i++;
    }
    if (T[i] == X) {
        *IX = i;
    }
    else {
        *IX = -1;
    }
}
