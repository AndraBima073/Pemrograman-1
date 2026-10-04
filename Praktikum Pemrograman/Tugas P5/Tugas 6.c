#include <stdio.h>

int main() {
    int angka, digit;
    int jumlah = 0;

    printf("Input : ");
    scanf("%d", &angka);

    if (angka < 0) {
        angka = -angka;
    }

    while (angka != 0) {
        digit = angka % 10;
        jumlah = jumlah + digit;
        angka = angka / 10;
    }

    printf("Output: %d\n", jumlah);
    return 0;
}