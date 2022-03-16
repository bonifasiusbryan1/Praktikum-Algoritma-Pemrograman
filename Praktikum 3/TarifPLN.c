/*Nama File   : TarifPLN.c*/
/*Deskripsi   : Menampilkan tarif listrik yang dikenakan pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int golongan; /*golongan tarif, terdiri dari 1 atau 2*/
    int daya; /*pemakaian daya listrik, kWH*/
    int biaya; /*tarif listrik yang dikenakan, Rupiah*/

/*Algoritma*/
    printf("==================== Program TarifPLN =======================\n");
    printf("=============================================================\n");
    printf("Masukkan golongan tarif: ");
    scanf("%d", &golongan);
    printf("Masukkan pemakaian daya listrik (kWH): ");
    scanf("%d", &daya);
    if (golongan == 1) {
        if (daya < 0) {
            printf("Daya Listrik Tidak Valid");
        }
        else if (daya >= 0 && daya < 100) {
            biaya = 100 * 1000;
            printf("maka, tarif listrik yang dikenakan: %d Rupiah", biaya);
        }
        else if (daya >= 100 && daya < 1000) {
            biaya = daya * 1000;
            printf("maka, tarif listrik yang dikenakan: %d Rupiah", biaya);
        }
        else { /*daya > 1000*/
            biaya = daya * 1000 + (daya * 1000 * (10/100.));
            printf("maka, tarif listrik yang dikenakan: %d Rupiah", biaya);
        }
    }
    else if (golongan == 2) {
        if (daya < 0) {
            printf("Daya Listrik Tidak Valid");
        }
        else if (daya >= 0 && daya < 100) {
            biaya = 100 * 2000;
            printf("maka, tarif listrik yang dikenakan: %d Rupiah", biaya);
        }
        else if (daya >= 100 && daya < 1000) {
            biaya = daya * 2000;
            printf("maka, tarif listrik yang dikenakan: %d Rupiah", biaya);
        }
        else { /*daya > 1000*/
            biaya = daya * 2000 + (daya * 2000 * (10/100.));
            printf("maka, tarif listrik yang dikenakan: %d Rupiah", biaya);
        }
    }
    else {
        printf("Golongan Tarif Tidak Tepat");
    }
    return 0;
}
