#include <stdio.h>
#include <string.h>

void strsisip(char *teks, const char *sisipan, int posisi) {
    int panjangSumber = strlen(teks);
    int panjangSisipan = strlen(sisipan);

    if (posisi < 0){
        posisi = 0;
    }
    if (posisi > panjangSumber){
        posisi = panjangSumber;
    }

    memmove(teks + posisi + panjangSisipan, teks + posisi, panjangSumber - posisi + 1);
    memcpy(teks + posisi, sisipan, panjangSisipan);
}

int main() {
    char teks[] = "salah orang";

    printf("Sebelum: \"%s\"\n", teks);
    strsisip(teks, "se", 6);
    printf("Sesudah : \"%s\"\n", teks);
    
    return 0;
}