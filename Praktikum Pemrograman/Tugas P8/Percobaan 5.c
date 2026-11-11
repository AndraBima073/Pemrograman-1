#include <stdio.h>
#include <string.h>

int main(void) {
    char depan[80] = "Pemrograman";
    char belakang[] = " Dasar";
    char salinan[80];

    strcpy(salinan, depan);
    printf("Hasil salinan : %s\n", salinan);
    strcat(salinan, belakang);
    printf("Hasil gabungan: %s\n", salinan);

    return 0;
}