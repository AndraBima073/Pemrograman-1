#include <stdio.h>

int main() {
    int teori, praktik;
    char *hasil;

    printf("Masukkan nilai teori: ");
    scanf("%d", &teori);
    printf("Masukkan nilai praktik: ");
    scanf("%d", &praktik);

    hasil = (teori >= 60 && praktik >= 60) ? "Lulus" : "Tidak Lulus";

    printf("Hasil: %s\n", hasil);
    return 0;
}