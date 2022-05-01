// Nama File   : InsertionSort.c
// Deskripsi   : Mengurutkan tabel integer [1..N] dengan insertion sort.
// Nama        : Bonifasius Bryan Suryaningtyas
// NIM         : 24060121130066

#include <stdio.h>

// Prosedur
void InsertionSort (int T[], int N) {
// Kamus
    int i; // counter 1
    int j; // counter 2
    int temp; // memorisasi elemen dalam pergeseran

// Algoritma
    for(i = 1; i < N; i++) {
        temp = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > temp) {
            T[j+1] = T[j];
            j = j - 1;
        }
        T[j+1] = temp;
    }
}

// Program Utama
int main() {
    // Kamus Lokal
    int i; // counter
    int N; // panjang array

    // Algoritma
    printf("=================================================================================\n");
    printf("===================== Program Sorting dengan Insertion Sort =====================\n");
    printf("=================================================================================\n");
    printf("Berapa panjang array yang ingin Anda buat?  ");
    scanf("%d", &N);
    int T[N]; // deklarasi array
    if (N <= 0) {
        printf("Panjang array harus positif");
    }
    else {
        for(i = 0; i < N; i++) {
            printf("Masukkan angka ke-%d dalam array : ", i+1);
            scanf("%d", &T[i]);
        }
    printf("=================================================================================\n");
    printf("maka, array Anda akan menjadi sebagai berikut : ");
    printf("[ ");
        for(i = 0; i < N; i++) {
            printf("%d ", T[i]);
        }
    printf("]");
    InsertionSort(T, N);
    printf("\ndan jika diurutkan membesar akan menjadi : ");
    printf("[ ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
        }
    printf("]");
    }
    printf("\n=================================================================================\n");
    return 0;
}
