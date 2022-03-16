/*Nama File   : HargaDiskon.c*/
/*Deskripsi   : Menampilkan harga setelah diskon pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    char jenis; /*jenis barang, terdiri dari A, B atau C*/
    int harga; /*harga barang sebelum diskon (> 200 dan < 10000), Rupiah*/
    int total; /*harga barang setelah diskon, Rupiah*/

/*Algoritma*/
    printf("==================== Program HargaDiskon ====================\n");
    printf("=============================================================\n");
    printf("Masukkan kode jenis barang: ");
    scanf("%c", &jenis);
    printf("Masukkan harga barang (Rupiah): ");
    scanf("%d", &harga);
    switch (jenis) {
        case 'A' :
            total = harga - (harga * (10/100.));
            printf("maka, harga barang setelah diskon: %d Rupiah", total);
            break;
        case 'B' :
            total = harga - (harga * (15/100.));
            printf("maka, harga barang setelah diskon: %d Rupiah", total);
            break;
        case 'C' :
            total = harga - (harga * (20/100.));
            printf("maka, harga barang setelah diskon: %d Rupiah", total);
            break;
        default :
            printf("Kode Barang Tidak Tepat");
            break;
    }
    return 0;
}
