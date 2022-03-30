/*Nama File   : selisihTinggi.c*/
/*Deskripsi   : Menampilkan selisih ketinggian terbesar antara puncak bukit dengan lembah bukit pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int N; /*panjang array*/
    int i; /*counter*/
    int selisih; /*perbedaan ketinggian bukit tertinggi dan terendah, meter*/
    int max; /*tinggi bukit tertinggi pada array, meter*/
    int min; /*tinggi bukit terendah pada array, meter*/

/*Algoritma*/
    printf("=================== Program selisihTinggi ===================\n");
    printf("=============================================================\n");
    printf("Masukkan panjang array : ");
    scanf("%d", &N);
    int T[N]; /*deklarasi array integer*/
    if (N <= 1) {
        printf("Panjang Array Harus Lebih dari Satu");
    }
    else {
        for(i=0;i<=N-1;i++) {
            printf("Masukkan ketinggian bukit dalam meter : ");
            scanf("%d", &T[i]);
        }
        max = T[0];
        min = T[0];
        for(i=1;i<=N-1;i++) {
            if (T[i] > max) {
                max = T[i];
            }
            else if (T[i] < min) {
                min = T[i];
            }
        }
        selisih = max - min;
        printf("=============================================================");
        printf("\nTinggi bukit tertinggi adalah %d meter", max);
        printf("\ndan tinggi bukit terendahnya adalah %d meter", min);
        printf("\nmaka, selisih ketinggian bukit terbesar adalah %d meter", selisih);
    }
    return 0;
}
