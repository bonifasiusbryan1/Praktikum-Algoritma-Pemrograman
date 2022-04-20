// Nama File   : BinSearch2.c
/* Deskripsi   : Mencari harga X dalam tabel T [1..N] secara dikotomik.
                 Hasilnya adalah indeks IX di mana T[IX] = X (i terkecil)
                 IX = -1 jika tidak ketemu.
                 Nilai elemen dalam tabel terurut membesar: T[1] <= T[2] <= T[3] <= ... <= T[N]
                 Pada versi ini, input berupa list utuh dan elemen yang dicari*/
// Nama        : Bonifasius Bryan Suryaningtyas
// NIM         : 24060121130066*/

#include "BinSearch2.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus Lokal
    int N; // panjang array
    int IX; // pointer elemen pada array
    int X; // elemen yang dicari
    int i; // counter

    // Algoritma
    printf("=================================================================================\n");
    printf("==================== Program Searching secara Binary Versi 2 ====================\n");
    printf("=================================================================================\n");
    printf("Masukkan panjang array yang ingin Anda buat: ");
    scanf("%d", &N);
    int T[N]; // deklarasi array
    if (N <= 0) {
        printf("Panjang array harus positif");
    }
    else {
        printf("Perhatian! Angka yang dimasukkan harus terurut membesar\n");
        for(i=0;i<N;i++) {
            printf("Masukkan angka ke-%d dalam array : ", i+1);
            scanf("%d", &T[i]);
        }
    printf("=================================================================================\n");
    printf("maka, array Anda akan menjadi sebagai berikut : ");
        for(i=0;i<N;i++) {
            printf("%d ", T[i]);
        }
    printf("\n=================================================================================\n");
    printf("Masukkan angka yang ingin Anda ketahui indeksnya : ");
    scanf("%d", &X);
    printf("=================================================================================\n");
    BinSearch2(T, N, &IX, X);
        if (IX == -1) {
            printf("Angka %d tidak terdapat pada array di atas", X);
        }
        else {
            printf("Angka %d terdapat pada index ke-%d array di atas", X, IX);
            printf("\natau berada pada urutan data ke-%d", IX+1);
        }
    printf("\n=================================================================================\n");
    }
    return 0;
}
