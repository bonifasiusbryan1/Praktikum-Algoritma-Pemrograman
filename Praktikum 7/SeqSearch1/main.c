// Nama File   : SeqSearch1.c
/* Deskripsi   : Mencari harga X dalam tabel T [1..N] secara sekuensial mulai dari T1.
                 Hasilnya adalah indeks IX di mana T[IX] = X (i terkecil)
                 IX = -1 jika tidak ketemu.
                 Pada versi ini, array sudah disediakan dan input hanya berupa elemen yang dicari*/
// Nama        : Bonifasius Bryan Suryaningtyas
// NIM         : 24060121130066*/

#include "SeqSearch1.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus Lokal
    int T[] = {20, 21, 76, -18, 0, 90, -3, -35, 4, -69}; // deklarasi array
    int N = sizeof(T) / sizeof(T[0]); // panjang array
    int IX; // pointer elemen pada array
    int X; // elemen yang dicari

    // Algoritma
    printf("=================================================================================\n");
    printf("================== Program Searching secara Sekuensial Versi 1 ==================\n");
    printf("=================================================================================\n");
    printf("Array = [20, 21, 76, -18, 0, 90, -3, -35, 4, -69]");
    printf("\nMasukkan angka yang ingin Anda ketahui indeksnya : ");
    scanf("%d", &X);
    printf("=================================================================================\n");
    SeqSearch1(T, N, &IX, X);
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
