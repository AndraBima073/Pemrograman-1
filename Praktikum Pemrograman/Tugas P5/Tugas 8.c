#include <stdio.h>

int main(void) {
    int n, i;
    float nilai, min, max, jumlah = 0.0, rata_rata;

    printf("Masukkan jumlah data nilai siswa: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0.\n");
        return 1; 
    }

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai siswa ke-%d: ", i);
        scanf("%f", &nilai);

        jumlah = jumlah + nilai;

        if (i == 1) {
            min = nilai;
            max = nilai;
        } else {
            if (nilai < min) {
                min = nilai;
            }
            if (nilai > max) {
                max = nilai;
            }
        }
    }
    rata_rata = jumlah / n;

    printf("\n=== Rekapitulasi Nilai ===\n");
    printf("Nilai Minimum  : %.2f\n", min);
    printf("Nilai Maksimum : %.2f\n", max);
    printf("Rata-rata      : %.2f\n", rata_rata);

    return 0;
}