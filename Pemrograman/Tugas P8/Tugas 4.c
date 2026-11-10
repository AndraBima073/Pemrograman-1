#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[] = "POLITEKNIK ELEKTRONIKA NEGERI SURABAYA";
    int panjang = strlen(kalimat);
    int baris, spasi, i;

    for (baris = 1; baris <= panjang; baris++) {

        spasi = (panjang - baris) / 2;
        for (i = 0; i < spasi; i++){
            putchar(' ');
        }

        for (i = 0; i < baris; i++){
            putchar(kalimat[i]);
        }

        putchar('\n');
    }

    return 0;
}