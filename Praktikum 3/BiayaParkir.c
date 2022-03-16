/*Nama File   : BiayaParkir.c*/
/*Deskripsi   : Menampilkan besarnya biaya parkir berdasarkan durasi pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int durasi; /*lamanya parkir, jam*/
    int biaya; /*biaya parkir, Rupiah*/

/*Algoritma*/
    printf("==================== Program BiayaParkir ====================\n");
    printf("=============================================================\n");
    printf("Masukkan durasi lamanya parkir (jam): ");
    scanf("%d", &durasi);
    if (durasi < 0) {
        printf("Durasi Parkir Tidak Valid");
    }
    else if (durasi <= 2) {
        biaya = 2000;
        printf("maka, biaya parkir yang harus dibayar: %d Rupiah", biaya);
    }
    else { /*durasi > 2*/
        biaya = ((durasi - 2) * 500 + 2000);
        printf("maka, biaya parkir yang harus dibayar: %d Rupiah", biaya);
    }
    return 0;
}
