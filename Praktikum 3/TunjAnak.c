/*Nama File   : TunjAnak.c*/
/*Deskripsi   : Menampilkan besarnya tunjangan anak yang diberikan pada layar*/
/*Nama        : Bonifasius Bryan Suryaningtyas*/
/*NIM         : 24060121130066*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int jumlah; /*jumlah anak*/
    int gaji; /*besar gaji pokok, Rupiah*/
    int tunjangan; /*total tunjangan yang diterima, Rupiah*/

/*Algoritma*/
    printf("==================== Program TunjAnak =======================\n");
    printf("=============================================================\n");
    printf("Masukkan jumlah anak: ");
    scanf("%d", &jumlah);
    printf("Masukkan besar gaji pokok (Rupiah): ");
    scanf("%d", &gaji);
    if (jumlah < 0) {
        printf("Jumlah Anak Tidak Valid");
    }
    else if (jumlah >= 0 && jumlah <= 3) {
        tunjangan = jumlah * (gaji * (10/100.));
        printf("maka, total tunjangan yang diterima: %d Rupiah", tunjangan);
    }
    else { /*jumlah > 3*/
        tunjangan = 3 * (gaji * (10/100.));
        printf("maka, total tunjangan yang diterima: %d Rupiah", tunjangan);
    }
    return 0;
}
