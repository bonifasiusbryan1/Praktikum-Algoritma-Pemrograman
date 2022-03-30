/*Nama File   : jumlahSubArray.c*/
/*Deskripsi   : Menampilkan besarnya penjumlahan sub array pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int N; /*banyak elemen*/
    int i; /*counter 1*/
    int j; /*counter 2*/
    int Sum; /*jumlah SubArray*/

/*Algoritma*/
    printf("================== Program jumlahSubArray ===================\n");
    printf("=============================================================\n");
    printf("Masukkan banyak elemen dalam array : ");
    scanf("%d", &N);
    int T[N]; /*deklarasi array integer*/
    if (N <= 0) {
        printf("Banyak Elemen dalam Array Harus Positif");
    }
    else {
        for(i=1;i<=N;i++) {
            printf("Masukkan angka-angka dalam array : ");
            scanf("%d", &T[i-1]);
        }
        Sum = 0;
        for(i=1;i<=N;i++) {
            for(j=1;j<=i;j++) {
                Sum = Sum + T[i-1];
            }
        }
        printf("=============================================================");
        printf("\nmaka, hasil penjumlahan seluruh sub array adalah %d", Sum);
    }
    return 0;
}
