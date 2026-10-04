#include <stdio.h>

int main(void) {
    int n, i, jumlah = 0;

    printf("Masukkan n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        jumlah += i;
    }
    printf("Jumlah = %d\n", jumlah);
    return 0;
}

// Modifikasi: Ubah program agar menghitung jumlah bilangan genap dari 1 sampai n.