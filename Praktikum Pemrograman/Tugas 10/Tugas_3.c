#include <stdio.h>
#include <stdlib.h>

struct tanggal{
    int hari;
    int bulan;
    int tahun;
};

int isKabisat(int tahun){
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

long hitungTotalHari(struct tanggal t) {
    int hariPerBulan[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long total = 0;

    for (int y = 1; y < t.tahun; y++){
        total += isKabisat(y) ? 366 : 365;
    }

    for (int m = 1; m < t.bulan; m++) {
        total += hariPerBulan[m - 1];
        if (m == 2 && isKabisat(t.tahun)) {
            total += 1;
        }
    }

    total += t.hari;
    return total;
}

int main() {
    struct tanggal tgl1, tgl2;

    printf("Tanggal 1: ");
    scanf("%d-%d-%d", &tgl1.hari, &tgl1.bulan, &tgl1.tahun);

    printf("Tanggal 2: ");
    scanf("%d-%d-%d", &tgl2.hari, &tgl2.bulan, &tgl2.tahun);

    long totalHari1 = hitungTotalHari(tgl1);
    long totalHari2 = hitungTotalHari(tgl2);

    // Menggunakan labs() agar selisih selalu bernilai positif
    long selisih = labs(totalHari2 - totalHari1);

    printf("Selisih Tanggal: %ld Hari\n", selisih);

    return 0;
}
