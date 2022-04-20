#include "BinSearch1.h"
#include <stdio.h>
#include <stdlib.h>

void BinSearch1(int T[], int N, int *IX, int X) {
// Kamus
    int upper; // indeks atas
    int lower; // indeks bawah
    int mid; // indeks tengah

// Algoritma
    upper = N-1;
    lower = 0;
    mid = (upper + lower) / 2;

    while (X != T[mid] && lower < upper) {
        if (X > T[mid]) {
            lower = mid + 1;
        }
        else {
            upper = mid - 1;
        }
        mid = (upper + lower) / 2;
    }
    if (X == T[mid]) {
        *IX = mid;
    }
    else {
        *IX = -1;
    }
}
