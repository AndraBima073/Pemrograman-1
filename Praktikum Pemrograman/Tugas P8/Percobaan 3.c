#include <stdio.h>
#include <ctype.h>

int main(void) {
    char teks[200];
    int huruf = 0, angka = 0, spasi = 0, lainnya = 0;

    printf("Masukkan sebuah kalimat: ");
    fgets(teks, sizeof teks, stdin);

    for (int i = 0; teks[i] != '\0'; i++) {
        unsigned char c = (unsigned char)teks[i];

        if (isalpha(c))
            huruf++;
        else if (isdigit(c))
            angka++;
        else if (isspace(c))
            spasi++;
        else
        lainnya++;
    }

    printf("Huruf : %d\n", huruf);
    printf("Angka : %d\n", angka);
    printf("Spasi/whitespace : %d\n", spasi);
    printf("Karakter lainnya : %d\n", lainnya);

    return 0;
}