#include <stdio.h>

int main() {
    int baris, kolom;

    printf("Masukkan jumlah baris = ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom = ");
    scanf("%d", &kolom);

    printf("\n");

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}