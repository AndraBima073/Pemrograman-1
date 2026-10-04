#include <stdio.h>

int main(void) {
    int nilai;

    printf("Masukkan nilai 0-100: ");
    scanf("%d", &nilai);

    while (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid. Masukkan lagi: ");
        scanf("%d", &nilai);
    }

    printf("Nilai diterima = %d\n", nilai);
    return 0;
}
// Modifikasi: Tambahkan penghitung jumlah percobaan input.