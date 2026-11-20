#include <stdio.h>
#include <ctype.h>

#define MAKS 256

int hitungKata(const char *s){
    int jumlah = 0;
    int dalamKata = 0;

    while (*s != '\0'){
        if (isspace((unsigned char)*s)) {
            dalamKata = 0;
        } else if (!dalamKata) {
            dalamKata = 1;
            jumlah++;
        }
        s++;
    }
    return jumlah;
}

void kapitalAwalKata (char *s){
    int awalKata = 1;

    while(*s != '\0'){
        if (isspace((unsigned char)*s)){
            awalKata = 1;
        } else if (awalKata) {
            *s = toupper((unsigned char)*s);
            awalKata = 0;
        }
        s++;
    }
}

int main() {
    char kalimat[MAKS];
    char *p;

    printf("Masukkan string: ");
    if (fgets(kalimat, MAKS, stdin) == NULL){
        return 1;
    }

    for (p = kalimat; *p != '\0'; p++){
        if(*p == '\n'){
            *p = '\0';
        }
    }

    printf("\n[Soal 1] Jumlah kata      : %d\n", hitungKata(kalimat));

    kapitalAwalKata(kalimat);
    printf("[Soal 2] Huruf awal besar   : %s\n", kalimat);

    return 0;
}