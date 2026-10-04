#include <stdio.h>

int main(void) {
    int angka, sisa;
    int kebalikan = 0;

    printf("Input: ");
    scanf("%d", &angka);

    while (angka != 0) {
        sisa = angka % 10;
        kebalikan = kebalikan * 10 + sisa;
        angka = angka / 10;
    }

    printf("Output: %d\n", kebalikan);

    return 0;
}