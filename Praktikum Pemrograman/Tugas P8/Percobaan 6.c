#include <stdio.h>
#include <string.h>

int main(void) {
    char kalimat[] = "Praktikum membahas fungsi string dalam bahasa C";
    char pola[] = "string";
    char *hasil = strstr(kalimat, pola);

    if (hasil != NULL)
        printf("Substring ditemukan pada indeks %td.\n", hasil - kalimat);
    else
        printf("Substring tidak ditemukan.\n");

    return 0;
}