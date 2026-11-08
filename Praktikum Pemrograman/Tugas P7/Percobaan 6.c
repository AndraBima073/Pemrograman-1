#include <stdio.h>

int main() {
    const char digit[] = "0123456789ABCDEF";
    long long bilangan;
    int basis, sisa[64], n = 0;
    
    printf("Bilangan desimal non-negatif: ");

    if (scanf("%llu", &bilangan) != 1) return 1;

    printf("Basis tujuan (2, 8, 10, 16): ");
    if (scanf("%d", &basis) != 1 || (basis != 2 && basis != 8 && basis != 10 && basis != 16)) {
        printf("Basis tidak valid.\n");
        return 1;
    }

    do {
        sisa[n++] = (int)(bilangan % basis);
        bilangan /= basis;
    } while (bilangan > 0 && n < 64);

    printf("Hasil konversi: ");
    while (n > 0) printf("%c", digit[sisa[--n]]);
    printf("\n");
    return 0;
}