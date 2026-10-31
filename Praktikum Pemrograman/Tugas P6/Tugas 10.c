#include <stdio.h>
#include <stdbool.h>

int hitungDigit(int n) {
    if (n == 0) return 1;             // 0 dihitung satu digit
    int cacah = 0;
    while (n > 0) {
        cacah++;
        n /= 10;
    }
    return cacah;
}

long long balikDigit(int n) {
    long long hasil = 0;
    while (n > 0) {
        hasil = hasil * 10 + n % 10;
        n /= 10;
    }
    return hasil;
}

bool palindrom(int n) {
    return n == balikDigit(n);
}

int main() {
    int n;

    printf("Masukkan bilangan bulat nonnegatif: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Masukan tidak valid\n");
        return 1;
    }

    printf("Jumlah digit  = %d\n", hitungDigit(n));
    printf("Dibalik       = %lld\n", balikDigit(n));
    printf("Palindrom?    = %s\n", palindrom(n) ? "ya" : "tidak");

    return 0;
}