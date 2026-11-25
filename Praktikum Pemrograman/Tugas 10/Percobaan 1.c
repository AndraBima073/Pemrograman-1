#include <stdio.h>

struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

int main(void) {
    struct Tanggal sekarang = {26, 6, 2026};
    
    printf("Tanggal: %02d-%02d-%04d\n", sekarang.tanggal, sekarang.bulan, sekarang.tahun);

    return 0;
}