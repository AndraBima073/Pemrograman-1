#include <stdio.h>

struct Tanggal {
    int tanggal, bulan, tahun;
};

void cetakTanggal(struct Tanggal t) {
    const char *namaBulan[] = {
        "", "Januari", "Februari", "Maret", "April",
        "Mei", "Juni", "Juli", "Agustus", "September",
        "Oktober", "November", "Desember"
    };

    if (t.bulan < 1 || t.bulan > 12) {
        printf("Bulan tidak valid.\n");
        return;
    }

    printf("Tanggal: %d %s %d\n",
    t.tanggal, namaBulan[t.bulan], t.tahun);
}

int main() {
    struct Tanggal hariIni;

    printf("Masukkan tanggal bulan tahun: ");

    if (scanf("%d %d %d",
        &hariIni.tanggal, &hariIni.bulan, &hariIni.tahun) != 3) {
        printf("Input tidak valid.\n");
        return 1;
    }

    cetakTanggal(hariIni);

    return 0;
}