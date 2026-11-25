#include <stdio.h>
#include <stdbool.h>

struct tanggal{
    int hari;
    int bulan;
    int tahun;
};

bool isKabisat(int tahun) {
    return ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0));
}

int getJumlahHari(int bulan, int tahun) {
    switch (bulan) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isKabisat(tahun) ? 29 : 28;
        default:
            return 0; // Bulan tidak valid
    }
}

struct tanggal dapatkanTanggalBesok(struct tanggal tgl) {
    struct tanggal besok = tgl;
    int maxHari = getJumlahHari(tgl.bulan, tgl.tahun);
    if (tgl.hari < maxHari) {
        // Hari biasa dalam bulan yang sama
        besok.hari++;
    } else {
        // Akhir bulan, reset hari ke 1
        besok.hari = 1;
        if (tgl.bulan == 12) {
            // Akhir tahun, reset bulan ke 1 dan tambah tahun
            besok.bulan = 1;
            besok.tahun++;
        } else {
            // Bulan berikutnya
            besok.bulan++;
        }
    }
    return besok;
}

int main() {
    struct tanggal sekarang, besok;
    printf("Tanggal : ");
    // Format input: hari-bulan-tahun (contoh: 26-11-2023)
    if (scanf("%d-%d-%d", &sekarang.hari, &sekarang.bulan, &sekarang.tahun) != 3) {
        printf("Format input salah! Gunakan format HH-BB-TTTT (contoh: 26-11-2023)\n");
        return 1;
    }
    // Validasi sederhana
    int maxHari = getJumlahHari(sekarang.bulan, sekarang.tahun);
    if (sekarang.bulan < 1 || sekarang.bulan > 12 || sekarang.hari < 1 || sekarang.hari > maxHari) {
        printf("Tanggal yang dimasukkan tidak valid!\n");
        return 1;
    }
    // Hitung tanggal besok
    besok = dapatkanTanggalBesok(sekarang);
    // Tampilkan hasil dengan padding 2 digit (%02d)
    printf("Besok Tanggal: %02d-%02d-%04d\n", besok.hari, besok.bulan, besok.tahun);
    return 0;

}
