#include <stdio.h>

long int factorial(int input) {
    long int faktorial = 1;

    for(int i = 1; i <= input; i++){
        faktorial *= i;
    }

    return faktorial;
}

long int permutasi(int n, int r) {
    return factorial(n)/factorial(n-r);
}

long int kombinasi(int n, int r) {
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main() {
    int n, r;

    printf("Selamat datang di alat hitung permutasi dan kombinasi!.\n");
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &n);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &r);

    if(n < 0 || r < 0 || r > n || n > 12){
        printf("Input harus 0 <= r <= n <= 12\n"); // <= 12 digunakan karena batas maksimal angka long
        return 1;
    }

    printf("Hasil dari Permutasi adalah %ld\n", permutasi(n, r));
    printf("Hasil dari Kombinasi adalah %ld", kombinasi(n, r));

    return 0;
}