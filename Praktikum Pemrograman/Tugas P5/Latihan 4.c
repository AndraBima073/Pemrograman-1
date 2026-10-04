#include <stdio.h>

int main(void) {
    int i, j, spasi;
    int tinggi = 5;

    for (i = 1; i <= tinggi; i++) {
        for (spasi = 1; spasi <= tinggi - i; spasi++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* "); 
        }
        printf("\n");
    }
    return 0;
}
// Modifikasi: Ubah pola agar membentuk segitiga terbalik.