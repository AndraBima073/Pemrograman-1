#include <stdio.h>

int main () {
    int tahun;

    printf("Masukkan tahun (1900-2400) = ");
    scanf("%d", &tahun);

    if (tahun < 1900 || tahun > 2400) {
        printf("Tahun di luar batas!");
        return 1;
    }

    if (tahun % 400 == 0) {
        printf("Tahun %d adalah Tahun Kabisat\n", tahun);
    } else if (tahun % 4 == 0 && tahun % 100 != 0) {
        printf("Tahun %d adalah Tahun Kabisat\n", tahun);
    } else {
        printf("Tahun %d BUKAN Tahun Kabisat\n", tahun);
    }
    return 0;
}