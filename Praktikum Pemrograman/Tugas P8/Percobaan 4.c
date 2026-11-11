#include <stdio.h>
#include <string.h>

int main(void) {
    char teks[100] = "Algoritma dan pemrograman";
    char target = 'a';
    char *posisi = strchr(teks, target);

    printf("Teks : %s\n", teks);
    if (posisi != NULL)
        printf("Karakter '%c' ditemukan pada indeks %td.\n", target, posisi - teks);
    else
        printf("Karakter tidak ditemukan.\n");

    return 0;
}