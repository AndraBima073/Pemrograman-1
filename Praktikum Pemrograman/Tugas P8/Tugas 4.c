#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char depan[MAX], belakang[MAX];
    char lengkap[2 * MAX + 2];      /* depan + spasi + belakang + '\0' */
    char pembanding[2 * MAX + 2];
    int i, j, panjang;

    /* Baca nama depan */
    printf("Masukkan nama depan    : ");
    fgets(depan, MAX, stdin);

    /* Baca nama belakang */
    printf("Masukkan nama belakang : ");
    fgets(belakang, MAX, stdin);

    /* Hapus '\n' bawaan fgets */
    for (i = 0; depan[i] != '\0'; i++) {
        if (depan[i] == '\n') { depan[i] = '\0'; break; }
    }
    for (i = 0; belakang[i] != '\0'; i++) {
        if (belakang[i] == '\n') { belakang[i] = '\0'; break; }
    }

    /* Gabungkan: depan + spasi + belakang */
    panjang = 0;
    for (i = 0; depan[i] != '\0'; i++) {
        lengkap[panjang++] = depan[i];
    }
    lengkap[panjang++] = ' ';
    for (j = 0; belakang[j] != '\0'; j++) {
        lengkap[panjang++] = belakang[j];
    }
    lengkap[panjang] = '\0';

    printf("\nNama lengkap       : %s\n", lengkap);
    printf("Jumlah karakter    : %d\n", panjang);

    /* Baca nama pembanding */
    printf("\nMasukkan nama pembanding: ");
    fgets(pembanding, sizeof(pembanding), stdin);
    for (i = 0; pembanding[i] != '\0'; i++) {
        if (pembanding[i] == '\n') { pembanding[i] = '\0'; break; }
    }

    /* Bandingkan dengan strcmp() */
    if (strcmp(lengkap, pembanding) == 0) {
        printf("Hasil: nama lengkap SAMA dengan nama pembanding.\n");
    } else {
        printf("Hasil: nama lengkap BERBEDA dengan nama pembanding.\n");
    }

    return 0;
}