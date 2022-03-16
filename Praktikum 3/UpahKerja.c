/*Nama File   : UpahKerja.c*/
/*Deskripsi   : Menampilkan upah kerja berdasarkan banyaknya jam kerja pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int golongan; /*golongan pekerja, terdiri dari 1 sampai 4*/
    int jam; /*durasi jam kerja per minggu, jam*/
    int upah; /*total upah yang diterima, Rupiah*/

/*Algoritma*/
    printf("==================== Program UpahKerja ======================\n");
    printf("=============================================================\n");
    printf("Masukkan golongan pekerja: ");
    scanf("%d", &golongan);
    printf("Masukkan durasi jam kerja (jam): ");
    scanf("%d", &jam);
    if (jam < 0) {
        printf("Durasi Jam Kerja Tidak Valid");
    }
    else if (jam <= 40) {
        switch (golongan) {
            case 1 :
                upah = jam * 1000;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            case 2 :
                upah = jam * 1500;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            case 3 :
                upah = jam * 2000;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            case 4 :
                upah = jam * 2500;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            default :
                printf("Golongan Pekerja Tidak Valid");
                break;
        }
    }
    else { /*jam > 40*/
        switch (golongan) {
            case 1 :
                upah = jam * 1000 + (jam - 40) * 1000 * 1.5;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            case 2 :
                upah = jam * 1500 + (jam - 40) * 1500 * 1.5;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            case 3 :
                upah = jam * 2000 + (jam - 40) * 2000 * 1.5;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            case 4 :
                upah = jam * 2500 + (jam - 40) * 2500 * 1.5;
                printf("maka, total upah yang diterima: %d Rupiah", upah);
                break;
            default :
                printf("Golongan Pekerja Tidak Valid");
                break;
        }
    }
    return 0;
}
