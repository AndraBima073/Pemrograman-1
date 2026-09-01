#include <stdio.h>

int main() {

    int a = 25, b = 7;
    float Penjumlahan = a + b;
    float Pengurangan = a - b;
    float Perkalian = a * b;
    float Pembagian = a / b;
    float Sisa = a % b;

    printf("Hasil Penjumlahan   = %.2f\n", Penjumlahan);
    printf("Hasil Pengurangan   = %.2f\n", Pengurangan);
    printf("Hasil Perkalian     = %.2f\n", Perkalian);
    printf("Hasil Pembagian     = %.2f\n", Pembagian);
    printf("Hasil Sisa          = %.2f\n", Sisa);

    return 0;
}