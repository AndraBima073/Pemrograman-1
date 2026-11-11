#include <stdio.h>
#include <string.h>

int main(void) {
    char kalimat[100] = "Belajar pemrograman C";

    printf("Kalimat : %s\n", kalimat);
    printf("Panjang string: %zu karakter\n", strlen(kalimat));

    return 0;
}