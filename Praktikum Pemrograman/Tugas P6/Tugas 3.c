#include <stdio.h>

long long factorial(int input) {
    long long faktorial = 1;
    for (int i = 1; i <= input; i++) {
        faktorial *= i;
    }
    return faktorial;
}

long long permutasi(int n, int r) {
    return factorial(n) / factorial(n - r);
}

long long kombinasi(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Selamat datang di alat hitung permutasi dan kombinasi!\n");

    printf("Masukkan bilangan pertama: ");
    if (scanf("%d", &n) != 1) {
        printf("Masukan tidak valid\n");
        return 1;
    }

    printf("Masukkan bilangan kedua: ");
    if (scanf("%d", &r) != 1) {
        printf("Masukan tidak valid\n");
        return 1;
    }

    if (n < 0 || r < 0 || r > n || n > 20) {
        printf("Input harus 0 <= r <= n <= 20\n"); // 20! adalah faktorial terbesar yang muat di long long
        return 1;
    }

    printf("Hasil dari Permutasi adalah %lld\n", permutasi(n, r));
    printf("Hasil dari Kombinasi adalah %lld\n", kombinasi(n, r));

    return 0;
}