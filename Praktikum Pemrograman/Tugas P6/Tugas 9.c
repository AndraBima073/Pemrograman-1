#include <stdio.h>

int jumlahDigit(int n) {              // rekursif
    if (n < 10) return n;             // basis: satu digit (termasuk 0)
    return (n % 10) + jumlahDigit(n / 10);
}

int jumlahDigitIteratif(int n) {      // iteratif
    int jumlah = 0;
    while (n > 0) {
        jumlah += n % 10;
        n /= 10;
    }
    return jumlah;
}

int main() {
    int n;

    printf("Masukkan bilangan bulat nonnegatif: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Masukan tidak valid\n");
        return 1;
    }

    printf("Jumlah digit (rekursif) = %d\n", jumlahDigit(n));
    printf("Jumlah digit (iteratif) = %d\n", jumlahDigitIteratif(n));

    return 0;
}