// Nama File   : SelectionSort.c
// Deskripsi   : Mengurutkan tabel integer [1..N] dengan selection sort.
// Nama        : Bonifasius Bryan Suryaningtyas
// NIM         : 24060121130066

#include <stdio.h>

// Prosedur
void SelectionSort (int T[], int N) {
// Kamus
    int i; // counter 1
    int j; // counter 2
    int temp; // memorisasi elemen dalam pergeseran
    int min;

// Algoritma
    for(i = 0; i < N-1; i++) {
        min = i;
        for(j = i+1; j < N; j++) {
            if(T[j] < T[min]) {
                min = j;
            }
        }
        temp = T[min];
        T[min] = T[i];
        T[i] = temp;
    }
}

// Program Utama
int main() {
    // Kamus Lokal
    int i; // counter
    int N; // panjang array

    // Algoritma
    printf("=================================================================================\n");
    printf("===================== Program Sorting dengan Selection Sort =====================\n");
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
    SelectionSort(T, N);
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
