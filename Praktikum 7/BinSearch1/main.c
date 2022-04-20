// Nama File   : BinSearch1.c
/* Deskripsi   : Mencari harga X dalam tabel T [1..N] secara dikotomik.
                 Hasilnya adalah indeks IX di mana T[IX] = X (i terkecil)
                 IX = -1 jika tidak ketemu.
                 Nilai elemen dalam tabel terurut membesar: T[1] <= T[2] <= T[3] <= ... <= T[N]
                 Pada versi ini, array sudah disediakan dan input hanya berupa elemen yang dicari*/
// Nama        : Bonifasius Bryan Suryaningtyas
// NIM         : 24060121130066*/

#include "BinSearch1.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus Lokal
    int T[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; // deklarasi array
    int N = sizeof(T) / sizeof(T[0]); // panjang array
    int IX; // pointer elemen pada array
    int X; // elemen yang dicari

    // Algoritma
    printf("=================================================================================\n");
    printf("==================== Program Searching secara Binary Versi 1 ====================\n");
    printf("=================================================================================\n");
    printf("Array = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]");
    printf("\nMasukkan angka yang ingin Anda ketahui indeksnya : ");
    scanf("%d", &X);
    printf("=================================================================================\n");
    BinSearch1(T, N, &IX, X);
    if (IX == -1) {
        printf("Angka %d tidak terdapat pada array di atas", X);
    }
    else {
        printf("Angka %d terdapat pada index ke-%d array di atas", X, IX);
        printf("\natau berada pada urutan data ke-%d", IX+1);
    }
    printf("\n=================================================================================\n");
    return 0;
}
