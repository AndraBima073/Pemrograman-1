#include <stdio.h>

int main(void) {
    int n, i;
    float nilai, jumlah = 0.0, rata_rata;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan data ke-%d: ", i);
        scanf("%f", &nilai);

        jumlah = jumlah + nilai; 
    }

    rata_rata = jumlah / n;

    printf("\nJumlah = %.0f\n", jumlah);
    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}