#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Masukkan jumlah suku = ");
    scanf("%d", &n);
    printf("\n");

    printf("1) Pola 2^n: ");
    for (int i = 1; i <= n; i++) {
        int hasil = (int)pow(2, i);
        printf("%d", hasil);
        if (i < n) printf(", ");
    }
    printf("\n");

    printf("2) Pola n^2: ");
    for (int i = 1; i <= n; i++) {
        int hasil = (int)pow(i, 2);
        printf("%d", hasil);
        if (i < n) printf(", ");
    }
    printf("\n");

    printf("3) Pola n^3: ");
    for (int i = 1; i <= n; i++) {
        int hasil = (int)pow(i, 3);
        printf("%d", hasil);
        if (i < n) printf(", ");
    }
    printf("\n");

    return 0;
}